#include <bits/stdc++.h>
using namespace std;

void cp(){
    long long  n ;
    cin>>n ;
    int  i = 1 ;

    while(n%i==0) i++;

    cout<<i-1<<"\n";

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