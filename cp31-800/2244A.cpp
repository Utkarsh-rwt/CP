#include <bits/stdc++.h>
using namespace std;

void cp(){
    int n ;
    cin>>n ;
  
    string s ;
    cin>> s ;

    
    int maximum = INT_MIN;


    for(int i  =0 ; i < n; i++){
        if(s[i]=='#') {
            int count = 0 ; 
            while(s[i]=='#'){
                count++;
                ++i;
            }
            maximum= max ( maximum,count );
            
       --i;
            

        }

    }

  
    if(maximum==INT_MIN){
        cout<<0<<"\n";
        return ;
    }

    if(maximum%2==0){
        cout<<maximum/2<<"\n";
    }
    else{
        cout<<maximum/2 + 1<<"\n";
    }
       

     


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