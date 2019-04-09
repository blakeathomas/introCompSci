package javaGraphics;
import java.applet.Applet;

import java.awt.Color;

import java.awt.Graphics;

import java.awt.Point;



public class triangle extends Applet 

{

	triangle mt = new triangle(50,70,Color.ORANGE);

	public triangle(int i, int j, Color orange) {
		// TODO Auto-generated constructor stub
	}

	public void paint (Graphics g)

	{

		mt.drawMe(g, new Point(100,140));

	}

	private void drawMe(Graphics g, Point point) {
		// TODO Auto-generated method stub
		
	}


}


