#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studentData {
    char name[20],address[20],rollno[3],phoneNo[10];

} *student;

int main(){
    int n;
    printf("\nEnter the number of students present in your class: ");
    scanf("%d",&n);
    fflush(stdin);
    student=(struct studentData *)malloc(sizeof(struct studentData)*n);

    for (int i=0;i<n;i++){
        printf("\nEnter the name of the student:");
        gets(student[i].name);
        printf("\nEnter the address:");
        gets(student[i].address);
        printf("\nEnter roll number:");
        gets(student[i].rollno);
        printf("\nEnter phone number");
        gets(student[i].phoneNo);
    }
    //swap sequence after storing and recovering
    return 0;

}