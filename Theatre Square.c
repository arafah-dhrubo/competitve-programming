#include<stdio.h>
#include<math.h>
int main()
{
    long long m, n, c;
    scanf("%lld%lld%lld", &m, &n, &c);
    if(c==1) {
        printf("%lld", m*n);
    }
    else if(c>m && c>n)
    {
        printf("1");
    }
    else
    {
        long long ans = ceil(m/(c*1.0))*ceil(n/(c*1.0));
        printf("%lld", ans);
    }
}
