#include <stdio.h>
#include <stdlib.h>
int num = 1;
int sort(int n)
{

    if (n == 0) return 0;
    else
    {
            printf("%d", num);
        num ++;

        return sort(n-1);
    }
}

int main()
{
    sort(4);
}
