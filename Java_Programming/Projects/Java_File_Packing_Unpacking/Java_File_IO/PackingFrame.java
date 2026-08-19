import javax.swing.*;

class PackingFrame //implements ActionListener 
{
   public JFrame fobj;
   public JButton packbtn;
   public JButton backbtn;
   public JTextField txtFolderField;
   public JTextField packTextField;
   public JLabel FolderLabel, PackLabel, ResultLabel;


   public PackingFrame()
   {
        fobj = new JFrame();
        FolderLabel = new JLabel("Folder Name");
        FolderLabel.setBounds(50, 50, 100, 30);

        txtFolderField = new JTextField();
        txtFolderField.setBounds(150, 50 , 150, 30);
        
        PackLabel = new JLabel("Pack File Name");
        PackLabel.setBounds(50,100 , 150, 30);

        packTextField = new JTextField();
        packTextField.setBounds(150, 100,150,30);

        packbtn = new JButton("Pack");
        packbtn.setBounds(50, 150, 110, 30);

        backbtn = new JButton("Back");
        backbtn.setBounds(190, 150, 110, 30);

        ResultLabel = new JLabel();
        ResultLabel.setBounds(80,250,250,30);

        fobj.setLayout(null);

        fobj.add(FolderLabel);
        fobj.add(txtFolderField);

        fobj.add(PackLabel);
        fobj.add(packTextField);

        fobj.add(packbtn);
        fobj.add(backbtn);

        fobj.add(ResultLabel);

        fobj.setTitle("Packing");

        fobj.setSize(400, 350);

        fobj.setLocationRelativeTo(null);

        fobj.setVisible(true);

        fobj.setDefaultCloseOperation(
            JFrame.EXIT_ON_CLOSE );

        packbtn.addActionListener(e ->
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
        String folderName =
            txtFolderField.getText().trim();


        String packFileName =
            packTextField.getText().trim();


        if(folderName.isEmpty())
        {
            ResultLabel.setText(
                "Please enter folder name."
            );

            return;
        }

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
                "Packing started...\n"
            );


            // =====================================
            // FRONTEND → BACKEND CONNECTION
            // =====================================

            Packing packing = new Packing();


            packing.pack(folderName, packFileName);


            ResultLabel.setText(
                "Packing completed successfully.\n"
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

