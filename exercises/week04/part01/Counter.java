package part01;

import javax.swing.*;
import java.awt.event.*;  

public class Counter extends JFrame {
  JFrame frame;
  Integer value = 0;

  public Counter() {
    JLabel count = new JLabel("", SwingConstants.CENTER);
    count.setBounds(200, 200, 100, 50);
    count.setText(value.toString());

    JButton addButton = new JButton("add");
    addButton.setBounds(125, 300, 100, 40);
    addButton.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        value++;
        count.setText(value.toString());
      }
    });

    JButton subsButton = new JButton("subs");
    subsButton.setBounds(275, 300, 100, 40);
    subsButton.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        value--;
        count.setText(value.toString());
      }
    });

    add(count);
    add(addButton);
    add(subsButton);
    setSize(500, 600);
    setLayout(null);
    setVisible(true);
  }
}
