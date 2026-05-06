//User-defined Package import
import PPA.Marvellous;
import PPA.InfoSystems;
import PPA.LB.Pune;

//java -cp . Client.java

class Client
{
    public static void main(String A[])
    {
        Marvellous mobj = new Marvellous();
        InfoSystems iobj = new InfoSystems();
        Pune pobj = new Pune();

        System.out.println("Inside main of client");

        mobj.fun();
        iobj.gun();
        pobj.sun();

    }
}