#include <bits/stdc++.h>
using namespace std;

void cp(){
long long n , m ;
cin>>n >> m;


vector <long long > arr (n);
for(int i =0 ; i<n ; i++){
    cin>>arr[i];

}

sort(arr.begin(), arr.end());


long long  totalshakes = 0;
int  people = 0 ;
int i = 0 ;

while(totalshakes < m){

    people+= arr[i++];
    totalshakes = ((people-1)*people)/2;

}

cout<<i<<"\n";
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