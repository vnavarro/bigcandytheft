package;

import openfl.Assets;
import flash.geom.Rectangle;
import flash.net.SharedObject;
import org.flixel.FlxButton;
import org.flixel.FlxG;
import org.flixel.FlxPath;
import org.flixel.FlxSave;
import org.flixel.FlxSprite;
import org.flixel.FlxState;
import org.flixel.FlxText;
import org.flixel.util.FlxMath;

class PlayState extends FlxState
{
  private var level:Level;
  private var bearPlayer:Player;

  override public function create():Void
  {
    super.create();

    level = new Level(this);
    // level = new Level("assets/desert_tile.tmx");

    // add(level.backgroundGroup);
    // add(level.block);
    // add(level.eventsGroup);
    // add(level.foregroundGroup);

    // add(level.collisionGroup);

    //FlxG.camera.follow(player);
    // FlxG.camera.bounds = level.getBounds();
    // FlxG.worldBounds.copyFrom(level.getBounds());

    bearPlayer = new Player();
    bearPlayer.solid = true;
    bearPlayer.x = 100;
    bearPlayer.y = 100;
    add(bearPlayer);

    var kidNPC = new KidNPC();
    add(kidNPC);
  }
  
  override public function destroy():Void
  {
    super.destroy();
  }

  override public function update():Void
  {
    super.update();

    if(level != null && bearPlayer != null){
      FlxG.collide(level.wallGroup,bearPlayer);
    }
  } 
}