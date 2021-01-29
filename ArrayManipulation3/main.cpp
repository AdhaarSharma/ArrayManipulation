#include <bits/stdc++.h>

using namespace std;

long long* finalArray(int m, long long *arr_ptr, long long queries[], int a, int b, long long k){
        queries[a] += k;
        queries[b+1] -= k;
        arr_ptr = queries;
        return arr_ptr;
}

int main(){
    int n, m, a, b;
    long long k, *arr_ptr{nullptr};
    cin>>n>>m;
    long long queries[n+2]{};
    for(int i=0; i<m; i++){
        cin>>a>>b>>k;
        arr_ptr = finalArray(m, arr_ptr, queries, a, b, k);
    }
    for(int i=0; i<n+2; i++){
        cout<<*(arr_ptr+i)<<endl;
    }
    for(int i=0; i<n+1; i++){
        *(arr_ptr+i)+=*(arr_ptr+i+1);
        *(arr_ptr+i+1)=*(arr_ptr+i);
    }
    cout<<endl;
    for(int i=0; i<n+2; i++){
        cout<<*(arr_ptr+i)<<endl;
    }
    cout<<endl;
    long long max_num=INT_MIN;
    for(int i=0; i<n; i++){
        if(*(arr_ptr+i)>max_num){
            max_num=*(arr_ptr+i);
        }
    }
    cout<<max_num;
    return 0;
}
