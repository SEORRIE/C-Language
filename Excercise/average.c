#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Friends{
    char name[10];
    int math;
    int science;
    int english;
    int korean;
    int average;
}Friends;

int main()
{
    Friends grades;
    scanf("%s", grades.name);
    scanf("%d %d %d %d", &grades.math, &grades.science, &grades.english, &grades.korean);
    grades.average = (grades.math + grades.science + grades.english + grades.korean)/ 4;
    printf("%d", grades.average);
    return 0;
}
