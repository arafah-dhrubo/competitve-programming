#include<stdio.h>
int main()
{
    int n, k, c=0, p;
    scanf("%d%d", &n, &k);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &p);
        if(p>k)
        {
            c++;
        }
    }
    printf("%d", c);
}
