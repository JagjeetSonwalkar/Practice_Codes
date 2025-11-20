import java.util.*;
import java.util.stream.Collectors;

class Fruit
{
    private String name ;

    public Fruit(String name)
    {
        this.name = name ;
    }

    public String getName()
    {
        return name ;
    }

    public String toString()
    {
        return name ;
    }
}

class C4_set
{
    public static void main(String[] arg)
    {

        List <Fruit> fruits = Arrays.asList
        (
            new Fruit("Apple"),
            new Fruit("Banana"),
            new Fruit("Apple"),
            new Fruit("Banana"),
            new Fruit("orange")
        );

        System.out.println(fruits);

        Set <String> fruitSet = fruits.stream()
                                .map(Fruit::getName)
                                .collect(Collectors.toCollection(TreeSet::new));

        System.out.println(fruitSet);

    }
}