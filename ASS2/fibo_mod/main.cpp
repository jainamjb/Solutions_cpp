#include <iostream>
using namespace std;
unsigned long long calc_fib(unsigned long long z,unsigned long long y) {
    bool flag=true;
    unsigned long long *fibo= new unsigned long long [y];
    unsigned long long count=1,t;
    fibo[0]=0;
    fibo[1]=1;
            for(long long int i=2; i<149997 && flag ==true ;i++){
              //  cout<<y;
            fibo[i]=(fibo[i-1]+fibo[i-2])%y;
            if(fibo[i]==1 && fibo[i-1]==0)
            {
                count--;
                  flag=false;
            }
            count++;

            }
cout<<count<<endl;
            t=z;

        if(t>count)
        t=t%count;

       return fibo[t];
}

int main() {
    unsigned long long n,m;
    cin>>n;
    cin>>m;
    cout <<calc_fib(n,m)<< '\n';
    return 0;
}
