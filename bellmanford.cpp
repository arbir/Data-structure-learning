#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector < pair < int, int > > vec[1009];

int main()
{
    int a,b,w,n,source,distance[10],u,e,v;
    fill(distance,distance+10,1e9);
    cout<<"Enter the number of nodes and edges : "<<endl;
    cin>>n>>e;
    cout<<"Enter the adjacent nodes and their weights: "<<endl;
    for(int i = 1; i <= e; i++)
    {
        cin>>a>>b>>w;
        vec[a].push_back(make_pair(b,w));
    }
    cout<<"Enter the source : "<<endl;
    cin>>source;
    distance[source] = 0;

    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j <= e; j++)
        {
            for(int k = 0; k < vec[j].size(); k++)
            {
                v = vec[j][k].first;
                w = vec[j][k].second;
                if(distance[v] > distance[j] + w)
                {
                    distance[v] = distance[j] + w;
                }
            }
        }

    }

    bool tf = true;
    for(int j = 1; j <= e; j++)
        {
            for(int k = 0; k < vec[j].size(); k++)
            {
                v = vec[j][k].first;
                w = vec[j][k].second;
                if(distance[v] > distance[j] + w)
                {
                    distance[v] = distance[j] + w;
                    cout<<"Negative cycle detected."<<endl;
                    tf = false;
                    break;
                }
            }
            if(distance[v] > distance[j] + w) break;
        }

    if(tf)
        cout<<"Bellman Ford successful."<<endl;

    return 0;
}
/*
5 8
0 1 -1
3 2 5
1 2 3
1 3 2
1 4 2
4 3 -3
3 1 1
0 2 4
*/
