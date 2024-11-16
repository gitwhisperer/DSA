#include<stdio.h>
int main(){
    int ch=1, n=5, arr[5], max=n-1, top=-1, value, i;
    printf("choice:\n 1.Push\n 2.Pop\n 3.Display\n 4.Exit");
    while(ch)
    {
        printf("\nenter choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                if (top == max)
                    printf("stack is overflow");
                else {
                    printf("enter the value to push: ");
                    scanf("%d", &value);
                    top = top + 1;
                    arr[top] = value;
                }
                break;
            case 2:
                if (top == -1)
                    printf("stack is underflow");
                else {
                    printf("pop the element: %d", arr[top]);
                    top = top - 1;
                }
                break;
            case 3:
                if(top == -1)
                    printf("stack is empty");
                else {
                    printf("stack is: ");
                    for(i = top; i >= 0; i--)
                        printf("%d ", arr[i]);
                }
                break;
            case 4:
                ch = 0;
                printf("exit");
                break;
            default:
                printf("invalid choice");
        }
    }
}