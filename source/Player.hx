package;

import org.flixel.FlxG;
import org.flixel.FlxObject;
import org.flixel.FlxSprite;

/**
 *
 *@author Navarro
 */
class Player extends FlxSprite{
  public function new(){
    super();
    loadGraphic("assets/player.png");
  }

  override public function update():Void{
    super.update();
    moveAround();
  }

  function moveAround():Void{
    if(FlxG.keys.pressed("RIGHT")){
      x += 10;
    }
    else if(FlxG.keys.pressed("LEFT")){
      x -=10;
    }
    else if(FlxG.keys.pressed("UP")){
      y -= 10;
    }
    else if(FlxG.keys.pressed("DOWN")){
      y += 10; 
    }
  }

}