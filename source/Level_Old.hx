// package;

// import flixel.addons.editors.tiled.TiledLayer;
// import flixel.addons.editors.tiled.TiledMap;
// import flixel.addons.editors.tiled.TiledObject;
// import flixel.addons.editors.tiled.TiledObjectGroup;
// import flixel.addons.editors.tiled.TiledTile;
// import flixel.addons.editors.tiled.TiledTileSet;
// import org.flixel.addons.tile.FlxTilemapExt;
// import org.flixel.addons.tile.FlxTileSpecial;
// import org.flixel.FlxG;
// import org.flixel.FlxObject;
// import org.flixel.group.FlxGroup;
// import org.flixel.group.FlxTypedGroup;
// import org.flixel.tile.FlxTilemap;
// import org.flixel.util.FlxRandom;
// import org.flixel.util.FlxRect;

// /**
//  * ...
//  * @author MrCdK
//  */
// class Level_Old extends TiledMap
// {
//   private inline static var PATH_TILESETS = "maps/";

//   public var backgroundGroup:FlxGroup;
//   public var foregroundGroup:FlxGroup;
//   public var collisionGroup:FlxGroup;
//   public var eventsGroup:FlxGroup;

//   private var bounds:FlxRect;

//   public function new(level:Dynamic)
//   //, animFile:Dynamic) 
//   {
//     super(level);

//     // background and foreground groups
//     backgroundGroup = new FlxGroup();
//     foregroundGroup = new FlxGroup();
//     // events and collision groups
//     eventsGroup = new FlxGroup();
//     collisionGroup = new FlxGroup();
//     // The bound of the map for the camera
//     bounds = new FlxRect(0, 0, fullWidth, fullHeight);

//     var tileset:TiledTileSet;
//     var tilemap:FlxTilemapExt;
//     var layer:TiledLayer;

//     // // Prepare the tile animations
//     // var animations = TileAnims.getAnimations(animFile);

//     for (layer in layers) {
//       if (layer.properties.contains("tileset")) {
//         tileset = this.getTileSet(layer.properties.get("tileset"));
//       } else {
//         throw "Each layer needs a tileset property with the tileset name";
//       }

//       if (tileset == null) {
//         throw "The tileset is null";
//       }

//       tilemap = new FlxTilemapExt();
//       // need to set the width and height in tiles because we are loading the map with an array
//       tilemap.widthInTiles = layer.width;
//       tilemap.heightInTiles = layer.height;

//       tilemap.loadMap(
//         layer.tileArray,            
//         PATH_TILESETS + tileset.imageSource,  
//         tileset.tileWidth,            // each tileset can have a different tile width or height
//         tileset.tileHeight,
//         FlxTilemap.OFF,             // disable auto map
//         tileset.firstGID            // IMPORTANT! set the starting tile id to the first tile id of the tileset
//       );

//       var specialTiles:Array<FlxTileSpecial> = new Array<FlxTileSpecial>();
//       var tile:TiledTile;
//       // var animData;
//       var specialTile:FlxTileSpecial;
//       // For each tile in the layer
//       for ( i in 0...layer.tiles.length) { 
//         tile = layer.tiles[i];
//         if (tile != null && isSpecialTile(tile)){
//         //, animations)) {
//           specialTile = new FlxTileSpecial(tile.tilesetID, tile.isFlipHorizontally, tile.isFlipVertically, tile.rotate);
//           // add animations if exists
//           // if (animations.exists(tile.tilesetID)) {
//             // Right now, a special tile only can have one animation.
//             // animData = animations.get(tile.tilesetID)[0];
//             // add some speed randomization to the animation
//             // var randomize:Float = FlxRandom.floatRanged(-animData.randomizeSpeed, animData.randomizeSpeed);
//             // var speed:Float = animData.speed + randomize;

//             // specialTile.addAnimation(animData.frames, speed, animData.framesData);
//           // }
//           specialTiles[i] = specialTile;
//         } else {
//           specialTiles[i] = null;
//         }
//       }
//       // set the special tiles (flipped, rotated and/or animated tiles)
//       tilemap.setSpecialTiles(specialTiles);
//       // set the alpha of the layer
//       tilemap.alpha = layer.opacity;


//       if (layer.properties.contains("fg")) {
//         foregroundGroup.add(tilemap);
//       } else {
//         backgroundGroup.add(tilemap);
//       }
//     }

//     loadObjects();
//   }

//   public function loadObjects() {
//     for (group in objectGroups) {
//       for (obj in group.objects) {
//         loadObject(obj, group);
//       }
//     }
//   }

//   private function loadObject(o:TiledObject, g:TiledObjectGroup) {
//     var x:Int = o.x;
//     var y:Int = o.y;

//     switch(o.type.toLowerCase()) {
//       case "player":
//         var player:Character = new Character(o.name, x, y, "images/chars/"+o.name+".json");
//         player.setBoundsMap(this.getBounds());
//         player.controllable = true;
//         FlxG.camera.follow(player);
//         eventsGroup.add(player);

//       case "npc":
//         var npc:Character = new Character(o.name, x, y, "images/chars/"+o.name+".json");
//         npc.setBoundsMap(this.getBounds());
//         eventsGroup.add(npc);

//       case "collision":
//         var coll:FlxObject = new FlxObject(x, y, o.width, o.height);
//         #if !FLX_NO_DEBUG
//         coll.debugBoundingBoxColor = 0xFFFF00FF;
//         #end
//         coll.immovable = true;
//         collisionGroup.add(coll);
//     }
//   }

//   public function update():Void {
//     updateCollisions();
//     updateEventsOrder();
//   }

//   public function updateEventsOrder():Void {
//     eventsGroup.sort("y", FlxTypedGroup.ASCENDING);
//   }

//   public function updateCollisions():Void {
//     FlxG.collide(eventsGroup, collisionGroup);
//     FlxG.collide(eventsGroup, eventsGroup);
//   }

//   public function getBounds():FlxRect 
//   {
//     return bounds;
//   }

//   private inline function isSpecialTile(tile:TiledTile):Bool{
//   //, animations:Dynamic):Bool {
//     return (tile.isFlipHorizontally || tile.isFlipVertically || tile.rotate != FlxTileSpecial.ROTATE_0);// || animations.exists(tile.tilesetID));
//   }
// }