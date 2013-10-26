package;

import org.flixel.FlxG;
import org.flixel.FlxObject;
import org.flixel.FlxSprite;
import org.flixel.FlxGroup;
import org.flixel.FlxState;

class Level {

  public var backgroundGroup:FlxSprite;
  public var wallGroup:FlxGroup;

  public function new(state:FlxState){
    backgroundGroup = new FlxSprite();    
    backgroundGroup.loadGraphic("assets/bgforest.png");
    state.add(backgroundGroup);
    buildOutterWalls();    
    state.add(wallGroup);
  }

  public function buildOutterWalls(){
    var blockSize = 64;
    wallGroup = new FlxGroup();
    var maxLRBLocks = Std.int(FlxG.height/blockSize);
    var maxTBBlocks = Std.int(FlxG.width/blockSize)-2;
    var block:FlxSprite = null;
    var height = blockSize;
    for (i in 0...maxLRBLocks) {      
      wallGroup.add(createWallBlock(0,i*height));
      wallGroup.add(createWallBlock(FlxG.width-blockSize,i*height));      
    }
    for (i in 0...maxTBBlocks) {
      wallGroup.add(createWallBlock(blockSize+i*height,0));
      wallGroup.add(createWallBlock(blockSize+i*height,FlxG.height-blockSize));
    }
  }

  private function createWallBlock(x:Float,y:Float):FlxSprite{
    var block = new FlxSprite();
    block.loadGraphic("assets/block.png");
    block.x = x;
    block.y = y;
    block.solid = block.immovable = true;      
    return block;
  }


}