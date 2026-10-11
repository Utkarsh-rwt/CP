#include <bits/stdc++.h>
using namespace std;

void cp(){

    int n ;
    cin>>n;

    string s;
    cin>>s;
    string ns="";
    bool removed =false ;
    ns+=s[0];

    for(int i =1 ; i<n-1 ; i++){
        
        if((s[i]!=s[i+1] && s[i]!=s[i-1] ) && !removed )  {
            removed=true;
            continue;
        }

         ns+= s[i];
    }

    ns+= s[n-1];

    int count = 0 ;
    
   
     for(int i= 0 ; i<ns.size();){
        int j = i;
        count ++;

       while(i+1 < ns.size() && ns[i]==ns[i+1]){
        i++;
       }
       while(i>0 && ns[i]==ns[i-1]) ++i;
       if(j==i) i++;

     }

     cout<<count<<"\n";
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