#include <bits/stdc++.h>
using namespace std;

void cp(){

    int n ;
    cin>>n ;
    vector <int>  arr(n);
    for(int i =0 ; i<n ; i++){
     cin>>arr[i];
    }


    int ans = INT_MAX;
    int l =0 ;
    int r = 0 ;
    for(int i = 0 ; i< n ; i++){
        for(int j = i ; j<n ; j++){
            if(ans > (arr[i]&arr[j]) ){
                ans = (arr[i]&arr[j]);
                l = i ;
                r = j ;
            }
            
        }
     
    }

    for(int i = 0 ; i<n ;i++ ){
        if(i != l && i !=r) ans = min (ans , arr[i]&ans);
    }

 
    cout<< ans <<"\n";
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