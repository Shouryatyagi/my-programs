#include<bits/stdc++.h>
using namespace std;

// bruteforce
// void power(double base, int expo){
//     double res = 1.0;
//     while(expo>0){
//         res*=base;
//         expo--;
//     }
//     while(expo<0){
//         res/=base;
//         expo++;
//     }
//     cout<<res;
// }

// recursive
double power(double base, int expo) {
    if (expo > 0)
        return (power(base, expo - 1) * base);
    else if (expo < 0)
        return (power(base, expo + 1) / base);
    else
        return 1;
}

int main()
{
    double base;
    int expo;
    cin>>base>>expo;
    // power(base, expo); //bf
    
    cout<<power(base, expo); // recursive
}
