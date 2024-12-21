#include <stdio.h>

int factoial(int n)
{
    if(n == 1){
        return 1;
    }
    else return n * factoial(n - 1);
}

int main()
{
    int i = factoial(9);
    printf("%d", i);
}
