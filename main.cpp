#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include "game.h"


int main()
{
	initgraph(1600, 900);//实例化一个窗口

	display(1);

	mouseclicked();

	getchar();//

	closegraph();//关闭窗口
	return 0;


}
