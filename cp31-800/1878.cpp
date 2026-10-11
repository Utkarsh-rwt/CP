#include <bits/stdc++.h>
using namespace std;

void cp(){
    int n , k ;
    cin>>n>>k;

    vector <int> arr(n);

    for(int i  =0 ; i<n ; i++){
        cin>>arr[i];
    }

    for(int i =0 ;i <n ; i++){
        if(arr[i]==k){
            cout<<"Yes"<<"\n";
            return;
        }

    }

    cout<<"No"<<"\n";
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