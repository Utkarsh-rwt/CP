#include <bits/stdc++.h>
using namespace std;

void cp(){
    int n ;
    cin>>n ;

    int sum = 0 ;
    for(int i = 0 ; i<n-1 ; i++){
        int x ;
        cin>>x;
        sum+=x;

    }

    cout<<-sum<<"\n";
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