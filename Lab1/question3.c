#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studentData{
    char name[20];
    float cMarks;
} *student;

int main(){
    int n;
    printf("\nEnter the number of students in 1st semester: ");
    scanf("%d",&n);
    fflush(stdin);
    student=(struct studentData *)malloc(sizeof(struct studentData)*n);
    for (int i=0; i<n;i++){
        printf("\nEnter the student's name: ");
        gets(student[i].name);
        printf("\nEnter marks obtained in C:");
        scanf("%f",&student[i].cMarks);
        fflush(stdin);
    }
    //output sequence
    printf("\nName\t\tMarks in C\n");
    for (int i=0; i<n;i++){
        printf("%s %f\n",student[i].name,student[i].cMarks);
    }
    return 0;
}