#include <bits/stdc++.h>
using namespace std;

void cp(){

    int n ;
    cin>>n;
    
    set <int> unique ;

    vector <int> diff ;

    for(int i  = 1; i<=n ; i++){
        int x ;
        cin>>x ;
        if(abs(x-i)!=0) diff.push_back(abs(x-i));
    }

    int ans  = 0 ; 

    for(auto x  :  diff){
        ans = gcd (ans,x);
    }
    
    cout<<ans<<"\n";
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