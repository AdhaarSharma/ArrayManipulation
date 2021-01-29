#include <bits/stdc++.h>

using namespace std;

vector<long long> finalArray(int n, vector<long long> queries, int a, int b, long long k){
    queries[a]+=k;
    queries[b+1]-=k;
    return queries;
}

int main()
{
    int n, m, a, b, k;
    cin>>n>>m;
    vector<long long> queries(n+2,0);
    for(int i=0; i<m; i++){
        cin>>a>>b>>k;
        queries = finalArray(n, queries, a, b, k);
    }
    for(int i=0; i<n+1; i++){
        queries[i]+=queries[i+1];
        queries[i+1]=queries[i];
    }
    long long max_num=0;
    for(int i=0; i<n; i++){
        if(queries[i]>max_num)
            max_num=queries[i];
    }
    cout<<max_num;

    return 0;
}
