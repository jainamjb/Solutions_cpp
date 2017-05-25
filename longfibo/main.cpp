#include <iostream>
using namespace std;
long long calc_fib( int n,int z) {
    bool flag=true;
    long long fibo[n];
  //  long long x[n];
    fibo[0]=1;
    fibo[1]=1;
    long count=2;
  //  x[0]=fibo[0]%10;
    //x[1]=fibo[1]%10;
    if(n>2){
        for(int i=2;i<n && flag ==true;i++){
            fibo[i]=(fibo[i-1]+fibo[i-2])%10;
        //    x[i]=fibo[i]%10;

          /*     cout<<fibo[i] << " " << x[i]<<endl;
            if(x[i]==1 && x[i-1]==0)
            {
                count--;
                  flag=false;
            }
            count++;
        }
        cout<<fibo[n];
        }*/}}
    cout<<count<<endl;

    return fibo[z-1];
}

int main() {
    long long n = 0;
    long long t;

    cin >> n;
    t=n;

    while(true){
        if(t<60)break;
        else t=n%60;
    }

    cout <<calc_fib(n,t)<< '\n';
    return 0;
}




