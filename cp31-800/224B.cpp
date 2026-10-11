#include <bits/stdc++.h>
using namespace std;

bool check(vector <long long int > & arr, int n ){
    for(int i =0 ; i<n-1;  i++ ){
        if(arr[i]>= arr[i+1]) {
            return false;
        }

      
    }

    return true ;
}

void cp(){

    int n ;
    cin>>n ;

    vector <long long int > arr (n);

     for(int i =0 ; i< n ; i++){
        int x ;
        cin>>x;
        arr[i]=x;
     }


     for(int i = 0 ; i< n-1; i++){
        if(arr[i]>= i+1){
            long long int  total = arr[i]+arr[i+1];
            arr[i]= i+1;
            arr[i+1]= total - arr[i];

        }
       
     }

     if(check(arr,n)){
        cout<<"YES"<<"\n";
        return ;
        


     }

     cout<<"NO"<<"\n";



}

int main() {
    int t;
    cin >> t;

    while(t--) {
cp();
    }

    return 0;
}