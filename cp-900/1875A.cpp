#include <bits/stdc++.h>
using namespace std;

void cp(){
    int a , b , n ;
    cin>>a>>b>>n;

vector <int> arr(n);

for(int i  = 0 ; i<n  ;i++){
    cin>>arr[i];

}


long long ans = 0;

int timer  = b ;

for(int i  =0 ; i<n ; i++){

    int x = arr[i];

if(timer+x>a){
    ans += timer - 1;
    timer = 1 ;
    timer = min (a , timer+x);

}
else timer+= x;

}

ans += timer ;

cout<<ans<<"\n";
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