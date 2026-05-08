import javax.swing.*;

class GUIclose
{
    public static void main(String A[])
    {
        JFrame fobj = new JFrame("Marvellous PPA");

        fobj.setSize(400,300);
        fobj.setVisible(true);

        fobj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);   //Listner
        
    }
}