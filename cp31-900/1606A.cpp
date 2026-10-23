#include <bits/stdc++.h>
using namespace std;

void cp(){


string s ;
cin>>s ;

int ab=0 ,ba=0 ;

for(int i =0 ; i<s.size()-1; i++){
    if(s[i]=='a' && s[i+1]=='b') ab++;
    if(s[i]=='b' && s[i+1]=='a') ba++;

}

if(ab==ba){
    cout<<s<<'\n';
    return ;
}



if(s[0]=='a'){
    if(s[1]=='a' && ba+1==ab) {
        s[0]='b';
        cout<<s<<"\n";
        return ;
    } 
    else if(ba==ab-1) {
        s[0]='b';
        cout<<s<<"\n";
        return ;

    }

}
else if(s[0]=='b'){

     if(s[1]=='b' && ba==ab+1) {
        s[0]='a';
        cout<<s<<"\n";
        return ;
    } 
    else if(ba-1==ab) {
        s[0]='a';
        cout<<s<<"\n";
        return ;

    }


}


if(s[s.size()-1]=='a'){
    if(s[s.size()-2]=='a' && ba==ab+1) {
        s[s.size()-1]='b';
        cout<<s<<"\n";
        return ;
    } 
    else if(ba-1==ab) {
        s[s.size()-1]='b';
        cout<<s<<"\n";
        return ;

    }

}
else if(s[s.size()-1]=='b'){

     if(s[s.size()-2]=='b' && ba+1==ab) {
        s[s.size()-1]='a';
        cout<<s<<"\n";
        return ;
    } 
    else if(ba==ab-1) {
        s[s.size()-1]='a';
        cout<<s<<"\n";
        return ;

    }


}


for(int i  =1 ; i<s.size()-1 ; i++){
    if(s[i]=='a'){
        
        if(s[i+1]=='a' && s[i-1]=='b')   {
            if(ba-1==ab)  {
              s[i]=='b';
              cout<<s<<"\n";
              return ;

            }
        }
        
    }

    else if (s[i]=='b'){
      
        if(s[i+1]=='a' && s[i-1]=='a') {
            if(ba-1==ab)  {
              s[i]=='a';
              cout<<s<<"\n";
              return ;

            }
        }

    }

}





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