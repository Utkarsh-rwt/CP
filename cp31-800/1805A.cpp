#include <bits/stdc++.h>
using namespace std;

void cp(){
    int n ;
    cin>>n ;
    vector<int> arr (n);
    int  x = 0 ;
    for(int i = 0 ; i<n ; i++){
    cin>>arr[i];
    x=x^arr[i];
    }
      

    
    for(int i= 0 ; i<n ; i++){
        arr[i]= arr[i]^x;
    }
    int result = 0;

    for(int i  = 0 ; i<n ; i++){
        result =  arr[i]^result ;

    }

    if(result==0) cout<<x<<"\n";
    else cout<<-1<<"\n";
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