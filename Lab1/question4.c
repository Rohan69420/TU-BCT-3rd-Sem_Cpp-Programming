#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studentData {
    char name[20],address[20],rollno[3],phoneNo[10];

} *student;

int main(){
    FILE *fp=fopen("datafile.bin","wb+");
    int n;
    char temp[20];
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
    fwrite(student,sizeof(struct studentData),n,fp);
    rewind(fp);
    //now lets read the file data as structure data.
   system("clear"); //clear screen [windows]
    fread(student,sizeof(struct studentData),n,fp);
    for (int i=0;i<n-1;i++){
        for (int j=1;j<n;j++){
            if(strcmp(student[i].name,student[j].name)>=0){
                //swap
                strcpy(temp,student[i].name);
                strcpy(student[i].name,student[j].name);
                strcpy(student[j].name,temp);

                strcpy(temp,student[i].address);
                strcpy(student[i].address,student[j].address);
                strcpy(student[j].address,temp);

                strcpy(temp,student[i].phoneNo);
                strcpy(student[i].phoneNo,student[j].phoneNo);
                strcpy(student[j].phoneNo,temp);

                strcpy(temp,student[i].rollno);
                strcpy(student[i].rollno,student[j].rollno);
                strcpy(student[j].rollno,temp);
            }
        }
    }

    for (int i=0;i<n;i++){
        printf("\n%s %s %s %s\n",student[i].name,student[i].rollno,student[i].address,student[i].phoneNo);
    }

    return 0;
    fclose(fp);

}