#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int pos, c = 0;
    scanf("%d", &pos);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == pos)
        {
            c++;
            break;
        }
    }
    if (c == 0)
        printf("-1");
    else
        printf("%d\n", i);
}
