#include <bits/stdc++.h>
using namespace std;

void cp(){

    long long int n ;
    cin>>n ;

    long long int temp1 = n ;
    long long int temp2 = n ;
    int r1 =0 ;
    int r2 =0 ;

    while(temp1>0){
        if(temp1%10==5)break ;
        temp1/=10;
        r1++;
        
    } 
    temp1/=10;
    while(temp1>0){
         if(temp1%10==7 || temp1%10==2) break;
        temp1/=10;
        r1++;
       
    }


     
    while(temp2>0){
        if(temp2%10==0)break ;
        temp2/=10;
        r2++;
        
    } 
    temp2/=10;
    while(temp2>0){
        if(temp2%10==0 || temp2%10==5) break;
        temp2/=10;
        r2++;
        
    }

     
    cout<<min(r1,r2)<<"\n";
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