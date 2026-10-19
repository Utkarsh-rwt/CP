#include <bits/stdc++.h>
using namespace std;

void cp(){

    string s , t;
    cin>>s>>t;
    vector <int> freq(26,0);
    for(char x : s ) freq[x-'A']++:

   int index  = s.size()-1;

    for(int i  = t.size()-1 ;i>=0 ; i--){
        
        while(index>=0 && s[index]!=t[i]) {
            freq[s[index]-'A']--;
            
            index--;
        }



        if(index==-1) {
            cout<<"NO"<<"\n";
            return ;
        }
    }

    cout<<"yes"<<"\n";
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