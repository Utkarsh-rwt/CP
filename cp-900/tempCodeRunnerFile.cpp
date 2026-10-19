#include <bits/stdc++.h>
using namespace std;

void cp(){
    int n ;
    cin>>n ;

    vector <int> arr(n);

    int maxi  = INT_MIN;
    int indxmaxi = 0 ;

    int mini = INT_MAX;
    int indxmini = 0 ;

    for(int i =0  ; i < n ; i++){
        cin>>arr[i];
        if(arr[i]>maxi){
            indxmaxi= i;
            maxi = arr[i];
        }
        if(arr[i]<mini){
             indxmini= i;
            min = arr[i];

        }
    }
     
    int secondmaxi  = INT_MIN ;
    int secondmini  = INT_MAX ;

    for(int i  = 0 ; i< n ; i++){
        if(i!= indxmaxi && arr[i]<maxi ){
            secondmaxi = max(secondmaxi,arr[i]);
            
        }
        if(i!=indxmin &&  arr[i]>mini){
            secondmini = min(secondmini,arr[i]);
        }


    }

    cout<<min(max-secondmini, secondmaxi - mini)<<"\n";
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