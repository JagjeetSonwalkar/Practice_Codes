import java.util.*;

class C8_List_ArrayList
{
    public static void main(String arg[])
    {
        ArrayList<Integer> num = new ArrayList<Integer>(List.of(1,3,4,6,7,9,8,2,5));

        System.out.println(num + "\n");

        ////////////////////////////////////////////////////////////////////////////////////

        ArrayList <Integer> numCopy =  (ArrayList<Integer>) num.clone();        // Not safe to use clone method because it not Warning-Free	and Safe With Generics

        numCopy.add(100);
        numCopy.add(200);

        System.out.println(numCopy);

       
        ////////////////////////////////////////////////////////////////////////////////////

        ArrayList<Integer> numx = new ArrayList<Integer>();

        numx.ensureCapacity(1000);

        for(int i = 0 ; i < 1000 ; i++)
        {
            numx.addLast(i);
        }

        System.out.println("size of num , After using encureCapacity() : " + numx.size());

        numx.addLast(99999);

        System.out.println(numx);

        /////////////////////////////////////////////////////////////////////////////////////

       List <Integer> listx = new ArrayList<>(List.of(8,6,2,4,7,3,9,1));

       System.out.println(listx);

       listx.sort((a1,a2) -> a1 - a2);  // or simply: Comparator.naturalOrder()
       System.out.println(listx);

       listx.sort((a1,a2) -> a2 - a1); 
       System.out.println(listx);

       List<String> names = new ArrayList<>(List.of("Bun","Sun","Aun"));

       System.out.println(names);

        names.sort(Comparator.naturalOrder());

        System.out.println(names); 

        //////////////////////////////////////////////////////////////////////////////////////

        ArrayList<Integer> list = new ArrayList<>(1000);  // Capacity = 1000
        list.add(10);
        list.add(20); 
        list.add(30);

        System.out.println(list.size());      // Output: 3
        // Capacity is still 1000 internally

        list.trimToSize();   // Reduce capacity to 3 (current size)

        }
}