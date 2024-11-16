#include<stdio.h>
int main(){
    int arr[3];
    int temp, n = 3, j;

    printf("enter the element \n");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for(int i=0; i<n-1; i++){
        int min=i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min]){
                min=j;
            }
        }
        if(min != i){
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }

    printf("elements which are sorted\n");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
