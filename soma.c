# include <stdio.h>

int main(){
    int value_one, value_two, result;
    printf("Please enter a first number: ");
    scanf("%d", &value_one);

    printf("Please enter a sencond number: ");
    scanf("%d", &value_two);

    result = value_one + value_two;
    printf("%d + %d = %d\n", value_one, value_two, result);
}
