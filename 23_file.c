//we make file input output
#include <stdio.h>

int main(){
    FILE *file;
    file=fopen("yousuck.txt","r");

    char ch;
    ch = fgetc(file);
    while(ch != EOF){
        printf("%c",ch);
        ch=fgetc(file);

    }
    fclose(file);

    return 0;
}

// how to  make  my .c file code to .pdf
