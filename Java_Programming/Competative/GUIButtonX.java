import javax.swing.*;

class GUIButtonX
{
    public static void main(String A[])
    {
        JFrame fobj = new JFrame("Marvellous PPA");
        JButton bobj = new JButton("OK");

        
        bobj.setBounds(100,100,150,50);    //x=100,y=100,width-150,height-50
        fobj.add(bobj);
              

        fobj.setSize(400,300);

        fobj.setLayout(null);

        fobj.setVisible(true);


        fobj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);   //Listner
        
    }
}