








#define ESC 0x1B

enum FG{BLACK=30,RED,GREEN,YELLOW,BLUE,MAGENTA,CYAN,WHITE};
#define bg(c) (c+10)  //macro definition
#define UNICODE  //for conditional compilation
#define BAR "\u2590"

//#define DEBUG   //for conditional compilation

typedef struct{	//this struct will define a compound data of the number of rows and the number of columns of our screen
	int row;
	int col;
}Position;

//function declaration
void clearscreen(void);
void setfgcolor(int);
void setbgcolor(int);
void setcolors(int, int);
void resetcolors(void);
void gotoXY(int, int);
void drawbar(int, int);
void drawrect(int, int, int, int);
Position getscreensize(void);
