#include <iostream>
using namespace std;
long long calc_fib(int z) {
    long long fibo[624447];
    fibo[0]=0;
    fibo[1]=1;
        for(int i=2;i<624447 ;i++)
        fibo[i]=(fibo[i-1]+fibo[i-2])%776253168;
       return fibo[z];
}

int main() {
    long long n = 0,t;
    cin >> n;
    t=n;
    while(true){
        if(t<776253168)break;
        else t=t%776253168;
    }
    cout <<calc_fib(t)<< '\n';
    return 0;
}
