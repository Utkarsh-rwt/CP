#include <bits/stdc++.h>
using namespace std;

void cp(){

    int n ;
    cin>>n ;

    int freq1= 0 ;
    int freq0 = 0;

    for(int i  =0  ; i<n ; i++){
        int x ; 
        cin>>x ;
        if(x==1) freq1++;
        if(x==0) freq0++;

    }

    cout << (long long )freq1*((long long)1<<(long long)freq0)<<'\n';

    return ;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while(t--) {
cp();
    }

    return 0;
}