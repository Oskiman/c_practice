// trying to code x11 window stuff from scratch (with help as I am learning!)
// compile with X11 flag
// cc fullscreen.c -lX11
#include <X11/Xlib.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	Display* display;	// pointer to our display
	char *display_name = getenv("DISPLAY");	// location of display server, hostname:D.S - D is sequence number, usually 0, S is screen number
	Window win;
	XEvent e;
	const char* msg = "Hello, World!";
	display = XOpenDisplay(display_name);	// call xopen display
	if(display == NULL)
	{
		fprintf(stderr, "Cannot connect to x server %s.\n", display_name);
		exit(1);
	}

	int screen_num;
	int screen_width;
	int screen_height;

	// store ID of root window (covers screen, contains all other windows)
	Window root_window;

	// store ID's of black & white
	unsigned long white_pixel;
	unsigned long black_pixel;

	// store number of default screen for x server
	screen_num = DefaultScreen(display);

	// store width of default screen in pixels
	screen_width = DisplayWidth(display, screen_num);

	// store height of default screen in pixels
	screen_height = DisplayHeight(display, screen_num);

	// store ID of root window
	root_window = RootWindow(display, screen_num);

	// values of black & white pixels
	black_pixel = BlackPixel(display, screen_num);
	white_pixel = WhitePixel(display, screen_num);

	// window sizes
	int win_width;
	int win_height;
	int win_border_width;

	// store windows location
	int win_x;
	int win_y;

	// calculate width & height of window
	win_width = DisplayWidth(display, screen_num);
	win_height = DisplayHeight(display, screen_num);

	// border width
	win_border_width = 5;

	// position top left
	win_x = 0;
	win_y = 0;

	// create window
	win = XCreateSimpleWindow(display, RootWindow(display, screen_num), win_x, win_y, win_width, win_height, win_border_width, BlackPixel(display, screen_num), WhitePixel(display, screen_num));

	XSelectInput(display, win, ExposureMask | KeyPressMask);
	XMapWindow(display, win);
	XFlush(display);
	XSync(display, False);

	while(1){
		XNextEvent(display, &e);
		if(e.type == Expose)
		{
			//XFillRectangle(display, win, DefaultGC(display, screen_num), 50, 50, 25, 25);
			XDrawString(display, win, DefaultGC(display, screen_num), 100, 200, msg, strlen(msg));
		}
		if(e.type == KeyPress)
			break;

	};

	XCloseDisplay(display);


	return 0;
}
