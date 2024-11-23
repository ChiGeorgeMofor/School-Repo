#include <stdio.h>

void sum(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
float average = (float)sum/ n;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
}

int main(){
    /**int arr[] = {10, 20, 30, 40, 50};**/

    /**int n = sizeof(arr) / sizeof(arr[0]);**/
    
    int i, n;


    printf("enter the size of the array: \n");
    scanf("%d", &n);

    int arr[n];

printf("enter tthe elements of the array: \n");
for(i=0; i<n; i++){
    printf("element %d: \n", i+1);
    scanf("%d", &arr[i]);
}

printf("the elements of the array are: \n");
    for(i=0; i<n; i++){
        printf("%d \n", arr[i]);
    }

    sum(arr, n);

    return 0;
}

