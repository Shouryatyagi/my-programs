#include<bits/stdc++.h>
using namespace std;

int count_divisors(int no){
    int count = 0;
    for(int i=1; i<=no; i++){
        if(no%i==0) count++;
    }
    return count;
}


int main()
{
    int divisors,high; // high denotes the value upto which numbers there must be exactly divisors no of divisors 
    cin>>divisors>>high;
    for(int i=1; i<=high; i++){
        if(count_divisors(i)==divisors) cout<<i<<" ";
    }
}
