// 1 + 2*3 + 4*5*6 + 7*8*9*10 .....
#include<bits/stdc++.h>
using namespace std;

int term(int calculated, int current, int n){
    int cur = 1;
    if(current == n+1) return 0;
    for(int i = calculated; i < calculated + current; i++){
        cur*=i;
    }
    return cur + term(i, current+1, n);
}

int main(){
    int n;
    cin>>n;
    cout<<term(1,1,n);
    
}
