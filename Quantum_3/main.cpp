#include <iostream>

using namespace std;

int main()
{
long long n=5965585325539,sum=0;
long long x;
x=n%1000000007;
cout<<x<<endl;
for(long i=1;i<=x;i++){
    sum=(sum+(x%i));
    //sum=sum%100000;
}
cout<<sum;
    return 0;
}
