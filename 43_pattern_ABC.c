
// A
// AB
// ABC
// we will make this pattern
 #include <stdio.h>
    int main(){
        for(int i=1;i<=3;i++){
            for(int j=1;j<=i;j++){
                printf("%c",j+64);//65 is the ascii value of A 
            }
        printf("\n");
        }
     return 0;}
