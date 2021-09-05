#include<stdio.h>
long long abs(long long n){
     return n>0?n:-n;
}
long long gcd(long a, long long b){
    if(b==0) return a;
    else return gcd(b,a%b);
    }
main()
{
    int i,t;
    long long  a1,a2,b1,b2;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lld%lld%lld%lld",&a1,&a2,&b1,&b2);
        printf("Case %d: %lld\n",i,gcd(abs(a1-b1),abs(a2-b2))+1);
    }
}
