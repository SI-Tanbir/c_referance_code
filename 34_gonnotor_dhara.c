//1*2+2*3+3*4  ..... n*n;

#include <stdio.h>
int main(){
int mul=1,n,sum=0,temp,i;
printf("Enter numer of 1*2+2*3+3*4  ..... n*nf n*n in this series:\n");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    temp=i *(i+1);
    sum=sum+temp;
}
printf("1*2+2*3+3*4  ..... +%d*%d is %d\n",n,(n+1),sum);
return 0;
}