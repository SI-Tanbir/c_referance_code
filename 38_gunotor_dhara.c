// 1*2*3*------*n;

/*
#include <stdio.h>

    int main(){
        int i,n,multiply=1;
        n=10;
        for (i=1;i<=n;i++){
            multiply=multiply *i;

        }
        printf("multiply=%d",multiply);
    return 0;
}

*/


// 1*3*5*------*n;
/*
#include <stdio.h>

    int main(){
        int i,n,multiply=1;
        n=10;
        for (i=1;i<=n;i=i+2){
            multiply=multiply *i;

        }
        printf("multiply=%d",multiply);
    return 0;
}*/


/*
// 2*4*6*------*n;
#include <stdio.h>

    int main(){
        int i,n,multiply=1;
        n=10;
        for (i=2;i<=n;i=i+2){
            multiply=multiply *i;

        }
        printf("multiply=%d",multiply);
    return 0;
}

*/

// 1^2*3^2*5^2*------*n;
#include <stdio.h>

    int main(){
        int i,n,multiply=1;
        n=10;
        for (i=1;i<=n;i=i+2){
            multiply=multiply *i*1;

        }
        printf("multiply=%d",multiply);
    return 0;
}