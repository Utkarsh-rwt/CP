#include <bits/stdc++.h>
using namespace std;

void cp(){

    int a ,b ,xk,yk,xq,yq;
    cin>>a>>b;
    cin>>xk>>yk;
    cin>>xq>>yq;

map <pair<int,int> ,int > king ;
map <pair<int,int> ,int > qween;


    int xk1 = xk-a;
    int yk1 = yk-b;
   king[{xk1,yk1}]++;

    int xk2= xk+a;
    int yk2 =yk+b;
  king[{xk2,yk2}]++;

     int xk3= xk-b;
     int yk3 =yk-a;
   king[{xk3,yk3}]++;


    int xk4= xk+b;
    int yk4 =yk+a;
   king[{xk4,yk4}]++;

   int xk5 = xk+a;
   int yk5 = yk-b;
  king[{xk5,yk5}]++;

   int xk6 = xk-a;
   int yk6 = yk+b;
   king[{xk6,yk6}]++;

   int xk7 = xk+b;
   int yk7 = yk-a;
  king[{xk7,yk7}]++;

   int xk8 = xk-b;
   int yk8 = yk+a;
   king[{xk8,yk8}]++;

  int xq1 = xq-a;
    int yq1 = yq-b;
  qween[{xq1,yq1}]++;

    int xq2= xq+a;
    int yq2 =yq+b;
  qween[{xq2,yq2}]++;

     int xq3= xq-b;
     int yq3 =yq-a;
  qween[{xq3,yq3}]++;


    int xq4= xq+b;
    int yq4 =yq+a;
  qween[{xq4,yq4}]++;

   int xq5 = xq+a;
   int yq5 = yq-b;
  qween[{xq5,yq5}]++;

   int xq6 = xq-a;
   int yq6 = yq+b;
  qween[{xq6,yq6}]++;

   int xq7 = xq+b;
   int yq7 = yq-a;
  qween[{xq7,yq7}]++;

   int xq8 = xq-b;
   int yq8 = yq+a;
  qween[{xq8,yq8}]++;

int ans = 0 ;

for(auto it = king.begin(); it!=king.end(); it++){
    if(qween.find(it->first)!= qween.end()) ans++;

}
   cout<<ans<<"\n";
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