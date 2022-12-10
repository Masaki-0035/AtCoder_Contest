#include <stdio.h>

int main(void)
{
    long long int N, T;
    int i, b;
    // 入力--------------------------------------------------------
    scanf("%lld %lld", &N, &T);
    int A[N];
    for (i = 0; i < N; i++)
        scanf("%d", &A[i]);
    // 処理--------------------------------------------------------

    i = 0;
    while (T > 0)
    {
        // printf("%d-%d\n", T, A[i]);
        b = T;
        T = T - A[i];
        i++;
        if (i > N)
            i = 0;
    }
    printf("%d %d", i, b);
}
