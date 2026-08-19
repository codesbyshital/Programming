import javax.swing.*;

class UnpackingFrame                        //implements ActionListener 
{
   public JFrame fobj;
   public JButton unpackbtn;
   public JButton backbtn;
   public JTextField packTextField;
   public JLabel PackLabel, ResultLabel;

   public UnpackingFrame()
   {
        fobj = new JFrame();
        
        PackLabel = new JLabel("Pack File Name");
        PackLabel.setBounds(50,100 , 150, 30);

        packTextField = new JTextField();
        packTextField.setBounds(150, 100,150,30);

        unpackbtn = new JButton("Unpack");
        unpackbtn.setBounds(50, 150, 110, 30);

        backbtn = new JButton("Back");
        backbtn.setBounds(190, 150, 110, 30);

        ResultLabel = new JLabel();
        ResultLabel.setBounds(80,250,250,30);

        fobj.setLayout(null);

        fobj.add(PackLabel);
        fobj.add(packTextField);

        fobj.add(unpackbtn);
        fobj.add(backbtn);

        fobj.add(ResultLabel);

        fobj.setTitle("Unpacking");

        fobj.setSize(400, 350);

        fobj.setLocationRelativeTo(null);

        fobj.setVisible(true);

        fobj.setDefaultCloseOperation(
            JFrame.EXIT_ON_CLOSE );

        unpackbtn.addActionListener(e ->
        {
            packFiles();
        });

        backbtn.addActionListener(e ->
        {
            new MainFrame();
        });
   }

   private void packFiles()
    {
        String packFileName =
            packTextField.getText().trim();

        if(packFileName.isEmpty())
        {
            ResultLabel.setText(
                "Please enter packed file name."
            );

            return;
        }

        try
        {
            ResultLabel.setText(
                "Unpacking started...\n"
            );

            // =====================================
            // FRONTEND → BACKEND CONNECTION
            // =====================================

            Unpacking unpacking = new Unpacking();

            unpacking.unpack(packFileName);

            ResultLabel.setText(
                "Unpacking completed successfully.\n"
            );
        }
        catch(Exception ex)
        {
            ResultLabel.setText(
                "ERROR: "
                + ex.getMessage()
                + "\n"
            );

        }
    }
}

