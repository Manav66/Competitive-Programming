#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int i,sum_black =0, sum_white=0;
    char s;
    for(i=0;i<64;i++){
        cin >> s;
        if(s=='Q')
            sum_white+=9;
        else if(s=='q')
            sum_black+=9;
        if(s=='R')
            sum_white+=5;
        else if(s=='r')
            sum_black+=5;
        if(s=='B')
            sum_white+=3;
        else if(s=='b')
            sum_black+=3;
        if(s=='N')
            sum_white+=3;
        else if(s=='n')
            sum_black+=3;
        if(s=='P')
            sum_white+=1;
        else if(s=='p')
            sum_black+=1;
    }
    if(sum_black > sum_white){
        cout << "Black";
    } 
    else if(sum_white > sum_black){
        cout << "White";
    }
    else cout << "Draw";
    
}
