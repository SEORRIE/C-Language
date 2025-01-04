#include <stdio.h>
#include <stdlib.h>
int sort(int a, int b)
{
    if (a >= b) {
        printf("%d ", b);
        return sort(a, b + 1);
    }
}
int main()
{
    int i;
    scanf("%d", &i);
    sort(i, 1);
    return 0;
}