#include <stdio.h>

int main(){
    int h=5000,a=10,b=5,c=50,d=20,count=0;
    int reloading=0;


    if((a*c)<=(b*d)){
        printf("the robot will never die");


    }
    while(h>=0){
        for(int i =1;i<=a;i++){
            if(h==0){
                printf("IT take %d bullets to kill the Robot\n",count);
                return 0;
                /*continue; continue means to continue the loop
                break;//onely break this loop
                retrun ; means go to end of code
            */
            }

            h=h-c;
            count++;
            printf("you fire %d bullet %d hitpoint\n",count,h);
        }
        if(reloading != 5){
        for(int i=1;i<=b;i++){
            h=h+d;
            printf("Robot healing +%d, hitpoint=:%d\n",d,h);
        }
        }

    }
   

    return 0;
}