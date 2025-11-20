// close the frame

import java.awt.*;
import java.awt.event.*;

class Program2
{
    public static void main(String arg[])
    {
        Frame frameObj = new Frame("<--my Frame-->");

        frameObj.setSize(400,400);
        frameObj.setVisible(true);

        frameObj.addWindowListener(new JaggiListener());
    }
}

class JaggiListener implements WindowListener
{
   public void windowDeactivated(WindowEvent obj1)
   {}
   public void windowActivated(WindowEvent obj2)
   {}
   public void windowDeiconified(WindowEvent obj3)
   {}
   public void  windowIconified(WindowEvent obj4)
   {}
   public void  windowClosed(WindowEvent obj5)
   {}
   public void windowClosing(WindowEvent obj6)
   {
        System.exit(0);
   }
   public void windowOpened(WindowEvent obj6)
   {} 
}