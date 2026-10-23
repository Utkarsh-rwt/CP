#include <bits/stdc++.h>
using namespace std;

void cp(){
int n ;
int s ;
cin>>n>>s;

vector <pair<int,int>> values;

for(int x = 0 ; x<= n ; x++){
    for(int y = 0 ; y<=n ; y++){
        if(4*x-y==s){
            values.push_back({x,y});

        }
    }
}

int ans = 51 ;

for(int i = 0 ; i<values.size();i++){
    if(values[i].first+ values[i].second <= n )  ans= min(ans , values[i].first+ values[i].second);
}

if(ans==51)ans=-1;
cout<<ans<<"\n";
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