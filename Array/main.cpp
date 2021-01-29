#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin>>N;
    int a[N];
    for(int i=0; i<N; i++){
        cin>>a[i];
    }
    for(int i=0; i<N; i++){
        cout<<a[N-i-1]<<" ";
    }
    return 0;
}