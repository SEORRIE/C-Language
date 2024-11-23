#include <stdio.h>

int twotwo(int num1, int num2)
{
    int result, div, multi;
    if(num1 > num2)
    {
        div = num1 / 2;
        multi = num2 * 2;
    }
    else
    {
        div = num2 / 2;
        multi = num1 * 2;
    }

    return div + multi;
}

int main()
{
    int i, j;
    scanf("%d %d", &i, &j);
    printf("%d", twotwo(i, j));
}
