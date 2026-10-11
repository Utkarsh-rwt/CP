#include <bits/stdc++.h>
using namespace std;

void cp(){
    int n ,k;
    cin>>n>>k;
    vector <int> arr(n);

    for(int i  = 0 ; i< n ; i++){
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());

    int longest = 0 ;
    int count  =0  ;

    for(int i = 1 ; i<n ; i++){

        if((arr[i]-arr[i-1])<=k) count ++;
        else {
             longest = max (count,longest);
              count = 0 ;
          
        }

    }
   
    longest = max (count,longest);
    longest++;

    cout<< n - longest <<"\n";
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