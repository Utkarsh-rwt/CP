#include <bits/stdc++.h>
using namespace std;

void cp(){

    int a , b , c ;
    cin>>a >>b>>c;

     int d1 = b-a;
     int d2 = c-b ;

     if(d1==d2) {
        cout<<"Yes"<<"\n";
        return ;
     }
    
     // case1 first two same

     int x = b + d1;
     if(x%c==0 && x/c>0){
        cout<<"Yes"<<"\n";
        return ;
     }

     // case2 last two same
     
     x = b-d2;
     if(x%a==0 && x/a>0){
        cout<<"Yes"<<"\n";
        return ;
     }

    //   case 3 first and second same 

   int y = (a+c)/2 ;
   int z = ceil (((double)(a+c))/2);
   if((y!=0 && y==z )&&  (y%b==0 && y/b>0)){
    cout<<"Yes"<<"\n";
        return ;
   }
   

     cout<<"No"<<"\n";
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