#include <stdio.h>
#include <unistd.h>
#include "screen.h"
#include "comm.h"
#include "sound.h"

int main(void){
	Position cur = getscreensize(); //get screen size
	char postdata[100];
	sprintf(postdata, "row=%d&col=%d&id=e1900282", cur.row, cur.col);
	sendpost(URL, postdata);
	gotoXY(1,1);
	printf("Screen size: row=%d, col=%d\n", cur.row, cur.col);
	printf("Today we will make some animations. Press any key to continue\n");
	getchar();
	getchar();
	int ff, bb;
	float step = (float)cur.col/cur.row;
	for(int i=1; i<=cur.row; i++){
		ff = (i+1)%8+ GREEN;
		bb = (i+2)%8+ BLACK;
		setcolors(ff, bg(bb));
		clearscreen();
		drawrect(10, 10, 5, 30);
		gotoXY(cur.row-i,(i-1)*step+1);
		printf("HELLO\n");
		usleep(250000); //sleep(1);
	
	}

	getchar();
	resetcolors();
	clearscreen();
	printf("Color is set back to default\n");
	getchar();
	FILE *fp = fopen("test.wav", "r");		//open the wav file in readonly
	WAVheader h = readwavhdr(fp);
	fclose(fp);
	displaywavhdr(h);
}
/*	
	clearscreen();
	setfgcolor(CYAN);
	gotoXY(14, 35);
	printf("Hello, World!\n");
	getchar();
	drawbar(30, 30);
	drawbar(50, 30);
	getchar();
	resetcolors();
	printf("This text is displayed in default color\n");



/*
int main(void){
	printf("This is the first task of appdev:\n");
	getchar();
	clearscreen();
	int i, j, ff, bb;
	for(i = 0; i < 20; i++){
		ff = GREEN;
		bb = BLACK;
		setcolors(ff, bg(bb));
		clearscreen();
		gotoXY(25 - i, i * 3);
		printf("HELLO\n");

		for(j = 0; j < 4; j++){
			ff = RED;
			bb = BLACK;
			setcolors(ff, bg(bb));
			gotoXY(i + 1,( i * 3) + j + 1);
			printf("%s\n", BAR);
			gotoXY(i + 2,( i * 3) + j + 1);
			printf("%s\n", BAR);
		}
		sleep(1);
	}


	for(i = 0; i < 25; i++){
		ff = GREEN;
		bb = BLACK;
		setcolors(ff, bg(bb));
		clearscreen();
		gotoXY(i,  i * 3 + 60);
		printf("HELLO\n");
		
		for(j = 0; j < 4; j++){
			ff = RED;
			bb = BLACK;
			setcolors(ff, bg(bb));
			gotoXY(25 - i, (i * 3) + j + 60);
			printf("%s\n", BAR);
			gotoXY(25 - (i-1), (i * 3) + j + 60);
			printf("%s\n", BAR);
		}
		sleep(1);
	}
	

	getchar();
	resetcolors();
	clearscreen();
	printf("Colors are set back to default\n");
	getchar();
}*/



