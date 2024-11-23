#include <stdio.h>
#include <stdlib.h>

int hamsoo(int n)
{
    if (n == 0) return 0;
    else
    {
         printf("재귀 함수 호출");
         return hamsoo(n - 1);
    }


}

int main()
{
    hamsoo(2);
}
