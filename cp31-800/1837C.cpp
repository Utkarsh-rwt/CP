#include <bits/stdc++.h>
using namespace std;

void cp(){

    long long int  score = 0 ;
    vector <vector <char>> mat (10, vector <char> (10,' '));

    for(int i = 0 ; i<10 ;i++){
        for(int j = 0 ; j<10 ;j++){
            cin>>mat[i][j];
        
            }
    }
    
    int i = 0 ;
    int j  = 0 ;

 
    while(i!=9){
        int left = j;
        int right = 9-j;
        int top = i ;
        int bottom = 9-i;

        for(int p = left ; p<= right ; p++){
            if(mat[top][p]=='X') score += i+1;
        }

        top++;

        for(int p = top ; p<=bottom ; p++){
             if(mat[p][right]=='X') score += i+1;
            
        }
        right--;

         for(int p = right ; p>=left; p--){
             if(mat[bottom][p]=='X') score += i+1;
            
        }

        bottom--;

        for(int p = bottom ; p>=top ; p--){
             if(mat[p][left]=='X') score += i+1;
            
        }

        i++;
        j++;

    }

    cout<<score<<"\n";
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