#include <bits/stdc++.h>
using namespace std;

void cp(){
    int n , k;
    cin>>n>>k;

    string s ;
     cin>>s ;
      
     unordered_map <char,int> freq;


     for(int i  =0 ; i<s.size(); i++){
        freq[s[i]]++;
     }

     bool oneodd = false ;
     for(auto it = freq.begin(); it!=freq.end() ;it ++){

        if((it->second)%2!=0) {
            if(!oneodd)  {
                oneodd = true ;
                continue;
            }
            
            else  if(k>0) {
                it->second= (it->second)-1;
                k--;
            }
            else {
                cout<<"NO"<<"\n";
                return ;
            }

        }


     }



 cout<<"Yes"<<"\n";
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