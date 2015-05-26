# include <stdio.h>

int main(){
    float number_one, number_two, result;

    printf("Please enter the fisrt number: ");
    scanf("%f", &number_one);

    printf("Please enter the second number: ");
    scanf("%f", &number_two);


    result = number_one * number_two;
    printf("%.1f * %.1f = %.2f\n", number_one, number_two, result);
}
