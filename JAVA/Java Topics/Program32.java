////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                super (keyword)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
In Java, super is a keyword that helps a child class (a class that inherits from another class) interact with its parent class (the class it inherits from). You can think of super as a way to refer to the parent class.

Here are the main things super does:

1. Calling the Parent Class Constructor
When you create an object of a child class, the parent class also needs to be set up properly (because the child class inherits properties from the parent class). You use super() to call the constructor (the method that sets up the object) of the parent class.

For example, if the parent class has a constructor that sets some values, you use super() in the child class to call that constructor.

Example:

class Animal {
    String name;

    // Parent class constructor
    public Animal(String name) {
        this.name = name;
    }
}

class Dog extends Animal {

    public Dog(String name) {
        super(name);  // Calls the parent class constructor
    }
}

public class Main {
    public static void main(String[] args) {
        Dog dog = new Dog("Buddy");  // Creates a Dog object and calls the Animal constructor
    }
}
2. Calling a Parent Class Method
If a child class overrides a method from the parent class (gives a new version of the method), you can still call the original version of that method from the parent class using super.

Example:
java
Copy
class Animal {
    public void makeSound() {
        System.out.println("Animal makes sound");
    }
}

class Dog extends Animal {
    @Override
    public void makeSound() {
        System.out.println("Dog barks");
    }

    public void callParentMakeSound() {
        super.makeSound();  // Calls the parent class's method
    }
}

public class Main {
    public static void main(String[] args) {
        Dog dog = new Dog();
        dog.makeSound();  // Calls the Dog class's method
        dog.callParentMakeSound();  // Calls the Animal class's method
    }
}
3. Accessing Parent Class Fields
If both the parent class and child class have a variable with the same name, you can use super to refer to the parent class's variable.

Example:
java
Copy
class Animal {
    String name = "Animal";
}

class Dog extends Animal {
    String name = "Dog";  // Child class has a variable with the same name

    public void printNames() {
        System.out.println("Child class name: " + name);  // This refers to the Dog class's variable
        System.out.println("Parent class name: " + super.name);  // This refers to the Animal class's variable
    }
}

public class Main {
    public static void main(String[] args) {
        Dog dog = new Dog();
        dog.printNames();
    }
}
In Simple Terms:
super() is used to call the constructor (setup method) of the parent class from the child class.
super.methodName() is used when you want to call a method from the parent class, even if the child class has overridden it.
super.fieldName is used to access a field (variable) in the parent class when the child class has a field with the same name.
Why Use super?
Using super helps you:

Avoid repeating code in the child class by reusing the parent class's code.
Call methods and constructors from the parent class when needed, making the relationship between parent and child classes clear.

*/