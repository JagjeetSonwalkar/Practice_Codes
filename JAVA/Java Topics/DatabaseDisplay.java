import java.sql.* ; // 1

class DatabaseDisplay
{
    public static void main(String arg[])
    {
        try
        {
            // 2
            String URL = "jdbc:mysql://localhost:3306/jaggi";  
            String Username = "root";
            String Password = "";
            String Query1 = "select * from customer";
            
            Connection cobj = DriverManager.getConnection(URL,Username,Password); // 3

            Statement sobj = cobj.createStatement();        // 4

            ResultSet robj = sobj.executeQuery(Query1);

            System.out.println("                  CUSTOMER TABLE                ");
            System.out.printf("%-10s %-10s %-10s %-5s%n","ID","Name","city","Age");
            System.out.println("----------------------------------------------------");
            while(robj.next())
            {
                // System.out.print("ID   :"+robj.getInt("ID")+"\t");
                // System.out.print("Name :"+robj.getString("Name")+"\t");
                // System.out.print("city :"+robj.getString("city")+"\t");
                // System.out.print("Age  :"+robj.getInt("Age")+"\t");
                System.out.printf("%-10d %-10s %-10s %-5d%n",
                    robj.getInt("ID"),
                    robj.getString("Name"),
                    robj.getString("city"),
                    robj.getInt("Age")
                );
            }
            System.out.println("----------------------------------------------------");

            String Query2 = "select * from Orders";
            robj = sobj.executeQuery(Query2);

            System.out.println("                  ORDERS TABLE                ");
            System.out.printf("%-10s %-10s %-5s%n","Oreder_ID","Product","ID");
            System.out.println("----------------------------------------------------");
            while(robj.next())
            {
                // System.out.print("Order_ID :"+robj.getInt("Order_ID")+"\t");
                // System.out.print("Product  :"+robj.getString("Product")+"\t");
                // System.out.print("ID       :"+robj.getInt("ID")+"\t");
                System.out.printf("%-10d %-10s %-5d%n",
                    robj.getInt("Order_ID"),
                    robj.getString("Product"),
                    robj.getInt("ID")
                );
            }
            System.out.println("----------------------------------------------------");
        }
        catch(SQLException xsqlobj)
        {
            System.out.println(xsqlobj);
        }
        
    }
}

/*

                  CUSTOMER TABLE
ID         Name       city       Age
----------------------------------------------------
101        virat      delhi      32
102        Rohit      mumbai     42
103        Rishab     delhi      19
204        mohit      goa        21
205        priya      pune       23
206        riya       pune       23
----------------------------------------------------
                  ORDERS TABLE
Oreder_ID  Product    ID
----------------------------------------------------
20251      laptop     204
20252      kit bag    101
20253      bats       102
20254      sun glass  103
20255      hair band  205
20256      dress      206
----------------------------------------------------

*/