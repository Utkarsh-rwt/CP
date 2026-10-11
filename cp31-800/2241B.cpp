#include <bits/stdc++.h>
using namespace std;

bool isGood(int y){
    unordered_map <int ,int > freq ; 
    while(y>0){
        int digit = y%10;
        freq[digit]++;
        if(freq.size()>2 )  return false ;
        y = y/10;
    }
    return true ;
}

void cp(){
    int x ; 
    cin >> x ;
    for(int i = 2 ; i <=10 ; i++){
        long long temp = x*i;
        if(!isGood(i)) continue;


        if(isGood(temp)){
            cout<<i<<"\n";
            return ;
        }

       


        }
        for(int i = 11; i <pow(10,9) ; i=i+11){
        long long temp = x*i;
        if(!isGood(i)) continue;


        if(isGood(temp)){
            cout<<i<<"\n";
            return ;
        }

       


        }



    }




int main() {
    int t;
    cin >> t;

    while(t--) {
cp();
    }

    return 0;
}