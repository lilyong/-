#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main()
{
    int i, j;
    int x = 0;
    int y = 0;
    
    int velocity_x = 1;
    int velocity_y = 1;
    int left = 0;
    int right = 10;
    int top = 0;
    int bottom = 20;

    while(1)//一直循环吗？
    {
        x = x + velocity_x;
        y = y + velocity_y;

        system("cls");

        for(i= 0;i < x;i++)//二级变量
            printf("\n");
        for(j = 0;j < y;j++)
            printf(" ");
        
        printf("o");
        printf("\n");
        sleep(0.5);

        if((x == top)||(x == bottom)){
            velocity_x = -velocity_x;
        printf("\a");}
        if((y == left)||(y == right)){
        
            velocity_y = -velocity_y;
        printf("\a");}    

            }
}