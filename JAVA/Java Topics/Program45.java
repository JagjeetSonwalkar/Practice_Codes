////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                GUI : closing the frame (using inhertance)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.awt.*;
import java.awt.event.*;

class Program45
{
    public static void main(String Arg[])
    {
        Frame fobj = new Frame("IPL Streming");
        fobj.setSize(800,500);
        fobj.setVisible(true);
        fobj.addWindowListener(new IplListener());
    }
}
class IplListener extends WindowAdapter             //  if any class is extends WindowsAdapter , then other class cannot extends WindowAdapter
{
    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
}