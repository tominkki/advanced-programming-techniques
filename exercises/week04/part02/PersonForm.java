package part02;

import javax.swing.*;
import java.awt.event.*;  

public class PersonForm extends JFrame {
  JFrame frame;
  Student student;

  PersonForm() {
    student = new Student();

    JLabel nameLabel = new JLabel();
    nameLabel.setBounds(20, 50, 100, 40);
    nameLabel.setText("Name:");

    JLabel idLabel = new JLabel();
    idLabel.setBounds(20, 100, 100, 40);
    idLabel.setText("Student Id:");

    JLabel creditsLabel = new JLabel();
    creditsLabel.setBounds(20, 150, 100, 40);
    creditsLabel.setText("Credits:");

    JLabel streetLabel = new JLabel();
    streetLabel.setBounds(20, 200, 100, 40);
    streetLabel.setText("Street:");

    JLabel zipLabel = new JLabel();
    zipLabel.setBounds(20, 250, 100, 40);
    zipLabel.setText("ZIP:");

    JLabel municipalityLabel = new JLabel();
    municipalityLabel.setBounds(20, 300, 100, 40);
    municipalityLabel.setText("Municipality:");

    JTextField nameField = new JTextField();
    nameField.setBounds(120, 50, 200, 40);

    JTextField idField = new JTextField();
    idField.setBounds(120, 100, 200, 40);

    JTextField creditsField = new JTextField();
    creditsField.setBounds(120, 150, 200, 40);

    JTextField streetField = new JTextField();
    streetField.setBounds(120, 200, 200, 40);

    JTextField zipField = new JTextField();
    zipField.setBounds(120, 250, 200, 40);

    JTextField municipalityField = new JTextField();
    municipalityField.setBounds(120, 300, 200, 40);

    JButton submit = new JButton("submit");
    submit.setBounds(200, 350, 100, 40);
    submit.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        student.setName(nameField.getText());
        student.setCredits(Integer.parseInt(creditsField.getText()));
        student.setStudentId(idField.getText());
        student.setAddress(new Address(
          streetField.getText(),
          zipField.getText(),
          municipalityField.getText()
        ));
      }
    });


    JLabel[] labels = {
      nameLabel,
      idLabel,
      creditsLabel,
      streetLabel,
      zipLabel,
      municipalityLabel
    };

    JTextField[] fields = {
      nameField,
      idField,
      creditsField,
      streetField,
      zipField,
      municipalityField
    };

    for (JLabel label : labels) {
      add(label);
    }

    for (JTextField field : fields) {
      add(field);
    }
    
    add(submit);
    setSize(500, 600);
    setLayout(null);
    setVisible(true);
  }
}
