#include <stdio.h>

int main(void)
{
    int N, K, D;
    int i;
    scanf("%d %d %d", &N, &K, &D);
    int A[N];
    for (i = 0; i < N; i++)
        scanf("%d", &A[i]);

    int X = -1;
    int Ans;

    if (Ans % D == 0 && X < Ans)
        X = Ans;

    return 0;
}
