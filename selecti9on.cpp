#include<iostream>
using namespace std;
int main()
{
    int imin,i,j,n;
    cout<<"enter the value number"<<endl;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)

    {
        imin=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[imin])
            {
                imin=j;
            }
        }
        int x;
        x=a[i];
        a[i]=a[imin];
        a[imin]=x;
    }
        for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\n";
    }
}
