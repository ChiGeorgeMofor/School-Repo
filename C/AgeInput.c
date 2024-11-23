#include<stdio.h>

int main(){
    int age;

    //Ask user to enter age
    printf("What is your age: \n");
    scanf("%d", &age);

    //Conditions
    for(int i=age; i<18; i++){

    printf("You are not eligible to vote yet. \nEnter your age:\n");
    scanf("%d", &age);

  }

    printf("THANKS FOR VOTING\n");
    
}
