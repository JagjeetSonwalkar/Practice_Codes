////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                Interface (Non primitive Datatype)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
we cant use abstract keyword in interface beacuse all the method are bydefault abstract
It is not allowed to create the concrete method's inside the function 
It is not allowed to create the object of Interface 

Why interface ?
to replace the multipal interface concept (But multipal inteface is NA in java)
*/
interface RBI
{
    int iTaxRate = 30 ; // characterstic's of Interface are bydefault : public , static , final

    public float CalculateIntrest();    // abstract method
}

// The class which are going to implements the interface(RBI) then It is compalsury to provide the defination of CalaculateInstrest() 
class BOM implements RBI
{
    public float CalculateIntrest()
    {
        return 7.5f;
    }
} 

class SBI implements RBI
{
    public float CalculateIntrest()
    {
        return 8.2f;
    }
}

class Program23
{
    public static void main(String arg[])
    {
        // RBI robj = new RBI();        // NA to create object of interface

        System.out.println("Tax rate is : "+RBI.iTaxRate);

        BOM bobj = new BOM();           // bobj is the object of BOM class
        SBI sobj = new SBI();           // sobj is the object of SBI class

        System.out.println("Interest Rate of SBI is : "+sobj.CalculateIntrest());
        System.out.println("Interest Rate of BOM is : "+bobj.CalculateIntrest());

    }
}

/*

Tax rate is : 30
Interest Rate of SBI is : 8.2
Interest Rate of BOM is : 7.5

*/