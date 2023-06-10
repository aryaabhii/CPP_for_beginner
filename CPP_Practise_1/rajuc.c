#include <stdio.h>
//to use 'textbackground'
#include <conio.h>

int main()
{
	// setting the color of background
	textbackground(GREEN);

	// message 
	cprintf("Change the background color to green");

	getch();
	return 0;
}

