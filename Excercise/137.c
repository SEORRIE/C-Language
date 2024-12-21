#include <stdio.h>

int class = 1;
void avg(int arrScore[], int count)
{
    int result = 0;
    for (int i = 0; i < count; i++)
    {
        result = result + arrScore[i];
    }
    printf("%d¹Ý Æò±Õ: %d\n", class, result / 5);
    class++;
}

int main()
{
    int arrScore[5];
    for (int i = 0 ; i < 10 ; i++)
    {
            for (int j = 0; j < 5; j++)
            {
                scanf("%d", &arrScore[j]);
            }
            avg(arrScore, 5);
    }
}
