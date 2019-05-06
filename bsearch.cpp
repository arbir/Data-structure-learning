#include<bits/stdc++.h>
using namespace std;
int mid,value;
int bsearch(int beg,int endd,int a[])
{
    mid=(beg+endd)/2;
    if(beg<endd)
    {
        if(value==a[mid])
            cout<<"value found in the "<<mid<<" position";
        else if(value<a[mid])
            bsearch(beg,mid-1,a);
        else if(value>a[mid])
            bsearch(mid+1,endd,a);
    }
    else
        cout<<"value not found";
    return 0;
}
int main()
{
    int n,beg,endd;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the value:";
    cin>>value;
    beg=1;
    endd=n;
    if(a[1]!=value and a[n]!=value)
        bsearch(beg,endd,a);
    else if(a[1]==value)
        cout<<"value found in the 1 position";
    else if(a[n]==value)
        cout<<"value found in the "<<n<<" position";

}
