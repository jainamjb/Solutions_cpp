#include<iostream>
#include<stdio.h>
using namespace std;
long Sum(long a[],long b[],long n)
{
long sum=0;
for(long i=0;i<n;i++)
{sum+=a[i]*b[i];}
return sum;

}

int main()
{
long n, k , a[100000], b[100000],a1[100000], a2[100000] ;
long sum=0;
short flag=1;
do{
       cin>>n;
       cin>>k;
    if (n<1||n>10E5||k<0||k>10E9)
      flag=0;
    }while(flag==0);
for(long i=0;i<n;i++)
{
cin>>a[i];
if(a[i]<-10E5||a[i]>10E5) i--;
}
cout<<endl;
for(long i=0;i<n;i++)
{
cin>>b[i];
if(b[i]<-10E5||b[i]>10E5) i--;

}
sum=Sum(a,b,n);
for(long i=0;i<n;i++)
{
a1[i]=a[i];
a2[i]=a[i];
}

for(long i=0;i<n;i++)
{
a1[i]+=2*k;
if(sum>=Sum(a1,b,n))
sum=Sum(a1,b,n);
a2[i]-=2*k;
if(sum>=Sum(a2,b,n))
sum=Sum(a2,b,n);
}



cout<<endl<<sum;

return 0;
}
