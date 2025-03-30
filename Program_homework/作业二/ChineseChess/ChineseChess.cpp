#include <easyx.h>
#include <graphics.h>
#include <conio.h>

void draw_piece(int x, int y, int r, COLORREF fillColor, COLORREF borderColor)
{
	setfillcolor(fillColor);
	fillcircle(x, y, r);
	setcolor(borderColor);
	circle(x, y, r + 4);
}

void draw_text(int x, int y, const TCHAR *text, COLORREF color)
{
	setbkmode(TRANSPARENT);
	settextstyle(40, 0, _T("楷体"));
	settextcolor(color);
	outtextxy(x, y, text);
}

int arcossroad(int x, int y)
{
	setlinecolor(BROWN);
	setlinestyle(PS_SOLID, 2);
	if (x > 50 && x < 530)
	{
		int dirs[8][4] = {{1, 1, 1, 13}, {1, 1, 13, 1}, {1, -1, 1, -13}, {1, -1, 13, -1}, {-1, -1, -1, -13}, {-1, -1, -13, -1}, {-1, 1, -1, 13}, {-1, 1, -13, 1}};
		for (int i = 0; i < 8; i++)
		{
			int dx = dirs[i][0];
			int dy = dirs[i][1];
			int lenX = dirs[i][2];
			int lenY = dirs[i][3];
			line(x + dx * 3, y + dy * 3, x + dx * 3 + lenX, y + dy * 3 + lenY);
		}
	}
	if (x == 50)
	{
		line(x + 3, y + 3, x + 3, y + 13);
		line(x + 3, y + 3, x + 13, y + 3);
		line(x + 3, y - 3, x + 3, y - 13);
		line(x + 3, y - 3, x + 13, y - 3);
	}
	if (x == 530)
	{
		line(x - 3, y - 3, x - 3, y - 13);
		line(x - 3, y - 3, x - 13, y - 3);
		line(x - 3, y + 3, x - 3, y + 13);
		line(x - 3, y + 3, x - 13, y + 3);
	}
	return 0;
}

int main()
{
	initgraph(600, 640);
	setbkcolor(RGB(250, 208, 163));
	cleardevice();
	int startx = 50;
	int starty = 50;
	int cellsize = 60;
	setlinecolor(RGB(200, 147, 104));
	setlinestyle(PS_SOLID, 2);
	for (int i = 0; i < 9; i++)
	{
		int x = startx + i * cellsize;
		line(x, starty, x, starty + 4 * cellsize);
		line(x, starty + 5 * cellsize, x, starty + 9 * cellsize);
	}
	setlinestyle(PS_SOLID, 2);
	for (int j = 0; j < 10; j++)
	{
		int y = starty + j * cellsize;
		line(startx, y, startx + 8 * cellsize, y);
	}
	line(startx, starty, startx, starty + cellsize * 9);
	line(startx + cellsize * 8, starty, startx + cellsize * 8, starty + cellsize * 9);
	setlinestyle(PS_SOLID, 2);
	line(startx + cellsize * 3, starty, startx + cellsize * 5, starty + cellsize * 2);
	line(startx + cellsize * 5, starty, startx + cellsize * 3, starty + cellsize * 2);
	line(startx + cellsize * 3, starty + cellsize * 9, startx + cellsize * 5, starty + cellsize * 7);
	line(startx + cellsize * 5, starty + cellsize * 9, startx + cellsize * 3, starty + cellsize * 7);
	setlinestyle(PS_SOLID, 2);
	setcolor(BROWN);
	line(startx - 5, starty - 5, startx + 5 + cellsize * 8, starty - 5);
	line(startx - 5, starty - 5, startx - 5, starty + 5 + cellsize * 9);
	line(startx - 5, starty + 5 + cellsize * 9, startx + 5 + cellsize * 8, starty + 5 + cellsize * 9);
	line(startx + 5 + cellsize * 8, starty - 5, startx + 5 + cellsize * 8, starty + 5 + cellsize * 9);
	for (int a = 0; a < 2; a++)
	{
		setlinestyle(PS_SOLID, 2);
		arcossroad(110, 170 + a * cellsize * 5);
		arcossroad(110 + cellsize * 6, 170 + a * cellsize * 5);
		arcossroad(50, 230 + a * cellsize * 3);
		arcossroad(170, 230 + a * cellsize * 3);
		arcossroad(290, 230 + a * cellsize * 3);
		arcossroad(410, 230 + a * cellsize * 3);
		arcossroad(530, 230 + a * cellsize * 3);
	}
	settextstyle(50, 0, _T("楷体"));
	settextcolor(BROWN);
	outtextxy(100, 295, TEXT("楚河       汉界"));
	draw_piece(230, 50, 21, RGB(200, 147, 104), RGB(210, 140, 100));
	draw_piece(230, 170, 21, RGB(200, 147, 104), RGB(210, 140, 100));
	draw_piece(530, 230, 21, RGB(200, 147, 104), RGB(210, 140, 100));
	draw_piece(410, 170, 21, RGB(200, 147, 104), RGB(210, 140, 100));
	draw_piece(290, 530, 21, RGB(200, 147, 104), RGB(210, 140, 100));
	draw_piece(230, 470, 21, RGB(200, 147, 104), RGB(210, 140, 100));
	draw_piece(410, 590, 21, RGB(200, 147, 104), RGB(210, 140, 100));
	draw_text(210, 30, TEXT("将"), BLACK);
	draw_text(510, 210, TEXT("卒"), BLACK);
	draw_text(210, 450, TEXT("马"), BLACK);
	draw_text(210, 150, TEXT("炮"), RED);
	draw_text(390, 570, TEXT("相"), RED);
	draw_text(270, 510, TEXT("帅"), RED);
	draw_text(390, 150, TEXT("马"), RED);
	_getch();
	closegraph();
}