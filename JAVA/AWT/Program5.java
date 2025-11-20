import java.awt.*;
import java.awt.event.*;

class Program5
{
    public static void main(String arg[])
    {
        Frame frameObj = new Frame("Jaggi");

        frameObj.setSize(400,400);
        
        // You're telling Java: "I don’t want automatic layout. I’ll handle all component positions and sizes manually using setBounds()".
        frameObj.setLayout(null); 

        TextField t1 ;

        t1 = new TextField();
        t1.setBounds(100,280,80,40);
        frameObj.add(t1);


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