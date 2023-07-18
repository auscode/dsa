#include <stdio.h>
#include <conio.h>
#define size 10
int main()
{
    int a[size], b[size], t[size], avg[size], i, n, time;
    a[0] = 0;
    // clrscr();
    printf("Enter the no. of processes\t");
    scanf("%d", &n);
    printf("Enter the arrival and burst time for corresponding processes\n");
    for (i = 1; i <= n; i++)
    {
        printf("\nFor process %d\n\narrival should be ascending order.");
        scanf("%d", &a[i]);
        while (a[i] < a[i - 1])
        {
            printf("\nThe arrival time should be ascending order.");
            printf("\nEnter the arrival time for %d again\t", i);
            scanf("%d", &a[i]);
        }
        printf("burst time=\t");
        scanf("%d", &b[i]);
    }
    printf("\n\nFirst Come and First Serve Technique\n\n");
    avg[0] = time = 0;
    t[0] = 0;
    b[0] = 0;
    for (i = 1; i <= n; i++)
    {
        if (time <= a[i])
            time = a[i];
        avg[i] = time - a[i];
        t[i] = avg[i] + b[i];
        time += b[i];
    }
    printf("Process\tArrival time\tBUrst time \tAvg waiting time \tTurn around time\n");
    for (i = 0; i <= n; i++)
        printf("\n %d\t %d\t\t %d\t\t\t%d\t\t\t%d", i, a[i], b[i], avg[i], t[i]);
    getch();
}
