import java.util.*;

class C1_Stack
{
    public static void main(String[] arg)
    {
        Stack <Integer> plate = new Stack<>();

        plate.ensureCapacity(5);

        plate.add(1);
        plate.add(2);
        plate.add(3);
        plate.add(4);

        System.out.println(plate);
        System.out.println("capacity of plate is : "+plate.capacity());

        plate.push(111);
        plate.push(211);
        plate.push(311);

        System.out.println(plate);
        System.out.println("capacity of plate is : "+plate.capacity());

        plate.pop();
        plate.pop();

        System.out.println(plate);
        System.out.println("capacity of plate is : "+plate.capacity());

        
    }
}