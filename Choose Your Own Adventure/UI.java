package maven;


import javax.swing.*;
import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

 

public class UI {
    static JFrame frame;
    static Container pane;
    static JPanel panel, panel2;
    static JLabel intro, prompt;
    static JButton startBtn;

 

    public static void main(String[] args) {
        frame = new JFrame("Snowy Christmas");
        frame.setSize(500,500);
        pane = frame.getContentPane();
        pane.setLayout(null); 
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

 


        frame.setResizable(true);
        frame.setVisible(true);
        

        panel = new JPanel(null);
        intro = new JLabel("The snow falls as you walk down soemthing is coming to your life.");
        

        pane.add(panel);
        pane.add(intro);
        pane.add(startBtn);
        

        intro.setBounds(50, 50, 200, 200);
        startBtn.setBounds(100, 100, 300, 300);

        startBtn.addActionListener(new startBtnActionListener());
    }
    static class startBtnActionListener implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            panel.setVisible(true); 
            panel2 = new JPanel(null);
            prompt = new JLabel("You decided to walk down the road: ");
                    
            pane.add(panel2);
            panel2.add(prompt);
            
            panel2.setBounds(0, 0, 500, 500);
            prompt.setBounds(50, 50, 200, 200);
        }
    }
         
}
