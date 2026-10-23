#include <bits/stdc++.h>
using namespace std;

void cp(){
    long long  x , n ;
    cin>>x>> n ;


    if(n<1){
        cout<<x<<"\n";
        return ;
    }


     
    n--;
    
    int r = n/4 * 2 ;


    if(x%2==0){

        x--;

        x
        
    }

    else {
        x++;

    }



    cout<<x<<"\n";
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