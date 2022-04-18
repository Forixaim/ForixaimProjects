package maven;

import javax.swing.*;
import java.awt.Container;
import java.awt.Dimension;
import java.awt.Toolkit;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;



public class UI 
{
    static JFrame Frame;
    static Container Pane;
    static JPanel Panel, Panel2;
    static JLabel Intro, Prompt1, Prompt2, Prompt3, Prompt4;
    static JButton StartBtn, Walkpast, Help, Advise, Ignore, Talk, AskDogs, AskFood, AskChristmas;
    static Dimension ScreenSize;
    short Reputation = 0;
    float Fun = 0;
    final String html = "<html><body style='width: %1spx'>%1s";
    public static void main(String[] args) 
    {
    	//action listeners 
    	
    	Dimension screenSize = Toolkit.getDefaultToolkit().getScreenSize();

        Frame = new JFrame("Snowy Christmas");
        Frame.setSize(screenSize.width, screenSize.height);
        Pane = Frame.getContentPane();
        Pane.setLayout(null); 
        Frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        makeFrameFullSize(Frame);
        
        
        Frame.setResizable(true);
        Frame.setVisible(true);     

        Panel = new JPanel(null);
        Intro = new JLabel("The snow falls as you walk down soemthing is coming to your life.");
        StartBtn = new JButton("Start");
        
        Pane.setBounds(0,0,500,500);
        
        Pane.add(Panel);
        Panel.add(Intro);
        Panel.add(StartBtn);

        Panel.setBounds(0, 0, screenSize.width, screenSize.height);
        Intro.setBounds(50, 50, 1000, 200);
        StartBtn.setBounds(100, 100, 100, 40);

 
        
        StartBtn.addActionListener(new StartGame());
    }
    private static void makeFrameFullSize(JFrame aFrame) 
    {
        ScreenSize = Toolkit.getDefaultToolkit().getScreenSize();
        aFrame.setSize(ScreenSize.width, ScreenSize.height);
    }
    static class StartGame implements ActionListener 
    {
        public void actionPerformed(ActionEvent event)
        {
            Panel.setVisible(false); 
            Panel2 = new JPanel(null);
            Prompt1 = new JLabel("<html>"
                    + "<h3>You were walking down on a long path on Christmas Day, you spot a child working on a snowman.</h3>"
                    + "</html>");
                    
            Pane.add(Panel2);
            Panel2.add(Prompt1);
            
            Panel2.setBounds(0, 0, 1920, 1080);
            Prompt1.setBounds(50, 50, 1870, 1030);
        }
    }   
    static class OldSequence implements ActionListener 
    {
        public void actionPerformed(ActionEvent event)
        {
            Panel.setVisible(false); 
            Panel2 = new JPanel(null);
            Prompt1 = new JLabel("<html>"
                    + "<h3>You were walking down on a long path on Christmas Day, you spot a child working on a snowman.</h3>"
                    + "</html>");
                    
            Pane.add(Panel2);
            Panel2.add(Prompt1);
            
            Panel2.setBounds(0, 0, 1920, 1080);
            Prompt1.setBounds(50, 50, 1870, 1030);
        }
    }    
}
