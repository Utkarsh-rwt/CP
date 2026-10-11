#include <bits/stdc++.h>
using namespace std;

bool check (vector<int> &arr){

    for(int i =  0 ; i<arr.size()-1; i++){
        if(arr[i+1]<arr[i]) return false ;
    }

    return true ;
}

void cp(){
    int n ;
    cin>>n ;
    vector <int> arr (n);

    for(int i = 0 ; i<n ;i++){
        cin>>arr[i];
        
    }
    int gap = INT_MAX;
   
    if(!check(arr)) {
        cout<<0<<"\n";
        return ;
    }


    for(int i  =0 ; i<n-1 ; i++){
        gap = min(gap,abs(arr[i]-arr[i+1]));

    }

    

    
        
            cout<<(gap/2)+1<<"\n";


       

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