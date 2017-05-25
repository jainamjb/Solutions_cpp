#include <cstdio>
#include <iostream>
using namespace std;
int main() {
int Li,Ti,N,K,Tlb=0,i,j,k,index;
//cout<<"enter the number of preliminary contests.\nthe maximum number of important contests Lena can lose.\n";
cin>>N>>k;
//cout<<"enter the contest's luck balance\n and the contest's importance rating\n";
int L[N],T[N];
for(i=0;i<N;i++)
cin>>L[i]>>T[i];
i=1;
while(i<=N){
int temp;
temp=L[0];
if(temp>L[i]){
temp=L[i];
index=i;
}
i++;
}
for(i=0;i<N;i++){
Tlb=Tlb+L[i];
}
cout<<(Tlb-(2*L[index]));
cin>>i;
   return 0;}
