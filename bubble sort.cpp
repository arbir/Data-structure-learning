#include<bits/stdc++.h>
using namespace std;
int n,value,mid;
int bsearch(int beg,int endd,int a[])
{
    if(beg<endd and value!=beg and value!=endd)
    {
        mid=(beg+endd)/2;
        if(a[mid]==value)
        {
            cout<<"the value is in "<<mid<<" position";
            return mid;
        }
        else if(a[mid]>value)
        {
            bsearch(beg,mid-1,a);
        }
        else if(a[mid]<value)
        {
            bsearch(mid+1,endd,a);
        }
        else
        {
            cout<<"value not found";
            return 0;
        }
    }
    else if(a[beg]==value)
        cout<<"the value is in "<<beg<<" position";
    else if(a[endd]==value)
        cout<<"the value is in "<<endd<<" position";
}
int main()
{
    cin>>n;
    int a[n];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    cin>>value;
    int beg,endd;
    beg=1;
    endd=n;
    if(a[beg]==value)
        cout<<"the value is in "<<beg<<" position";
    else if(a[endd]==value)
        cout<<"the value is in "<<endd<<" position";
    else
       bsearch(beg,endd,a);

}
