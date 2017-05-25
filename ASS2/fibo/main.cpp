#include <iostream>
using namespace std;
unsigned long long calc_fib(int n) {
   unsigned long long fibo[n];
    fibo[0]=0;
    fibo[1]=1;
    if(n>=2){
        for(int i=2;i<=n;i++){
            fibo[i]=fibo[i-1]+fibo[i-2];
        }
    }
    return fibo[n];
}

int main() {
    int n = 0;
    cin >> n;
    cout << calc_fib(n) << '\n';
    return 0;
}
