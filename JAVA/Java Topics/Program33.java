////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                Multi Threading
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Multitasking is a concept where we design such a application which will perform multiple task at the same time .

There are 2 ways to achieve the concept of multitasking :
Process based multitasking  (Multi_processing) 
Thread based multitasking   (Multi_Threading)

process is a running instance of a program

For every process a seprate memory gets allocate by OS , that memory is known as address_space of the process

Thread is light_weight part of process

In case of multi threading to create the multipal tasks we have to create Multithreads

There are 2 ways in which we can create a thread in java
By extending the thread class
by implementing the runnable interface

*/

class Program33
{
    public static void main(String arg[])
    {
//  Thread is inbuilt class . currentThread is method which gives the refrence of currently executing thread . getName method return the name of Thread
        System.out.println("Name of current thread is : "+Thread.currentThread().getName());
    }
}

/*

Name of current thread is : main

*/