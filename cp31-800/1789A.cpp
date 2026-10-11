#include <bits/stdc++.h>
using namespace std;


void cp(){

    int n ;
    cin>>n;
    vector<int> arr(n);
    for(int i  =0 ; i < n ; i++){
        cin>>arr[i];
    }



    for(int i =0 ;i<n ; i++){
        for(int j = 0 ; j< n ;j++){
            if(j!=i) {
                if(gcd(arr[i],arr[j])<=2) {
                    cout<<"Yes"<<"\n";
                    return ;
                }

            }
        }
    }
    cout<<"No"<<"\n";

    

    // sort(arr.begin(),arr.end());

    //     int i  =0 ;
    //     int prevgcd = gcd(arr[i],arr[i+1]);
    //     i++;
     
    //     for(; i<n-1 ; i++){

    //         if(i+1 < prevgcd){
    //              cout<<"No"<<"\n";
    //               return ;
    //         }

    //         if(prevgcd==1){
    //             cout<<"Yes"<<"\n";
    //             return ;
    //         } 
    //         int newgcd = gcd(arr[i],arr[i+1]);
    //         if(prevgcd!= gcd(arr[i],arr[i+1])) prevgcd=gcd(prevgcd,newgcd);


    //     }

    //     if(prevgcd>i+1) cout<<"No"<<"\n";
    //     else cout<<"Yes"<<"\n";
        


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