// close the frame

import java.awt.Frame;
import java.awt.event.*;

class Program3
{
    public static void main(String arg[])
    {
        Frame frameObj = new Frame("jaggi Frame");

        frameObj.setSize(350,350);
        frameObj.setVisible(true);

        frameObj.addWindowListener(new JaggiListener());

    }
}

class JaggiListener extends WindowAdapter
{
    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
}