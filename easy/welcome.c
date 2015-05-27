# include <stdio.h>

int main(){
    char name[21], lastname[21];

    printf("Please, enter your first name: ");
    scanf("%s", name);

    printf("Please, enter your last name: ");
    scanf("%s", lastname);

    printf("Hello dear %s, %s. Welcome to progressive c curse.\n", lastname, name);
}
