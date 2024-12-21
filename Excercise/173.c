#include <stdio.h>
int i = 1;
int repeat(int a, int b)
{
    if(a > b){
        return 0;
    }
    else {
        printf("%d ", a);
        a = a + i;
        i = i + 1;
        return repeat(a, b);
    }
}

int main()
{
    repeat(2, 100);
}
