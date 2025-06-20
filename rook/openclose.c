// code from 'Basic grpahics programming with the xlib library' pdf by Guy Keren
// and also from https://github.com/pietroiusti/xlib_basic_programming/blob/master/03_Creating_A_Basic_Window.c
// open/close connection to xserver
// compile with -lX11 flag
// cc openclose.c -lX11
#include <X11/Xlib.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	Display* display;

	char *display_name = getenv("DISPLAY");
	printf("%c\n", *display_name);

	display = XOpenDisplay(display_name);

	if(display == NULL)
	{
		fprintf(stderr, "Cannot connect to x server %c.\n", 0);
		exit(-1);
	}

	int screen_num;
	int screen_width;
	int screen_height;

	//store ID of root window
	Window root_window;

	// store ID's of black & white
	unsigned long white_pixel;
	unsigned long black_pixel;

	// check number of default screen for x server
	screen_num = DefaultScreen(display);

	// find width of default screen of X server in pixels
	screen_width = DisplayWidth(display, screen_num);

	// find height of default screen of X server in pixels
	screen_height = DisplayHeight(display, screen_num);

	// ID of root window
	root_window = RootWindow(display, screen_num);

	// value of white pixel
	white_pixel = WhitePixel(display, screen_num);

	// value of black pixel
	black_pixel = BlackPixel(display, screen_num);

	// create window 1/3 size
	// store ID of newly created window
	Window win;

	int win_width;
	int win_height;
	int win_border_width;

	// store window's location
	int win_x;
	int win_y;

	// calculate windows width & height
	win_width = DisplayWidth(display, screen_num) / 3;
	win_height = DisplayHeight(display, screen_num) / 3;


	// border
	win_border_width = 3;

	// position of window is top left
	win_x = win_y = 0;

	// create window
	win = XCreateSimpleWindow(display, RootWindow(display, screen_num),
			win_x, win_y, win_width, win_height, win_border_width,
			BlackPixel(display, screen_num),
			WhitePixel(display, screen_num));

	XMapWindow(display, win);

	XSync(display, False);

	sleep(5);

	XCloseDisplay(display);

	return 0;
}
