#include <iostream>
using namespace std;
long long calc_fib(int z) {
    long long fibo[60];
    fibo[0]=0;
    fibo[1]=1;
        for(int i=2;i<60 ;i++)
        fibo[i]=(fibo[i-1]+fibo[i-2])%10;
       return fibo[z];
}

int main() {
    long long n = 0,t;
    cin >> n;
    t=n;
    while(true){
        if(t<60)break;
        else t=t%60;
    }
    cout <<calc_fib(t)<< '\n';
    return 0;
}
