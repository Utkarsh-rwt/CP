#include <bits/stdc++.h>
using namespace std;

void cp(){
int n  ;
    cin>> n ;
    string s  ;
    cin>> s ;

    unordered_map <char ,int > freq;
    
    for(int i = 1 ; i<n-1; i++){
        freq[s[i]]++;
    }


    for(auto it = freq.begin() ; it!= freq.end(); it++){
        if(it->second==1 ) {
            if((it->first!= s[0] && it->first!=s[n-1])){
            it->second=0 ;
            break;
            }
        }
    }   
 
    freq[s[0]]++;
    freq[s[n-1]]++;
    int ans = 0 ;

    for(auto it = freq.begin() ; it!= freq.end(); it++){
        if(it->second!=0) ans++;
    }

    cout<<ans<<"\n";
    return ;

}

int main() {
    int t;
    cin >> t;

    while(t--) {
cp();
    }

    return 0;
}