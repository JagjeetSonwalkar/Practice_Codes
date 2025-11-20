import  java.net.*;

class Program1
{
    public static void main(String arg[])
    {
        try
        {
            URL urlObj = new URL("https://docs.oracle.com/javase/tutorial/networking/urls/creatingUrls.html");

            String sData = null;

            sData = urlObj.getHost();

            System.out.println(sData);
        }
        catch( MalformedURLException e1)
        {
            System.out.println("ERROR: "+e1.getMessage());
        }
    }
}