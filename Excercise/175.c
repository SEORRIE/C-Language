#include <stdio.h>
int i = 0;
int five(int a)
{
    int max, x;
    if(i == 4){
        printf("%d", a);
        return 0;
    }
    else {
        scanf("%d", &x);
        if(a > x){
            max = a;
        }
        else if(a < x){
            max = x;
        }
        i = i + 1;
        return five(max);
    }
}
int main()
{
    int a;
    scanf("%d", &a);
    five(a);
}
