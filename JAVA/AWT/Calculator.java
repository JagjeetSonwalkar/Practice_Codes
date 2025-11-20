
import java.awt.*;
import java.awt.event.*;

class Calculator extends WindowAdapter implements ActionListener
{
    public Frame frameObj;
    public Button addButton, subButton, divButton, mulButton, modButton, squareButton;
    public TextField firstNumberTextF, secondNumberTextF;
    public Label displayAnsLable;

    public Integer iNo1, iNo2, iAns;

    public Calculator(String title, int lSize, int wSize)
    {
        frameObj = new Frame(title);
        frameObj.setSize(lSize, wSize);
        frameObj.addWindowListener(this);
        frameObj.setLayout(null);

        /////////////////////////////////////////////////////////////////
        addButton = new Button("ADD");
        subButton = new Button("SUB");
        divButton = new Button("DIV");
        mulButton = new Button("MUL");
        modButton = new Button("MOD");
        squareButton = new Button("^2");

        addButton.setBounds(10,300,40,40);
        subButton.setBounds(100,300,40,40);
        divButton.setBounds(200,300,40,40);
        mulButton.setBounds(300,300,40,40);
        modButton.setBounds(10,350,40,40);
        squareButton.setBounds(100,350,40,40);

        frameObj.add(addButton);
        frameObj.add(subButton);
        frameObj.add(divButton);
        frameObj.add(mulButton);
        frameObj.add(modButton);
        frameObj.add(squareButton);
        ////////////////////////////////////////////////////////////////
        firstNumberTextF = new TextField();
        secondNumberTextF = new TextField();

        firstNumberTextF.setBounds(100,100,80,40);
        secondNumberTextF.setBounds(200,100,80,40);

        frameObj.add(firstNumberTextF);
        frameObj.add(secondNumberTextF);
        ///////////////////////////////////////////////////////////////////
        displayAnsLable = new Label();

        displayAnsLable.setBounds(150,150,200,50);

        frameObj.add(displayAnsLable);
        
        displayAnsLable.setText("ANSWER");
        //////////////////////////////////////////////////////////////////
        addButton.addActionListener(this);
        subButton.addActionListener(this);
        mulButton.addActionListener(this);
        divButton.addActionListener(this);
        modButton.addActionListener(this);
        squareButton.addActionListener(this);
        /////////////////////////////////////////////////////////////////////
        frameObj.setVisible(true);
    }

    public void actionPerformed(ActionEvent actionEventObj)
    {
        if(actionEventObj.getSource() == addButton)
        {
            iNo1 = Integer.parseInt(firstNumberTextF.getText());
            iNo2 = Integer.parseInt(secondNumberTextF.getText());

            iAns = iNo1 + iNo2 ;
            displayAnsLable.setText("Addition is: "+iAns);
        }
        else if(actionEventObj.getSource() == subButton)
        {
            iNo1 = Integer.parseInt(firstNumberTextF.getText());
            iNo2 = Integer.parseInt(secondNumberTextF.getText());

            iAns = iNo1 - iNo2 ;
            displayAnsLable.setText("Subtration is: "+iAns);
        }
        else if(actionEventObj.getSource() == mulButton)
        {
            iNo1 = Integer.parseInt(firstNumberTextF.getText());
            iNo2 = Integer.parseInt(secondNumberTextF.getText());

            iAns = iNo1 * iNo2 ;
            displayAnsLable.setText("Multiplication is: "+iAns);
        }
        else if(actionEventObj.getSource() == divButton)
        {
            iNo1 = Integer.parseInt(firstNumberTextF.getText());
            iNo2 = Integer.parseInt(secondNumberTextF.getText());

            iAns = iNo1 / iNo2 ;
            displayAnsLable.setText("Division is: "+iAns);
        }
        else if(actionEventObj.getSource() == modButton)
        {
            iNo1 = Integer.parseInt(firstNumberTextF.getText());
            iNo2 = Integer.parseInt(secondNumberTextF.getText());

            if(iNo2 != 0)
            {
                iAns = iNo1 % iNo2 ;
                displayAnsLable.setText("Mod is: "+iAns);
            }
            else
            {
                displayAnsLable.setText("Can't mod by zero !");
            }     
        }
        else if(actionEventObj.getSource() == squareButton)
        {
            iNo1 = Integer.parseInt(firstNumberTextF.getText());

            iAns = iNo1 * iNo1 ;
            displayAnsLable.setText("Square is: "+iAns);
        }
    }

    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
}

class Cal
{
    public static void main(String arg[])
    {
        Calculator cobj = new Calculator("my Calculater",400,400);
    }
}