// #include <bits/stdc++.h>
// using namespace std;

// void cp(){

//     int n ;
//     cin>>n ;


//     vector<int> love (n);
//     for(int i = 0 ; i<n ; i++){
//      cin>>love[i];
//     }

//     unordered_map <int ,vector<int> > callove ;

//     for(int i =0  ; i< n-4 ;i++){
//         int x = love[i]+ love[i+2]- love[i+4];
//         if(callove[x].find()==callove.end()){
//         callove[x].push_back(i);
         
//     }

// long long  count  = 0 ;

//     for(auto it = callove.begin() ; it!= callove.end() ;it++){

//         vector <int> arr = it->second ;
//         for(int i =0  ; i< arr.size() ;i++){
//             for(int  j  = i +1  ; j<arr.size() ; j++){
//                 if(arr[j]> arr[i]+4 || (arr[j]==arr[i]+1 || arr[j]==arr[i]+3)) count ++;
//             }
//         }

//     }

// cout<<count<<'\n';
// return ;

// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;

//     while(t--) {
// cp();
//     }

//     return 0;
// }

// wrong