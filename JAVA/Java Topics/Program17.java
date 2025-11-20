////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                    Packages
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import Addp.Add;                // import_keyword package_name . class_name
import formula.squarep.square;  // import_keyword package_name . class_name
import formula.cubep.cube;      // import_keyword package_name . class_name

class Program17
{
    public static void main(String arg[])
    {
        int iAns = 0 ;

        Add aobj = new Add();       // class_name object_name = new class_name();
        iAns = aobj.addNum(4,10);   // iAns = object_name.method_name(-,-);

        System.out.println("Addition is : "+ iAns);

        square sobj = new square(); // class_name object_name = new class_name();
        iAns = sobj.squareNum(3);   // iAns = object_name.method_name(-,-);

        System.out.println("Square is : "+ iAns);

        cube cobj = new cube();     // class_name object_name = new class_name();
        iAns = cobj.cubeNum(5);     // iAns = object_name.method_name(-,-);

        System.out.println("Cube is : "+ iAns);


    }
}

/*

Addition is : 14
Square is : 9
Cube is : 125

*/