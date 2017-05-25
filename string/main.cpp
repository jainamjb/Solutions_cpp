#include <iostream>
using namespace std;

int main()
{
    int x=0,n=1,i,count=1;
cin>>x;
i=(n*(n+1))/2;
while(i <x){
	count++;
	n++;
	i+=(n*(n+1))/2;
}
cout<<count<<endl;
cout<<x-i;
    return 0;
}
