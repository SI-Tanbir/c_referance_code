#include <stdio.h>
// i am not fully cler the concept of array .. later i have do some google study
int main(){
    int my_array[6];
    int i;
    printf("Enter array elements:\n");

    for(i = 0 ; i<6;i++){
        scanf("%d",&my_array[i]);

    }
    printf("\n Array elements are :\n");
    for(i=0; i<=5;i++){
    printf("%d\n",my_array[i]);
    }
    return 0;
}