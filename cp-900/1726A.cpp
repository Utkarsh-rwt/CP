#include <bits/stdc++.h>
using namespace std;

void cp(){

    int n ;
    cin>>n ;
    vector <int> arr(n,0);
    
    int maxi = INT_MIN;
    int mini  = INT_MAX;

    for(int i = 0 ; i< n ; i++){
         cin>> arr[i];
         maxi = max(maxi,arr[i]);
         mini = min(mini,arr[i]);
    }
     
    int ans = INT_MIN;

    ans = max((arr[n-1]-arr[0]),ans);

     for(int i  = 1 ; i< n ;i++){
        int diff = arr[i-1]-arr[i];
        ans = max(ans,diff);
     }   

     cout<<max(ans, max(maxi-arr[0],arr[n-1]-mini))<<'\n';
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