#include<bits/stdc++.h>
using namespace std;
int isprime(int n)
{
    if(n<=1)
        return 0;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int isprime2(int n)
{
    if(n<=1)
        return 0;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    if(isprime2(n))
        cout<<"it is prime";
    else
        cout<<"it is not prime";
}

