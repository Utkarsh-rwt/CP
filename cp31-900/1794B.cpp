
#include <bits/stdc++.h>
using namespace std;
 
void cp(){
 
    int n ;
    cin>>n ;
    vector<int> arr (n+2,0);
    arr[0]=INT_MAX;
    arr[n+1]=1;
 
    for(int i  =1 ; i< n+1; i++){
        cin>>arr[i];
    }
 
    for(int i = 1 ; i<n+1 ; i++ ){
        while(arr[i]%arr[i-1]==0 || arr[i+1]%arr[i]==0)
        {
             
            if(arr[i-1]==1) arr[i-1]++;
             arr[i]++;
            if(arr[i+1]%arr[i]==0) arr[i+1]++;
        }
         
    }
 
    for(int i = 1 ; i<n+1 ; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
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