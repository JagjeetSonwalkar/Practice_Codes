////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                Interface (Non primitive Datatype)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

interface Dog
{
    public void DogSound() ;
}

interface kingfesher
{
    public void kingfesherSound();
}

abstract class Insect
{
    public void Grasshopper()
    {
        System.out.println("Grasshopper Sound : Trill-Trill");
    }

    abstract public void Mosquito();
}

// A class can extends only one class and implements no. of interface
class Animals extends Insect implements Dog , kingfesher
{
    public void DogSound()
    {
        System.out.println("DOG Sound : bhaun-bhaun");
    }

    public void kingfesherSound()
    {
        System.out.println("kingfesher Sound : hatter-chatter");
    }

    public void Mosquito()
    {
        System.out.println("Mosquito Sound : Buzz-Buzz");
    }
}


class Program25
{
    public static void main(String arg[])
    {
        Animals aobj = new Animals();

        aobj.DogSound();
        aobj.kingfesherSound();
        aobj.Mosquito();
        aobj.Grasshopper();

    }
}

/*

DOG Sound : bhaun-bhaun
kingfesher Sound : hatter-chatter
Mosquito Sound : Buzz-Buzz
Grasshopper Sound : Trill-Trill

*/