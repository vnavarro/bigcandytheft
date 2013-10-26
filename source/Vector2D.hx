package;

import haxe.ds.Vector;

class Vector2D
{
    public static function create(w:Int, h:Int)
    {
        var v = new Vector(w);
        for (i in 0...w)
        {
            v[i] = new Vector(h);
        }
        return v;
    }
}