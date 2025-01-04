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
    Friends grades_1;
    scanf("%s", grades_1.name);
    scanf("%d %d %d %d", &grades_1.math, &grades_1.science, &grades_1.english, &grades_1.korean);
    grades_1.average = (grades_1.math + grades_1.science + grades_1.english + grades_1.korean)/ 4;

    Friends grades_2;
    scanf("%s", grades_2.name);
    scanf("%d %d %d %d", &grades_2.math, &grades_2.science, &grades_2.english, &grades_2.korean);
    grades_2.average = (grades_2.math + grades_2.science + grades_2.english + grades_2.korean)/ 4;

    Friends grades_3;
    scanf("%s", grades_3.name);
    scanf("%d %d %d %d", &grades_3.math, &grades_3.science, &grades_3.english, &grades_3.korean);
    grades_3.average = (grades_3.math + grades_3.science + grades_3.english + grades_3.korean)/ 4;

    if(grades_1.average > grades_2.average && grades_1.average > grades_3.average && grades_2.average > grades_3.average){
        printf("%s\n%s\n%s", grades_1.name, grades_2.name, grades_3.name);
    }
    else if(grades_1.average > grades_2.average && grades_1.average > grades_3.average && grades_2.average < grades_3.average){
        printf("%s\n%s\n%s", grades_1.name, grades_3.name, grades_2.name);
    }
    else if(grades_1.average < grades_2.average && grades_1.average > grades_3.average && grades_2.average > grades_3.average){
        printf("%s\n%s\n%s", grades_2.name, grades_1.name, grades_3.name);
    }
    else if(grades_1.average < grades_2.average && grades_1.average < grades_3.average && grades_2.average > grades_3.average){
        printf("%s\n%s\n%s", grades_2.name, grades_3.name, grades_1.name);
    }
    else if(grades_1.average < grades_2.average && grades_1.average < grades_3.average && grades_2.average < grades_3.average){
        printf("%s\n%s\n%s", grades_3.name, grades_2.name, grades_1.name);
    }
    else if(grades_1.average > grades_2.average && grades_1.average > grades_3.average && grades_2.average < grades_3.average){
        printf("%s\n%s\n%s", grades_3.name, grades_1.name, grades_2.name);
    }
    return 0;
}
