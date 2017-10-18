/*
Author: Gabby Gomez, Nathan Hill, Jeremy Meadows, Lexi Van Vossen
Assignment Title: Pacman
Assignment Description: Runs a game similar to Pacman, but with some new features
Due Date: 11/29/2017
Date Created: 10/16/2017
Date Last Modified: 11/28/2017
*/
/*
Data Abstraction:
		
Input:
		
Process:
		
Output:
		
Assumptions:
		
*/

#include "SDL_Plotter.h"
#include "functions.h"

int main(int argc, char ** argv)
{
	SDL_Plotter g(1000, 1000);
	int x, y, xd, yd;
	int R, G, B;
	
	while (!g.getQuit())
	{
		x = rand() % g.getCol();
		y = rand() % g.getRow();
		R = rand() % 256;
		G = rand() % 256;
		B = rand() % 256;
		for (xd = 0; xd < 10 && x + xd < g.getCol(); xd++) {
			for (yd = 0; yd < 10 && y + yd < g.getRow(); yd++) {
				g.plotPixel(x + xd, y + yd, R, G, B);
				g.plotPixel(x + xd, y + yd, 0, G, 0);
			}
		}
		g.update();
		if (g.kbhit()) {
			g.getKey();
		}
	}
}