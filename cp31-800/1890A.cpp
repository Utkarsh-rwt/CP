#include <bits/stdc++.h>
using namespace std;

bool make (int sum , unordered_map<int,int> freq ,int n ,int start){

    vector <int> arr(n);
    arr[0]=start;
    freq[start]--;

    for(int i = 1 ;i<n ;i++){
        if(freq[sum-arr[i-1]]>0){
            freq[sum-arr[i-1]]--;
            arr[i]=sum-arr[i-1];
        } 

        else return false;
    }

    return true ;
}

void cp(){
    int n;
    int total = 0 ;
     cin>>n;
    unordered_map <int,int> freq ;
    vector <int>  nums (n);

    for(int i = 0 ; i < n ; i++){
        cin>>nums[i];
        total+=nums[i];
        freq[nums[i]]++;
    }
        

    int pairs = ceil (double(n)/2);
    int k = total/pairs;

    if(make(k,freq,n,nums[0])|| (make (k+1,freq,n,nums[0]) || make(k-1,freq,n,nums[0])) ) cout<<"Yes"<<"\n";
    else cout<<"No"<<"\n";

    return ;


  
       



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