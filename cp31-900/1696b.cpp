#include <bits/stdc++.h>
using namespace std;

void cp(){
    int n ;
    cin>>n ;
    int ans = 0 ;

    vector <int> arr(n);

    for(int i  =0 ; i<n ; i++){
     cin>>arr[i];
    }

    
    for(int i  =0 ; i<n ; i++){
        if(arr[i]!=0) {
            while(i<n && arr[i]!=0)i++;

            i--;
            ans++;
        }

    }

    cout<<min(ans,2)<<"\n";
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