# include <stdio.h>

int main(void){
    char cursor[20] = "C Progressivo";
    int count;


    for (count=0; count < 20; count++){
        printf("%c", cursor[count]);
    }

    for(count=0; cursor[count] !='\0'; count++)

    printf("\no '\\0' position %d of string\n", count);
}
