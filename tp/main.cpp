#include <iostream>
#include <iomanip>


int main()
{   int x,y,z;
    long int n,m,i=28,j,count=1,count1=1,temp,a=6;
    cin>>n;
    m=n;    //get input
    for(x=0;x<n;x++){
    for(z=(m-1);z>0;z--){
    cout<<" ";}
    for(y=count1;y>0;y--){

    if(count==1)j=6;
    if(count==2)j=28;
    if(count>2){

        j=16+2*i-a;
        temp=j;
        a=i;
        i=temp;}

    cout << setfill('0') << setw(5) << j;
    count++;
}
m--;
count1++;
    cout<<"\n";}
    return 0;
}
