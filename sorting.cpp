#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    ///insertion
   /* int x,j;
    for(int i=1;i<=n;i++)
    {
        x=a[i];
        j=i-1;
        while(j>=1 and a[j]>x)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
    */
    ///selection
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(a[i]<a[j])
                swap(a[i],a[j]);
        }
    }

    ///bubble
   /* for(int i=1;i<=n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(a[j+1]<a[j])
                swap(a[j+1],a[j]);
        }
    }*/

    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
}
