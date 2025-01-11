#include <stdio.h>

int noone(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    while (n > 0) {
        if (n % 10 == 1)
            return 0;
        n /= 10;
    }
    return 1;
}


int main()
{
    int f, s, count, rcount = 0;
    scanf("%d %d", &f, &s);

    for(int k = f ; k <= s ; k++){
        if (noone(k) && (k - 1) % 10 != 0) {
            rcount++;
        }
    }

    printf("%d", rcount);

    return 0;
}
