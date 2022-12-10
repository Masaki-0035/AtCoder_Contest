#include <stdio.h>

int main(void)
{
    int Ans = 0;
    char str[10];
    scanf("%s", &str);
    if (str[Ans] >= 65 && str[Ans] <= 90)
        Ans++;

    if (str[Ans] > 48 && str[Ans] <= 57)
        Ans++;

    for (int i = 0; i < 6; i++)
    {
        if (str[Ans] >= 48 && str[Ans] <= 57)
            Ans++;
    }

    if (str[Ans] >= 65 && str[Ans] <= 90)
        Ans++;

    if (Ans >= 8)
        printf("Yes");
    else
        printf("No");
}
