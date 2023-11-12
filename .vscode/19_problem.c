//question :- amake super market er 5 ta jinis er input nite hobe..oii 5 ta jini tax 15% add kore prize ta jog korte hob.. ekhon kota holo user jodi 3 ta item er prize bolle 3 tar ii tax+prize bolle abar chaite parbe na


#include <stdio.h>

int main(){
    

    float a,b,c,d,e,f,sum;
    printf("Price of 1st item:\n");
    scanf("%f",&a);
    if(a!=e){
        sum=a;
        printf("Price of 2nd item:\n");
        scanf("%f",&b);
        if(b!=e){
            sum=(a+b);
            printf("Price of 3rd item:\n");
            scanf("%f",&c);
            if(c!=e){
                sum=(a+b+c);
                printf("Price of 4st item:\n");
                scanf("%f",&d);
                if(d!=e){
                    sum=(a+b+c+d);
                    printf("Price of 5th item:\n");
                    scanf("%f",&f);
                    if(f!=e){
                        sum=(a+b+c+d+f);

                    }
                }
            }
        }
    }

    float price = sum + (sum * .15);
    printf("Total price without vat: %2f \n",sum);
    printf("Total price with vat: %2f \n",price);

    return 0;
}