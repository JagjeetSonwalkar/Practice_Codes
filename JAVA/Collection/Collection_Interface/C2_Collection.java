import java.util.*;

class C2_Collection
{
    public static void main(String arg[])
    {
        // boolean	containsAll(Collection<?> c)

        Collection <String> cobj = new ArrayList<>();

        cobj.add("Sky");
        cobj.add("Hit");
        cobj.add("Dark");

        System.out.println(cobj);

        Collection List1 = Arrays.asList("Sky","Hit");
        Collection List2 = Arrays.asList("Sky","Time");

        System.out.println("newList1 :"+cobj.containsAll(List1));
        System.out.println("newList1 :"+cobj.containsAll(List2));

        //////////////////////////////////////////////////////////////////////////

        // boolean	addAll(Collection<? extends E> c)

        Collection <Character> BG = new ArrayList<>();

        BG.add('A');
        BG.add('B');
        BG.add('C');
        BG.add('D');

        System.out.println(BG);

        Collection <Character> newBG1 = new ArrayList<>();

        newBG1.add('Q');
        newBG1.add('W');
        newBG1.add('E');

        Collection <Character> newBG2 = Arrays.asList('Z','X','V');

        System.out.println(newBG1);
        System.out.println(newBG2);

        BG.addAll(newBG1);
        BG.addAll(newBG2);

        System.out.println("BG After addAll"+BG);

        //////////////////////////////////////////////////////////////////////////
        // boolean	removeAll(Collection<?> c)

        Collection <Integer> num1 = new ArrayList<>();

        num1.add(1);
        num1.add(5);
        num1.add(50);
        num1.add(100);
        num1.add(10);
        num1.add(15);
        num1.add(11);
        num1.add(150);

        System.out.println(num1);

        Collection <Integer> num2 = Arrays.asList(1,5);

        num1.removeAll(num2);

        System.out.println("After using removeAll() : "+num1);

        //////////////////////////////////////////////////////////////////////////
        // boolean retainAll(Collection<?> c)

        Collection <String> name = new ArrayList<>();

        name.add("C");
        name.add("C++");
        name.add("JAVA");

        Collection name2 = Arrays.asList("HTML","C","JS");

        System.out.println(name);
        System.out.println(name2);

        boolean mod = name.retainAll(name2);

        System.out.println("mod is : "+ mod);
        System.out.println("name is : "+name);

        //////////////////////////////////////////////////////////////////////////
        // void	clear()

        Collection <String> data = new ArrayList<>();

        data.add("Sun");
        data.add("Sky");
        data.add("Cloud");

        System.out.println("Data before clear all data " + data);

        data.clear();

        System.out.println("Data After clear all data " + data);

    }
}