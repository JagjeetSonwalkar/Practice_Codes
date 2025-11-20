import java.util.*;

class C1_Collection
{
    public static void main(String arg[])
    {
        /*
            What is a Conversion Constructor?

            Suppose you have a Set (which removes duplicates), and you want to make a List (which keeps order and allows duplicates) from it.

            You can convert one type of collection to another like this:
        */
        Collection <Integer> cobj = new HashSet<>();

        cobj.add(10);
        cobj.add(20);
        cobj.add(30);
        cobj.add(20);
        cobj.add(30);

        System.out.println(cobj);

        Collection <Integer> dobj = new ArrayList<>(cobj);

        dobj.add(50);
        dobj.add(60);
        dobj.add(70);
        dobj.add(60);
        dobj.add(70);

        System.out.println(dobj);

        //////////////////////////////////////////////////////////////
        // int size() : Returns the number of elements currently stored in the collection.

        System.out.println("Size is : "+dobj.size());

        //////////////////////////////////////////////////////////////
        // boolean isEmpty() : check wheter object is empty or not

        boolean bChech = false ;

        if(dobj.isEmpty())
        {
            System.out.println("Object is empty !");
        }
        else
        {
            System.out.println("Object is not empty");
        }

        ////////////////////

        System.out.println("dobj is empty or not : "+dobj.isEmpty());

        //////////////////////////////////////////////////////////////
        //  boolean contains(Object element) :  it is used to check if a specific element exists in a collection.

        System.out.println("In dobj 100 is present or not : "+dobj.contains(100));
        System.out.println("In dobj 50 is present or not : "+dobj.contains(50));

        //////////////////////////////////////////////////////////////
        // boolean remove(Object element)

        dobj.remove(70);
        dobj.remove(10);

        System.out.println("Array List after removing some element : "+dobj);

        //////////////////////////////////////////////////////////////
        // Iterator<E> iterator()

        System.out.println();

        Iterator<Integer> travel = dobj.iterator();
        Integer iValue = 0 ;

        while(travel.hasNext())
        {
            iValue = travel.next();
            System.out.println(iValue);
        }

        System.out.println();
    }
}