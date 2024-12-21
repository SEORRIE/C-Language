#include <stdio.h>
#include <stdlib.h>

int sort(int n)
{
    if (n == 1) return 1;
    else return sort(n-1);
}

int main()
{
    printf("%d\n", sort(4));
}
