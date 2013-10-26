package;

import org.flixel.FlxG;
import org.flixel.FlxObject;
import org.flixel.FlxSprite;
import com.eclecticdesignstudio.motion.Actuate;

/**
 *
 *@author Navarro
 */
class KidNPC extends FlxSprite{
  var waypoints:Array<Array<Int>>;
  var currWayPoint:Int = 0;
  var timerCurrent:Float;
  var timerCountdown:Float;

  public function new(){
    super();
    loadGraphic("assets/player.png");
    waypoints = new Array<Array<Int>>();
    waypoints[0] = [200,100];
    waypoints[1] = [400,100];
    waypoints[2] = [400,200];
    waypoints[3] = [200,200];
    x = waypoints[currWayPoint][0];
    y = waypoints[currWayPoint][1];

    timerCurrent = 0;
    timerCountdown = 4;
  }

  override public function update():Void{
    super.update();
    timerCurrent += FlxG.elapsed;
    Sys.println(timerCurrent);
    if (timerCurrent >= timerCountdown){
      currWayPoint += 1;
      currWayPoint = currWayPoint % 4;
      Actuate.tween (this, 1, { x: waypoints[currWayPoint][0], y:waypoints[currWayPoint][1] } );
      timerCurrent = 0;
    }
  }

  function moveToNextWaypoint():Void{

  }

}