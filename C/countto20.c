#include<stdio.h>

int main(){
    for(int i = 1; i <= 20; i++){
        printf("%d \n", i);
 
        printf("Should I continue? (Yes / No)");
        char response[4];
        scanf("%s", response);

        if (strcmp(response, "no") == 0){
            printf("You stopped me immediately");
            break;
        }


    }
    if(i == 21){
        printf("Thank you");
    }

    return 0;
}
