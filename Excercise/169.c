#include <stdio.h>
int i = 1;
int gugudan(int n)
{
    if(i == 10){
        return 0;
    }
    else {
        printf("%d * %d = %d\n", n, i, n * i);
        i = i + 1;
        return gugudan(n);
    }
}

int main()
{
    gugudan(2);
}
