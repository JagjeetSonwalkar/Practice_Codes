import java.sql.* ; // 1

class DatabaseConnectivity
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

            System.out.println("-------------------customer Table-------------------");
            while(robj.next())
            {
                System.out.print("ID   :"+robj.getInt("ID")+"\t");
                System.out.print("Name :"+robj.getString("Name")+"\t");
                System.out.print("city :"+robj.getString("city")+"\t");
                System.out.print("Age  :"+robj.getInt("Age")+"\t");
                System.out.println("");
            }
            System.out.println("------------------------------------------------------------");

            String Query2 = "select * from Orders";
            robj = sobj.executeQuery(Query2);

            System.out.println("-------------------Orders Table-------------------");
            while(robj.next())
            {
                System.out.print("Order_ID :"+robj.getInt("Order_ID")+"\t");
                System.out.print("Product  :"+robj.getString("Product")+"\t");
                System.out.print("ID       :"+robj.getInt("ID")+"\t");
                System.out.println("");
            }
            System.out.println("------------------------------------------------------------");
        }
        catch(SQLException xsqlobj)
        {
            System.out.println(xsqlobj);
        }
        
    }
}

/*

-------------------customer Table-------------------
ID   :101       Name :virat     city :delhi     Age  :32
ID   :102       Name :Rohit     city :mumbai    Age  :42
ID   :103       Name :Rishab    city :delhi     Age  :19
ID   :204       Name :mohit     city :goa       Age  :21
ID   :205       Name :priya     city :pune      Age  :23
ID   :206       Name :riya      city :pune      Age  :23
------------------------------------------------------------
-------------------Orders Table-------------------
Order_ID :20251 Product  :laptop        ID       :204
Order_ID :20252 Product  :kit bag       ID       :101
Order_ID :20253 Product  :bats  ID       :102
Order_ID :20254 Product  :sun glass     ID       :103
Order_ID :20255 Product  :hair band     ID       :205
Order_ID :20256 Product  :dress ID       :206
------------------------------------------------------------

*/