#include <stdio.h>
int main()
{
    int queue[5], ch = 1, f = -1, r = -1, i, max, n, val;

    printf("\n enter the size of queue: ");
    scanf("%d", &n);
    max = n - 1;
    printf("\n 1. insertion \n 2.deletion\n 3.display \n 4.exit");
    while (ch)
    {
        printf("\nenter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                if (r == max)
                {
                    printf("\nqueue is full");
                }
                else
                {
                    if (r == -1)
                    {
                        f = 0;
                    }
                    r += 1;
                    printf("\nenter the array element: ");
                    scanf("%d", &val);
                    queue[r] = val;
                }
                break;
            case 2:
                if (f == -1 || f > r)
                {
                    printf("queue is empty");
                }
                else
                {
                    val = queue[f];
                    printf("%d is deleted", val);
                    f++;
                }
                break;
            case 3:
                if (f == -1 || f > r)
                {
                    printf("queue is empty");
                }
                else
                {
                    printf("\ndisplay queue: ");
                    for (i = f; i <= r; i++)
                    {
                        printf("\t%d", queue[i]);
                    }
                }
                break;
            case 4:
                ch = 0;
                printf("\nexit");
                break;
            default:
                printf("invalid choice");
        }
    }
    getch();
}