// power using recursion
// #include<bits/stdc++.h>
// using namespace std;
// int func(int base, int power){
//     if(power == 0) return 1;
//     return base*func(base,power-1);
// }
// int main()
// {
//     int base,power;
//     cin>>base>>power;
//     cout<<func(base,power);
// }


// prime no using recursion
// #include<bits/stdc++.h>
// using namespace std;
// bool func(int no, int i=2){
//     if(no<=2) return (no==2)? true:false;
//     if(no%i == 0) return false;
//     if(i*i>no) return true;
//     return func(no, i+1);
// }
// int main()
// {
//     int a;
//     cin>>a;
//     cout<<func(a);
// }


// largest element in array using recursion
// #include<bits/stdc++.h>
// using namespace std;
// int func(int n, int arr[]){
//     if(n==1) return arr[0];
//     return max(arr[n-1],func(n-1,arr));
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++) cin>>arr[i];
//     cout<<func(n,arr);
// }


// Smallest element in array using recursion
// #include<bits/stdc++.h>
// using namespace std;
// int func(int n, int arr[]){
//     if(n==1) return arr[0];
//     return min(arr[n-1],func(n-1,arr));
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++) cin>>arr[i];
//     cout<<func(n,arr);
// }


// Reverse a number using recursion
// #include<bits/stdc++.h>
// using namespace std;
// void reverse(int n){
//     if(n<10){
//         cout<<n;
//         return;
//     }
//     else{
//         cout<<n%10;
//         reverse(n/10);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     reverse(n);
// }

