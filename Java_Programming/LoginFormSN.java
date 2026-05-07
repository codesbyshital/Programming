import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class MarvellousLogin  implements ActionListener
{
    public JFrame fobj;
    public JButton bobj1,bobj2;
    public JTextField tobj;
    public JPasswordField pobj;
    public JLabel UserLabel , PassLabel, ResultLabel;


    public MarvellousLogin(String title, int width, int height) 
    {
        fobj = new JFrame();
        UserLabel = new JLabel("UserName");
        UserLabel.setBounds(50,50,100,30);

        tobj = new JTextField();
        tobj.setBounds(150,50,150,30);

        PassLabel = new JLabel("Password");
        PassLabel.setBounds(50,100,100,30);

        pobj = new JPasswordField();
        pobj.setBounds(150,100,150,30);

        bobj1 = new JButton("Submit");
        bobj1.setBounds(150,150,100,30);

        bobj2 = new JButton("Cancel");
        bobj2.setBounds(260,150,100,30);

        ResultLabel = new JLabel(" ");
        ResultLabel.setBounds(200,200,100,30);

        //Registering Button Events
        bobj1.addActionListener(this);
        bobj2.addActionListener(this);

        fobj.add(bobj1);
        fobj.add(bobj2);
        fobj.add(tobj);
        fobj.add(pobj);
        fobj.add(UserLabel);
        fobj.add(PassLabel);
        fobj.add(ResultLabel);

        fobj.setTitle(title);        
        fobj.setSize(width,height);
        fobj.getContentPane().setBackground(Color.GRAY);
        ResultLabel.setForeground(Color.GREEN);
        fobj.setLayout(null);
        fobj.setVisible(true);
        

        fobj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    }

    public void actionPerformed(ActionEvent ae)
        {
            //Submit Button logic

            if(ae.getSource()==bobj1)
            {
                String uname = tobj.getText();
                String pass = new String(pobj.getPassword());

                if (uname.equals(pass))
                {
                    ResultLabel.setText("Successful Login");
                }
                else
                {
                    ResultLabel.setText("Invalid Login or Password");
                }
            }

            //Cancel Button logic
            if(ae.getSource()==bobj2)
            {
                tobj.setText("");
                pobj.setText("");
                ResultLabel.setText("");
            }

        }
    
}

class LoginFormSN 
{
    public static void main(String A[])
    {
        MarvellousLogin mobj = new MarvellousLogin("Marvellous Login Form",400,300);

    }
}