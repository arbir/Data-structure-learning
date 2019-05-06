#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[100];
    gets(st);
    int l=strlen(st);
    for(int i=0; i<l; i++)
    {
        if(st[i]==' '){
            cout<<"\n";
        i++;
        }
        cout<<st[i];
    }
}
