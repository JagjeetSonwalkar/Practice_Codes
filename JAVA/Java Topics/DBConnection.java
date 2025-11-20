import java.sql.*;

class Connect
{
    public String URL, UserName, Password;
    public Connection connectionObj;
    public Statement statementObj;

    public Connect()
    {
        URL = "jdbc:mysql://localhost:3306/info";
        UserName = "root";
        Password = "";
        connectionObj = null;
        statementObj = null;
    }

    public void getConnect()
    {
        try
        {
            connectionObj = DriverManager.getConnection(URL, UserName, Password);

            statementObj = connectionObj.createStatement();

            System.out.println("Connected DB succesfully.");
        }
        catch (SQLException e1)
        {
            System.out.println("ERROR "+e1.getMessage());
        }
    }
}

class CURD extends Connect
{
    public ResultSet resultSetObj;
    public String Query;
    public Boolean bRet;

    public CURD()
    {
        resultSetObj = null;
        Query = null;
        bRet = false;
    }

    public boolean getAll()
    {
        try
        {
            Query = "Select * from info";
            resultSetObj = statementObj.executeQuery(Query);

            bRet = false;
            while (resultSetObj.next())
            {
                bRet = true;
                System.out.println(resultSetObj.getInt("id") + "\t" + resultSetObj.getString("name") + "\t" +
                        resultSetObj.getInt("age") + "\t" + resultSetObj.getString("country") + "\t");
            }
        }
        catch (SQLException e1)
        {
            System.out.println("ERROR "+e1.getMessage());
        }
        return bRet;
    }

    public boolean getById(int id)
    {
        try
        {
            Query = "Select * from info where id = "+id;
            resultSetObj = statementObj.executeQuery(Query);

            bRet = false;
            while(resultSetObj.next())
            {
                bRet = true;
                System.out.println(resultSetObj.getInt("id") + "\t" + resultSetObj.getString("name") + "\t" +
                        resultSetObj.getInt("age") + "\t" + resultSetObj.getString("country") + "\t");
            }
        }
        catch (SQLException e1)
        {
            System.out.println("ERROR "+e1.getMessage());
        }
        return bRet;
    }

    public boolean getByName(String name)
    {
        try
        {
            Query = "Select * from info where name = '"+name+"'";
            resultSetObj = statementObj.executeQuery(Query);

            bRet = false;
            while(resultSetObj.next())
            {
                bRet = true;
                System.out.println(resultSetObj.getInt("id") + "\t" + resultSetObj.getString("name") + "\t" +
                        resultSetObj.getInt("age") + "\t" + resultSetObj.getString("country") + "\t");
            }
        }
        catch (SQLException e1)
        {
            System.out.println("ERROR "+e1.getMessage());
        }
        return bRet;
    }

    public boolean put(int id, String name, String country, int age)
    {
        bRet = false;

        try {
            Query = "update info set name=" + name + ",set country=" + country + ",set age=" + age + "where id=" + id;

            int rowsAffected = statementObj.executeUpdate(Query);

            if (rowsAffected > 0) {
                bRet = true;
                System.out.println("Record Updated succesfully.");
            } else {
                bRet = false;
            }
        }
        catch (SQLException e1)
        {
            System.out.println("ERROR "+e1.getMessage());
        }
        return bRet;
    }

    public boolean post(int id,String name, String country, int age)
    {
        bRet = false;
        try
        {
            Query = "insert into info values("+id+",'"+name+"','"+country+"',"+age+");";
             resultSetObj = statementObj.executeQuery(Query);
            int rowsAffected = statementObj.executeUpdate(Query);

            if(rowsAffected > 0)
            {
                bRet = true;
                System.out.println("DATA Inserted succesfully.");
            }
            else
            {
                bRet = false;
            }
        }
        catch (SQLException e1)
        {
            System.out.println("ERROR "+e1.getMessage());
        }
        return bRet;
    }

    public boolean deleteById(int id)
    {
        try
        {
            Query = "delete from info where id ="+id;
            // resultSetObj = statementObj.executeQuery(Query);
            int rowsAffected = statementObj.executeUpdate(Query);
            bRet = false;

            if(rowsAffected > 0)
            {
                bRet = true;
                System.out.println("DATA Deleted.");
            }
            else
            {
                bRet = false;
            }
//            while(resultSetObj.next())
//            {
//                bRet = true;
//                System.out.println("DATA Deleted.");
//            }
        }
        catch (SQLException e1)
        {
            System.out.println("ERROR "+e1.getMessage());
        }
        return bRet;
    }
}

class DBConnection
{
    public static void main(String[] arg)
    {
        boolean bRet = false;

        CURD cobj = new CURD();
        cobj.getConnect();

        bRet = cobj.getAll(); if(bRet == false){System.out.println("DATABASE IS EMPTY");}
        bRet = cobj.getById(101); if(bRet == false){System.out.println("NOT FOUND");}
        bRet = cobj.getById(1); if(bRet == false){System.out.println("NOT FOUND");}
        bRet = cobj.getByName("Rohit"); if(bRet == false){System.out.println("NOT FOUND");}
        bRet = cobj.deleteById(103); if(bRet == false){System.out.println("NOT FOUND");}
        bRet = cobj.deleteById(0); if(bRet == false){System.out.println("NOT FOUND");}
        bRet = cobj.post(666,"Hardik","IND",23); if(bRet == false){System.out.println("Record NOT inserted.");}
        bRet = cobj.put(200,"Hardik","IND",33); if(bRet == false){System.out.println("Unbale to UPDATE");}
    }
}