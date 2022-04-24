#include<stdio.h>
int main()
{
    int t, c=0;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        char str[300];
        scanf("%s", str);

        if(str[1]=='+') c++;
        else c--;
    }
    printf("%d", c);
}
