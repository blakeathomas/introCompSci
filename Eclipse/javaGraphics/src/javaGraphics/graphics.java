package javaGraphics;

import java.awt.Color;
import java.awt.Font;
import java.awt.Graphics;

import javax.swing.JFrame;

public class graphics extends JFrame{
    private static final long serialVersionUID = 1L;
    public static final int WIDTH = 1200;
    public static final int HEIGHT = 900;
    

    public static void main(String[] args) {
        graphics test = new graphics();
        test.setSize(WIDTH, HEIGHT);
        test.setResizable(false);
        test.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        test.setVisible(true);

    }
   // g.fillOval(x, y, width, height);
    public void paint(Graphics g){
    g.setColor(new Color(0x00ff00));
    //skyBlue color
    Color skyBlue = new Color(135,206,235);
   //greenGrass color
    Color greenGrass = new Color(0x7CF00);
    //sun color
    Color canaryYellow = new Color(0xFFEF00);
    
    g.setColor(skyBlue);	
    g.fillRect(0,0,1200,400);
    
    g.setColor(greenGrass);	
    g.fillRect(0,400,1200,500);
   
       /* 
        
        g.fillOval(150, 145, 60, 65);
        g.setColor(Color.white);
        g.fillOval(160, 162, 17, 14);
        g.fillOval(183, 162, 17, 14);
        g.setColor(Color.blue);
        g.fillOval(163, 164, 11, 11);
        g.fillOval(186, 164, 11, 11);
        g.setColor(new Color(0xff00ff));
        g.fillOval(180, 180, 10, 20);
        g.drawString("test", 100, 100);
        int randX = (int) (Math.random());
        for (int i = 50; i<450; i+=25)
        	g.drawRect(i, i, i, i);
        g.setColor(Color.black);
        for (int i = 450; i>50; i-=15)
        	g.drawRect(randX, i, i, i);
        
        g.setColor(Color.white);
        g.setFont(new Font("TimesRoman", Font.BOLD, 150)); 
        g.drawString("TEST", 300, 200);
        g.drawRect(700, 500, 200, 100);
    }
    */
}}