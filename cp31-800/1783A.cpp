#include <bits/stdc++.h>
using namespace std;

void cp(){
int n ;
cin>>n ;
 vector <int> arr(n);
for(int i  =0 ; i< n ; i++){
    cin>>arr[i];
}

sort(arr.rbegin(), arr.rend());


if(arr[0]==arr[1]) {
    int  i= 1 ;
    while(i<n  && arr[i]==arr[i-1] ){
        i++;

    }
    if(i<n )swap(arr[1],arr[i]);
}


int sum = 0;

for(int i =0 ; i<n; i++){
    if(sum==arr[i]) {
        cout<<"No"<<"\n";
        return ;
    }
    sum+=arr[i];

}

cout<<"Yes"<<"\n";

for(int i = 0 ; i< n ; i++){
    cout<<arr[i]<<" ";
}
cout<<"\n";
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