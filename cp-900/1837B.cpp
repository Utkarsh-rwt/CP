#include <bits/stdc++.h>
using namespace std;

void cp(){
    int n ;
    string s ;
    cin>>n;
    cin>>s;

    int longest  = 0 ;
    int ans  = 0 ; 
    
    for(int i  =0 ; i< n-1 ; i++){
        if(s[i]==s[i+1]) longest ++;
        else longest = 0 ;

        ans= max(longest,ans);
    }

    ans++;

    cout<<ans+1<<"\n";
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