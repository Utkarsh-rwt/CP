#include <bits/stdc++.h>
using namespace std;

void cp(){

    int n , q ;
    cin>>n>>q ;
       
    long long sum  = 0;
    vector <int> arr (n+1,0);
    vector <int> prefixsum(n+1,0);
    
    for(int i = 1 ; i<=n  ; i++){
        cin>>arr[i];
        sum+=arr[i];
        prefixsum[i]=sum;
    }

    while(q--){

        int l,r,k ;
        cin>>l>>r>>k;

        l--;
        
       
        long long remove = prefixsum[r]-prefixsum[l];
        long long add = k*(r-l);

        int result = sum-remove+add;

       if(result%2==0) cout<<"No"<<"\n";
       else cout<<"Yes"<<"\n";

    }

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