#include <stdio.h>
struct Job
{
    int jobNumber;
    int profit;
    int deadline;
};

void jobSequencing(struct Job jobs[], int n);
int main()
{
    int n;
    printf("Enter the number of jobs: ");
    scanf("%d", &n);
    struct Job jobs[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter profit and deadline for job %d: ", i + 1);
        scanf("%d %d", &jobs[i].profit, &jobs[i].deadline);
        jobs[i].jobNumber = i + 1;
    }
    jobSequencing(jobs, n);
    return 0;
}

void jobSequencing(struct Job jobs[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (jobs[j].profit < jobs[j + 1].profit)
            {
                struct Job temp = jobs[j];
                jobs[j] = jobs[j + 1];
                jobs[j + 1] = temp;
            }
        }
    }
    int maxDeadline = 0;
    for (int i = 0; i < n; i++)
    {
        if (jobs[i].deadline > maxDeadline)
        {
            maxDeadline = jobs[i].deadline;
        }
    }
    int jobAlloc[maxDeadline];
    for (int i = 0; i < maxDeadline; i++)
    {
        jobAlloc[i] = -1;
    }
    int totalProfit = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = jobs[i].deadline - 1; j >= 0; j--)
        {
            if (jobAlloc[j] == -1)
            {
                jobAlloc[j] = jobs[i].jobNumber;
                totalProfit += jobs[i].profit;
                break;
            }
        }
    }
    printf("\nJob Sequence: ");
    for (int i = 0; i < maxDeadline; i++)
    {
        if (jobAlloc[i] != -1)
        {
            printf("Job%d ", jobAlloc[i]);
        }
    }
    printf("\nTotal Profit: %d\n", totalProfit);
}