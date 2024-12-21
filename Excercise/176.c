#include <stdio.h>
int i = 0;
int five(int a)
{
    int small, x;
    if(i == 4){
        printf("%d", a);
        return 0;
    }
    else {
        scanf("%d", &x);
        if(a < x){
            small = a;
        }
        else if(a > x){
            small = x;
        }
        i = i + 1;
        return five(small);
    }
}
int main()
{
    int a;
    scanf("%d", &a);
    five(a);
}
