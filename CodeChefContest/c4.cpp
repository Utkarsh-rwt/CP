#include <bits/stdc++.h>
using namespace std;


long long r (long long k){
        return  (k*(k+1)*(2k+1))/12 - (k*(k+1))/4 + k ;
}

void cp(){
long long n ;
cin>>n ;

long long k = 1 ; 
long long sum = 0;
long long low =  1;
long long high =  n ;

while(low<=high){
        long long mid = low + (high - low)/2;
        
        if(r(mid)< n) low = mid+1;
        else high = mid -1 ;

}


if(r(low)==n) {
        cout<< low<<"\n";
        
}
else cout<< low - 1<<"\n";
return ;








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