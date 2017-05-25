#include <iostream>
using namespace std;
long long calc_fib(int z) {
    long long fibo[60];
    fibo[0]=0;
    fibo[1]=1;
        for(int i=2;i<60 ;i++)
        fibo[i]=(fibo[i-1]+fibo[i-2])%10;
       // cout<<fibo[30];
       return fibo[z];
}

int main() {
    long long n = 0,t;
    cin >>n;
    t=n+2;//use summationF(n)=F(n+2)-F(2)
    while(true){
        if(t<60)break;
        else t=t%60;
    }
   if((calc_fib(t)-1)>=0)
    cout <<(calc_fib(t)-1)<< '\n';
else
      cout <<10+(calc_fib(t)-1)<< '\n';
    return 0;
}
