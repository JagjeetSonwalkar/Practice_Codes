import java.awt.*;
import java.awt.event.*;

class Program4 
{
    public void actionPerform(ActionEvent aobj)
    {
        System.out.println("nothing");
    }

    public static void main(String arg[])
    {
        Frame frameObj = new Frame("Jaggi");

        frameObj.setSize(400,400);
        
        // You're telling Java: "I don’t want automatic layout. I’ll handle all component positions and sizes manually using setBounds()".
        frameObj.setLayout(null); 

        Button b1, b2, b3, b4;  // means you are declaring four Button objects named b1, b2, b3, and b4. Here's how it can be used in different contexts:

        b1 = new Button("ADD");
        b2 = new Button("SUB");
        b3 = new Button("MUL");
        b4 = new Button("DIV");

        // setBounds(x, y, width, height); sets the position and size of each component.
        b1.setBounds(10,280,80,40);
        b2.setBounds(110,280,80,40);
        b3.setBounds(210,280,80,40);
        b4.setBounds(310,280,80,40);

        // add the button to the frame
        /*
        b1 is a reference variable of type Button.
        new Button("ADD") creates a Button object with the visible text "ADD" displayed on it.
        This button can then be added to a GUI frame or panel and used to handle user interactions.
        */
        frameObj.add(b1);
        frameObj.add(b2);
        frameObj.add(b3);
        frameObj.add(b4);    

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