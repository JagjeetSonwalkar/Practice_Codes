import java.util.*;

class C9_set
{
    public static void main(String[] arg)
    {
        Set <String> c = new HashSet<>(List.of("Sun","Bun","Gun","Run","Fun"));

        System.out.println(c + "\n");

        /////////////////////////////////////////////////////////////////////////////////////////////////
        /* parallelStream :
        In simple words, a parallel stream in Java is a way to make your program work faster by doing tasks at the same time using multiple CPU cores.

        Instead of doing things one after another (like in a normal stream), a parallel stream splits the work into parts and runs them in parallel — like dividing chores among several people to finish faster.

        Example:
        You have a list of 1000 numbers, and you want to double each one.
        A normal stream does it one by one.
        A parallel stream does many of them at the same time on different threads.
        */

       c.parallelStream()
        .forEach(x -> System.out.println(Thread.currentThread().getName() + " <-> " + x));                  System.out.println();

       c.parallelStream()
        .forEachOrdered(z -> System.out.println(Thread.currentThread().getName() + "--" + z));              System.out.println();
        
        ////////////////////////////////////////////////////////////////////////////////////////////////
        // removeIf : The removeIf() method is used to remove elements from a collection if they match a certain condition.

        c.removeIf(x -> x.startsWith("B"));

        c.forEach(System.out::println);                                                                     System.out.println();

        c.removeIf(x -> x.endsWith("n"));

        System.out.println(c);

        ////////////////////////////////////////////////////////////////////////////////////////////////
        // stream : In Java, stream() is a method that lets you process data from collections (like List, Set, etc.) in a clean, functional style — often in a chain of steps like filtering, mapping, and collecting.

        Set <String> q = new HashSet<>(List.of("Sun","Buns","Guns","Run","Funs"));

        q.stream()
            .filter(x -> x.startsWith("S"))
            .forEach(System.out::println);                                                              System.out.println();

        q.stream()
            .filter(x -> x.endsWith("n"))
            .forEachOrdered(System.out::println);
    }
}