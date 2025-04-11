#include <graphics.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
struct Ball
{
    float x, y;
    float vx, vy;
    int radius;
    COLORREF color;
};
int main()
{
    initgraph(800, 600);
    setbkcolor(WHITE);
    cleardevice();
    srand((unsigned)time(NULL));
    Ball ball = {
        rand() % 700 + 50,
        rand() % 500 + 50,
        (rand() % 10 + 5) * (rand() % 2 ? 1 : -1),
        (rand() % 10 + 5) * (rand() % 2 ? 1 : -1),
        30,
        RGB(255, 0, 0)};
    while (true)
    {
        if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
            break;
        ball.x += ball.vx;
        ball.y += ball.vy;
        if (ball.x <= ball.radius || ball.x >= 800 - ball.radius)
        {
            ball.vx = -ball.vx;
            printf("X碰撞! x=%.1f 新vx=%.1f\n", ball.x, ball.vx);
        }
        if (ball.y <= ball.radius || ball.y >= 600 - ball.radius)
        {
            ball.vy = -ball.vy;
            printf("Y碰撞! y=%.1f 新vy=%.1f\n", ball.y, ball.vy);
        }
        cleardevice();
        setfillcolor(ball.color);
        solidcircle(ball.x, ball.y, ball.radius);
        setfillcolor(RGB(255, 255, 255));
        solidcircle(ball.x - ball.radius / 3, ball.y - ball.radius / 3, ball.radius / 4);
        setlinecolor(BLACK);
        circle(ball.x, ball.y, ball.radius);
        Sleep(30);
    }
    closegraph();
    return 0;
}