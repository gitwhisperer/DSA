#include<stdio.h>
int main(){
    int arr[5], i, max, min;
    printf("enter the elements: ");
    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i=1; i<5; i++){
        if(arr[i] > max){
            max = arr[i];
        } else if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("maximum value is %d\n", max);
    printf("minimum value is %d\n", min);
}