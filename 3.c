#include<stdio.h>
int main(){
    int a[6], n = 6, temp;
    printf("swapping two numbers\n");
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("list sorting element in ascending order\n");
    for(int i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n");
}