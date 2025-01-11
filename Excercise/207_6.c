#include <stdio.h>

void north()
{
    temp[0][1] = dice[3][1];
    temp[1][1] = dice[0][1];
    temp[2][1] = dice[1][1];
    temp[3][1] = dice[2][1];
    temp[1][0] = dice[][];//
    temp[1][2] = dice[][];//
}

void south()
{
    temp[0][1] = dice[1][1];
    temp[1][1] = dice[2][1];
    temp[2][1] = dice[3][1];
    temp[3][1] = dice[0][1];
    temp[1][0] = dice[][];//
    temp[1][2] = dice[][];//
}

void east()
{
    temp[0][1] = dice[3][1];//
    temp[1][1] = dice[1][2];
    temp[2][1] = dice[1][1];//
    temp[3][1] = dice[2][1];//
    temp[1][0] = dice[1][1];
    temp[1][2] = dice[1][0];
}

void west()
{
    temp[0][1] = dice[3][1];//
    temp[1][1] = dice[1][0];
    temp[2][1] = dice[1][1];//
    temp[3][1] = dice[2][1];//
    temp[1][0] = dice[1][2];
    temp[1][2] = dice[1][1];
}

int main()
{
    int dice[4][3] = "0", "5", "0",
                     "3", "1", "2",
                     "0", "4", "0",
                     "0", "6", "0";
    int temp[4][3];

    return 0;
}
