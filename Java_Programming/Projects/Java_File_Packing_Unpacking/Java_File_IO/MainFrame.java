import javax.swing.*;

class MainFrame                         //implements ActionListener 
{
   public JFrame fobj;
   public JButton packbtn;
   public JButton unpackbtn;
   
   public MainFrame()
   {
        fobj = new JFrame();

        packbtn = new JButton("Pack");
        packbtn.setBounds(120, 100, 150, 30);

        unpackbtn = new JButton("Unpack");
        unpackbtn.setBounds(120, 180, 150, 30);

        fobj.setLayout(null);

        fobj.add(packbtn);
        fobj.add(unpackbtn);
  
        fobj.setTitle("Packing & Unpacking");

        fobj.setSize(400, 350);

        fobj.setLocationRelativeTo(null);

        fobj.setVisible(true);

        fobj.setDefaultCloseOperation(
            JFrame.EXIT_ON_CLOSE );

        packbtn.addActionListener(e ->
        {
            new PackingFrame();
            fobj.dispose();
        });

        unpackbtn.addActionListener(e ->
        {
            new UnpackingFrame();
            fobj.dispose();
        });
   }
}

