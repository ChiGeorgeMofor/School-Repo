#include <stdio.h>

void greet(char name[], int age){
    printf("Hello, %s! You are %d years old. \n", name, age);
}

int main(){
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%[^\n]s", &name);

    printf("Enter your age: ");
    scanf("%d", &age);

    greet(name, age);

    return 0;
}