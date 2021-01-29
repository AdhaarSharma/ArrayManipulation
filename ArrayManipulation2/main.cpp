#include <bits/stdc++.h>

using namespace std;

long long* finalArray(long long queries[], int a, int b, long long k){
    for(int i=a-1; i<b; i++)
        queries[i] += k;
    return queries;
}

int main(){
    int n, m, a, b;
    long long k, *arr_ptr{nullptr};
    cin>>n>>m;
    long long queries[n]{};
    for(int i=0; i<m; i++){
        cin>>a>>b>>k;
    arr_ptr = finalArray(queries, a, b, k);
    }
    long long max_num=INT_MIN;
    for(int i=0; i<n; i++){
        if(*(arr_ptr+i)>max_num){
            max_num=*(arr_ptr+i);
        }
    }
    cout<<max_num;
    return 0;
}
