//take input of student exam number evaluate it ,,if he get passed or failed exam

#include <stdio.h>

int main(){


int mark;
printf("Give your mark :-");
scanf("%d",&mark);
if (mark>=33){
    printf("congratulate ! \nyou passed the exam\n");
 }
else{
    printf("alas! you failed\n better luck next time\n\n\n");
}
}
