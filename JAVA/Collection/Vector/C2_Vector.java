import java.util.Vector;

class C2_Vector
{
    public static void main(String arg[])
    {
        Vector <Integer> num = new Vector<>(1);

        num.ensureCapacity(5);

        num.add(5);
        num.add(4);
        num.add(3);
        num.add(2);

        System.out.println("num : "+num + "\n"+"size of num : "+num.size() + "\n"+"capacity of num : "+num.capacity()); 

        num.add(15);
        num.add(41);
        num.add(31);
        num.add(21);

        System.out.println("num : "+num + "\n"+"size of num : "+num.size() + "\n"+"capacity of num : "+num.capacity()); 

        System.out.println();

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        Vector <String> name = new Vector<>();

        name.add("ant");
        name.add("apple");
        name.add("done");
        name.add("bun");

        System.out.println("name : "+name);         System.out.println("size of : "+name.size());       System.out.println("capacity of name : "+name.capacity());

        name.setSize(5);

        name.add("run");
        name.add("done");

        name.setSize(2);

        System.out.println("name : "+name);         System.out.println("size of : "+name.size());        System.out.println("capacity of name : "+name.capacity());
    }
}