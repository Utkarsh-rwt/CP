#include <bits/stdc++.h>
using namespace std;

void cp(){
    int n ;
    cin>>n ;

    vector<int> arr(n);

    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

        int count = 0 ;

        for(int i  = n-1 ; i>0 ; i--){
            if(arr[i]>arr[i-1]) continue ;
            else {

              

                while(arr[i]<=arr[i-1]) {
                    count ++ ;
                    arr[i-1]=arr[i-1]/2;

                   if(arr[i]==0) cout<<-1<<"\n";
                   
                }

            }
        }

        cout << count <<"\n"; 

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