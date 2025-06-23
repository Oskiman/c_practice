// trying to code x11 window stuff from scratch (with help as I am learning!)
// compile with X11 flag
// cc mywindow.c -lX11
#include <X11/Xlib.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>	// for sleep()

int main(void)
{
	Display* display;	// pointer to our display
	char *display_name = getenv("DISPLAY");	// location of display server
	
	display = XOpenDisplay(display_name); // call xopen display
	if(display == NULL)
	{
		printf("Cannot connect to x server %s.\n", display_name);
		exit(-1);
	}

	int screen_num;
	int screen_width;
	int screen_height;

	// store ID of root window (covers screen, contains all other windows)
	Window root_window;

	// store ID's of black & white
	unsigned long white_pixel;
	unsigned long black_pixel;



	return 0;
}
