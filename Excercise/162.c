#include <stdio.h>

int average(int n)
{
    if(n == 100){
        return 100;
    }
    else {
        printf("%d ", n);
        return average(n + 1);
    }
}

int main()
{
    int i = average(50);
    printf("%d", i);
}
