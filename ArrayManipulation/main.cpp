#include <bits/stdc++.h>

using namespace std;

vector<long long> finalVector(int n, vector<long long> queries, int a, int b, long long k){
    for(int i=a-1; i<b; i++)
        queries[i]=queries[i]+k;
        return queries;
}

int main()
{
    int n, m, a, b, k;
    cin>>n>>m;
    vector<long long> queries(n,0);
    for(int i=0; i<m; i++){
        cin>>a>>b>>k;
        queries = finalVector(n, queries, a, b, k);
    }
    long long max_num=INT_MIN;
    for(int i=0; i<n; i++){
        if(queries[i]>max_num)
            max_num=queries[i];
    }
    cout<<max_num;

    return 0;
}