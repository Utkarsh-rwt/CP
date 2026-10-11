#include <bits/stdc++.h>
using namespace std;

bool check(string &x , string &s){
    for(int i  = 0 ; i< x.size(); i++){

        if(x[i]==s[0]){
            int j = 0 ;
            int temp = i ;
            while((i< x.size() && j<s.size()) && x[i]==s[j]) {
                i++;
                j++;
            }

            if(j==s.size()) return true ;
            i= temp ;
        }
    }

    return false ;

}

void cp(){
    int n , m;

    cin>>n>>m ;
    string x ,s ;
    cin>>x;
    cin>>s;
      
    int count = 0 ;

    while(true){

        if(check(x,s)) {
            cout<<count<<"\n";
            return ;
        }
        else {
            x=x+x;
            count++;
            if(x.size()>2*s.size() && !check(x,s)){
                cout<<-1<<"\n";
                return ;
            }
            if(x.size()>2*s.size() && check(x,s)){
                cout<<count<<"\n";
                return ;
            }

        }


    }
    cout<<-1<<"\n";

}

int main() {
    int t;
    cin >> t;

    while(t--) {
cp();
    }

    return 0;
}