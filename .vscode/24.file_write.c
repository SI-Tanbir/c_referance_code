#include <stdio.h>

int main(){
FILE *file;
file=fopen("file_writer.txt","w");

char name[100];
int age;
float cgpa;

printf("Enter students name:-");
scanf("%s",&name);
printf("Enter students age:-");
scanf("%d",&age);
printf("Enter students cgpa:-");
scanf("%f",&cgpa);

fprintf(file,"student name: %s \n",name);
fprintf(file,"student age: %d \n",age);
fprintf(file,"student cgpa: %2f \n",cgpa); 

fclose(file);
    return 0;

}