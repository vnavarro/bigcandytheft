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

  private var bearPlayer:Player;

  override public function create():Void
  {
    super.create();
    bearPlayer = new Player();

    add(bearPlayer);
  }
  
  override public function destroy():Void
  {
    super.destroy();
  }

  override public function update():Void
  {
    super.update();
  } 
}