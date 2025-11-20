////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                GUI : closing the frame (using interface)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.awt.*;
import java.awt.event.*;

class Program44
{
    public static void main(String Arg[])
    {
        Frame fobj = new Frame("IPL Streming");
        fobj.setSize(800,500);
        fobj.setVisible(true);
        fobj.addWindowListener(new IplListener());      // This registers a window listener to listen for window events.
    }
}
class IplListener implements WindowListener
{
    public void windowDeactivated(WindowEvent obj)
    {}
    public void windowActivated(WindowEvent obj)
    {}
    public void windowDeiconified(WindowEvent obj)
    {}
    public void windowIconified(WindowEvent obj)
    {}
    public void  windowClosed(WindowEvent obj)  // post action
    {}
    public void windowClosing(WindowEvent obj) // pre action
    {// Called when the user clicks the close button (X) on the frame and closes the window properly.
        System.exit(0);
    }
    public void  windowOpened(WindowEvent obj)
    {}
}

/*


C:\Users\DELL\OneDrive\Desktop\Java>javac Program44.java
Program44.java:14: error: cannot find symbol
        fobj.addWindowListener(new IplListener());
                                   ^
  symbol:   class IplListener
  location: class Program44
Program44.java:16: error: IplListener is not abstract and does not override abstract method windowDeactivated(WindowEvent) in WindowListener
        class IplListener implements WindowListener
        ^
2 errors

C:\Users\DELL\OneDrive\Desktop\Java>javac Program44.java
Program44.java:14: error: cannot find symbol
        fobj.addWindowListener(new IplListener());
                                   ^
  symbol:   class IplListener
  location: class Program44
Program44.java:16: error: IplListener is not abstract and does not override abstract method windowActivated(WindowEvent) in WindowListener
        class IplListener implements WindowListener
        ^
2 errors

C:\Users\DELL\OneDrive\Desktop\Java>javac Program44.java
Program44.java:14: error: cannot find symbol
        fobj.addWindowListener(new IplListener());
                                   ^
  symbol:   class IplListener
  location: class Program44
Program44.java:16: error: IplListener is not abstract and does not override abstract method windowDeiconified(WindowEvent) in WindowListener
        class IplListener implements WindowListener
        ^
2 errors

C:\Users\DELL\OneDrive\Desktop\Java>javac Program44.java
Program44.java:14: error: cannot find symbol
        fobj.addWindowListener(new IplListener());
                                   ^
  symbol:   class IplListener
  location: class Program44
Program44.java:16: error: IplListener is not abstract and does not override abstract method windowIconified(WindowEvent) in WindowListener
        class IplListener implements WindowListener
        ^
2 errors

C:\Users\DELL\OneDrive\Desktop\Java>javac Program44.java
Program44.java:14: error: cannot find symbol
        fobj.addWindowListener(new IplListener());
                                   ^
  symbol:   class IplListener
  location: class Program44
Program44.java:16: error: IplListener is not abstract and does not override abstract method windowClosed(WindowEvent) in WindowListener
        class IplListener implements WindowListener
        ^
2 errors

C:\Users\DELL\OneDrive\Desktop\Java>javac Program44.java
Program44.java:14: error: cannot find symbol
        fobj.addWindowListener(new IplListener());
                                   ^
  symbol:   class IplListener
  location: class Program44
Program44.java:16: error: IplListener is not abstract and does not override abstract method windowClosing(WindowEvent) in WindowListener
        class IplListener implements WindowListener
        ^
2 errors

C:\Users\DELL\OneDrive\Desktop\Java>javac Program44.java
Program44.java:14: error: cannot find symbol
        fobj.addWindowListener(new IplListener());
                                   ^
  symbol:   class IplListener
  location: class Program44
Program44.java:16: error: IplListener is not abstract and does not override abstract method windowClosing(WindowEvent) in WindowListener
        class IplListener implements WindowListener
        ^
2 errors

C:\Users\DELL\OneDrive\Desktop\Java>javac Program44.java
Program44.java:14: error: cannot find symbol
        fobj.addWindowListener(new IplListener());
                                   ^
  symbol:   class IplListener
  location: class Program44
Program44.java:16: error: IplListener is not abstract and does not override abstract method windowOpened(WindowEvent) in WindowListener
        class IplListener implements WindowListener
        ^
2 errors

C:\Users\DELL\OneDrive\Desktop\Java>javac Program44.java
Program44.java:14: error: cannot find symbol
        fobj.addWindowListener(new IplListener());
                                   ^
  symbol:   class IplListener
  location: class Program44
1 error

C:\Users\DELL\OneDrive\Desktop\Java>javac Program44.java

C:\Users\DELL\OneDrive\Desktop\Java>java Program44

*/