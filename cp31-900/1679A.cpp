#include <bits/stdc++.h>
using namespace std;

void cp(){
    long long  int  n ;
    cin>>n ;


if(n%2!=0 || n<4) {
    cout<<-1<<"\n";
     return ;
}

    long long  mini =0 ;

      for(long long  i = n/6; i>=0; i--){
        if((n-6*i)%4==0) {
            mini = i+(n-6*i)/4;
            break;
        }
    }


    long long  maxi = 0 ;
    for(long long  i = 0;  i<=n/6 ; i++){
        if((n-6*i)%4==0){
         maxi = i+(n-6*i)/4;
         break ;
        }
    }


   

    cout<<mini<<" "<<maxi<<"\n";
    return ;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long  t;
    cin >> t;

    while(t--) {
cp();
    }

    return 0;
}