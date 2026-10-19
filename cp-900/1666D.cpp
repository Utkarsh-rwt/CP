#include <bits/stdc++.h>
using namespace std;

void cp(){

    string s,t;
    cin>>s>>t ;
    

    int i = t.size()-1;
    int j = s.size()-1;
    int last = j+1 ;


     while(i>=0 && j >= 0){
        if(s[j]==t[i]){
             
            if(j>last ) {
                cout<< "No"<<"\n";
                  return ;
            }
            else last = j ;



            s[j]='*';
            i--;
            j= s.size()-1;
        }
        else  j--;


     }

     if(i>=0 ) cout<< "No"<<"\n";

     else cout<<"Yes"<<"\n";
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