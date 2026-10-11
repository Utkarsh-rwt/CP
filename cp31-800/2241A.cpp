#include <bits/stdc++.h>
using namespace std;

void cp(){
    int x , y;
    cin >> x>> y;
    if(y==x ) {
        cout << "YES" <<"\n";
        return ;
    }
    if(x<y){
        cout<<"NO"<< "\n";
        return ;
    }

   int low = 1  ;
   int high = x;

   while(low <=high){
    int mid = low + (high -low)/2 ;
    if (x/mid == y && x%mid == 0) {
        cout<<"YES"<<"\n"; 
        return;

    }

    if ( x/mid >= y) low = mid +1;
    else high = mid -1 ;



   }
    if (x/high == y && x%high == 0) {
       cout<<"YES"<<"\n"; 
        return;

    }
   cout<<"NO"<<"\n";

   return;






}

int main() {
    int t;
    cin >> t;

    while(t--) {
cp();
    }

    return 0;
}