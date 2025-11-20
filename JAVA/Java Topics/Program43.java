////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                GUI : Create a Frame
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.awt.*;

class Program43
{
    public static void main(String Arg[])
    {
        // Frame is a class in java.awt used to create a top-level window with a title
        // new Frame("FRAME NAME") creates a new frame with the specified title.
        Frame fobj = new Frame("FRAME NAME");   // Frame is name of class , fobj is object of Frame class , "FRAME NAME" it is the name of frame (name can be any thing)
        fobj.setSize(350,350);                  // Sets the width and height of the frame., here we set the size of Frame (350,350 size is in pixel)
        fobj.setVisible(true);                  // when we create the frame it is on RAM it will not diplay intill we setvisible (Makes the frame visible).
    }
    // In this program we can minimise , maximise the frame but we cant close it .
}