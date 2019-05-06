#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,flag=1,loop=0;
    cout<<"the number of value:";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    n--;
    while(flag)
    {

        int i,left,right;
        flag=0;
        for(i=floor(n/2); i>0; i--)
        {
            left=2*i;
            right=(2*i)+1;
            if(right>n)
            {
                if(a[i]>a[left])
                {
                    int x;
                    x=a[i];
                    a[i]=a[left];
                    a[left]=x;
                    flag++;

                }
            }
            else
            {
                if(a[left]>a[right])
                {
                    if(a[i]>a[right])
                    {
                        int x;
                        x=a[i];
                        a[i]=a[right];
                        a[right]=x;
                        flag++;
                    }
                }
                else
                {
                    if(a[i]>a[left])
                    {
                        int x;
                        x=a[i];
                        a[i]=a[left];
                        a[left]=x;
                        flag++;
                    }
                }
            }

        }
        loop++;
    }
        n++;
    /*int b[n];
    for(int i=0;i<n;i++){
        b[i]=
    }
    */



    for(int i=0; i<(n-1); i++)
    {
        for(int j=0; j<(n-i-1); j++)
        {
            if(a[j]>a[j+1])
            {
                int x;
                x=a[j];
                a[j]=a[j+1];
                a[j+1]=x;
            }
        }
    }
    cout<<"the sorted value is";
    for(int i=0; i<n; i++)
    {
        cout<<a[i];
        cout<<" ";

    }
    cout<<endl;
    cout<<"loop:";
    cout<<loop;
    return 0;
}
