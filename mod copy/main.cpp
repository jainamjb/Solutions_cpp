#include <iostream>

using namespace std;

 long long pi(long long m){
long long result=2;
for(long long fn2=1,fn1=2%m,fn=3%m;fn!=1 || fn !=1;fn2=fn1,fn1=fn,fn=(fn1+fn2)%m)
    result++;
    return result;
}

long long get_fibo(long long n,long long m){
long long pl=pi(m);
cout<<pl<<endl;
int pr=n%pl;
long long *sum=new long long [pr];
sum[0]=0;sum[1]=1;
for(int i=2;i<=pr;i++)
    sum[i]=sum[i-1]+sum[i-2];
return sum[pr]%m;
}


int main()
{
    long long n,m;
    cin>>n>>m;
    cout << get_fibo(n,m) << endl;
    return 0;
}
