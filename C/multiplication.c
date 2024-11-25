#include<stdio.h>

int main(){
    int i,m,a;

    printf("Enter number wish to multiply: \n", m);
    scanf("%d\n", &m);
 
    for (i = 1; i <= 12; i++)
    {
        a = m * i;
        printf("%d * %d = %d \n", m,i,a );
    }
  

}
