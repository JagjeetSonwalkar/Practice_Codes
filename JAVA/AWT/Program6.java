import java.awt.*;
import java.awt.event.*;

class Program6
{
    public static void main(String arg[])
    {
        Frame frameObj = new Frame("Jaggi");

        frameObj.setSize(400,400);

        frameObj.setLayout(null);
        
        Label L1;

        L1 = new Label();
        L1.setBounds(50,50,80,80);
        frameObj.add(L1);
        L1.setText("Jay Ganesh...");


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