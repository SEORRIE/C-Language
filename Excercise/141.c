#include <stdio.h>

void report(int score)
{
    if (score <= 60)
    {
        printf("F\n");
    }
    else if (60 < score && score <= 70)
    {
        printf("D\n");
    }
    else if (70 < score && score <= 80)
    {
        printf("C\n");
    }
    else if (80 < score && score <= 90)
    {
        printf("B\n");
    }
    else if (90 < score && score <= 100)
    {
        printf("A\n");
    }

}

int main()
{
    int num;
    for(int i = 1 ; i <= 10 ; i++){
        scanf("%d", &num);
        report(num);
    }
}
