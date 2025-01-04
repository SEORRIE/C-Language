#include <stdio.h>

int main()
{
    int k;
    int a[10];
    scanf("%d", &a[0]);
    for(int i = 1 ; i < 10 ; i++){
        scanf("%d", &a[i]);
        if(a[0] < a[i]){
            a[0] = a[i];
            k = i + 1;
        }
    }
    printf("%d¹ø »óÀÚ", k);
    return 0;
}
