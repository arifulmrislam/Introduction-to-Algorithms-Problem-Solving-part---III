#include<bits/stdc++.h>
using namespace std;
// 0,1,1,2,3,5,8,13,21 -> fib num
// 0,1,2,3,4,5,6, 7, 8 -> index
int fibonacci(int n){
    //base case
    if(n == 0) return 0;
    if(n == 1) return 1;

    //general case
    int num1 = fibonacci(n-1);
    int num2 = fibonacci(n-2);
    return num1+num2;
    //return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n;
    cin >> n;
    cout<<fibonacci(n)<<endl;
    return 0;
}