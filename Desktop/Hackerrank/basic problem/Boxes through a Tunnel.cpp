#include <stdio.h>
int main()
{
    int n;scanf("%d", &n);
    while(n--){
        int a,b,c;scanf("%d %d %d", &a, &b, &c);
        if(a && b && c <41){
            printf("%d\n", a*b*c);
        }
    }
}