#include <stdio.h>

void gong(int a, int b, int c, int d){
    int x, y, cnt;
    for(int i = 1 ; i <= a || i <= b ; i++){
        if(a % i == 0 && b % i == 0){
            x = i;
        }
    }
    for(int i = 1 ; i <= c || i <= d ; i++){
        if(c % i == 0 && d % i == 0){
            y = i;
        }
    }
    printf("%d", x + y);
}

int main()
{
    gong(12, 24, 64, 81);

    return 0;
}
