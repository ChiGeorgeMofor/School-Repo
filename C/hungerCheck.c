#include<stdio.h>
#include<string.h>

int main(){
    char hun;
 
    while (1){
        printf("Are you hungry? ");
        scanf("%s", hun); 

        if (strcmp(hun, "no") == 0){
            printf("I am happy you are not hungry. \n");
            break;
        }
    }
    
    // printf("Are you hungry:\n");

}
