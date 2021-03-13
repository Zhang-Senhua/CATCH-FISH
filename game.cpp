#include <stdio.h>
#include"game.h"
#include <graphics.h>
void display(int a)
{

	
	IMAGE img_background;//创建一个IMAGE 对象
	if(a == 1)
	{
		loadimage(&img_background, L"E:\\img\\bg01.png", 1600, 900);//使用加载图片的封装函数进行图片的加载

		putimage(0, 0, &img_background);//展现图片
		while (1)
		{
			mouseclicked();

		}

	}
	if (a == 2)
	{

		loadimage(&img_background, L"E:\\img\\bg02.png", 1600, 900);//使用加载图片的封装函数进行图片的加载

		putimage(0, 0, &img_background);//展现图片
		while (1)
		{
			mouseclicked();

		}
	}
	if (a == 3)
	{

		loadimage(&img_background, L"E:\\img\\bg03.png", 1600, 900);//使用加载图片的封装函数进行图片的加载

		putimage(0, 0, &img_background);//展现图片
		while (1)
		{
			mouseclicked();

		}
	}
	if (a == 4)
	{

		loadimage(&img_background, L"E:\\img\\bg04.png", 1600, 900);//使用加载图片的封装函数进行图片的加载

		putimage(0, 0, &img_background);//展现图片
		while (1)
		{
			mouseclicked();

		}
	}
	
	a = 0;

}
void mouseclicked()
{

	MOUSEMSG msg;
	//定义变量，保存鼠标信息
	FlushMouseMsgBuffer();
	//清空鼠标消息缓冲区，避免无效信息带入正式判断中

	while (1)           //主循环，循环监听鼠标信息；

	{
		while (MouseHit())//监听鼠标信息，当鼠标有消息的时候执行该函数，可以连续监听鼠标信息
		{
			msg = GetMouseMsg();//获取鼠标信息
			if (WM_LBUTTONDOWN == msg.uMsg)//判断鼠标信息，当前鼠标左键被按下
			{
				if (msg.x >= 669 && msg.x <= 900 && msg.y >= 315 && msg.y <= 357)
				{
					game();

				}
				if (msg.x >= 669 && msg.x <= 900 && msg.y >= 376 && msg.y <= 413)
				{
					choosebackground();
				}
				if (msg.x >= 669 && msg.x <= 900 && msg.y >= 435 && msg.y <= 476)
				{
					showrules();
				}
			}
		}
	}
}
int loadimage1()//实现选择加载图片背景
{
	return 0;
}
void game()
{
	closegraph();


}
void choosebackground()
{
	IMAGE img_background;//创建一个IMAGE 对象
	loadimage(&img_background, L"E:\\img\\choice.png", 1600, 900);//使用加载图片的封装函数进行图片的加载

	putimage(0, 0, &img_background);//展现图片
	MOUSEMSG msg;
	while (1)           //主循环，循环监听鼠标信息；

	{
		while (MouseHit())//监听鼠标信息，当鼠标有消息的时候执行该函数，可以连续监听鼠标信息
		{
			msg = GetMouseMsg();//获取鼠标信息
			if (WM_LBUTTONDOWN == msg.uMsg)//判断鼠标信息，当前鼠标左键被按下
			{
				if (msg.x >= 0 && msg.x <= 800 && msg.y >= 0 && msg.y <= 450)
				{
					display(1);
			
				}
				if (msg.x >= 800 && msg.x <= 1600 && msg.y >= 0 && msg.y <= 450)
				{
					display(2);

				}
				if (msg.x >= 0 && msg.x <= 800 && msg.y >= 450 && msg.y <=900)
				{
					display(3);

				}
				if (msg.x >= 800 && msg.x <= 1600 && msg.y >= 450 && msg.y <= 900)
				{
					display(4);
				}

			}
		}
	}


}
void back()
{

	
}
void showrules()
{
	IMAGE rules;
	
	loadimage(&rules, L"E:\\img\\rules.jpg", 1600, 900);//使用加载图片的封装函数进行图片的加载

	putimage(0, 0, &rules);//展现图片

	MOUSEMSG msg;
	while (1)           //主循环，循环监听鼠标信息；

	{
		while (MouseHit())//监听鼠标信息，当鼠标有消息的时候执行该函数，可以连续监听鼠标信息
		{
			msg = GetMouseMsg();//获取鼠标信息
			if (WM_LBUTTONDOWN == msg.uMsg)//判断鼠标信息，当前鼠标左键被按下
			{
				if (msg.x >= 313 && msg.x <= 495 && msg.y >= 214 && msg.y <= 264)
				{
					display(1);
					mouseclicked();

					

				}

			}
		}
	}
}