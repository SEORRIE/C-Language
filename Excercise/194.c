#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person{
    char name[20];
    int age;
    char adress[100];

};

int main()
{
    struct Person a = {"잼코딩",3,"대치동"};
    printf("%s\n", a.name);
    printf("%d\n", a.age);
    printf("%s\n", a.adress);
    return 0;
}
