#include <bits/stdc++.h>
using namespace std;

void get_sum_range(int a, int b){
    int ans = b*(b+1)/2 - a*(a+1)/2;
    cout<<ans;
}

int main()
{
    int a,b; // a=start, b=end
    cin>>a>>b;
    get_sum_range(a,b);
}
