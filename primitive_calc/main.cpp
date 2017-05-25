#include <iostream>
#include<list>
#include<vector>
using namespace std;
void primitive_calculator(int n,int dp[])
{
    int i;
     int arr[n+1];
    dp[1]=0;

    for (int i = 2; i <= n; i++)
    {
       dp[i]=1+dp[i-1];


    }
for (int i = n; i > 1; ) {
        arr[i]=i;
        if (arr[i - 1] == arr[i] - 1)
            i = i - 1;
        else if (i % 2 == 0 && (arr[i / 2] == arr[i] - 1))
            i = i / 2;
        else if (i % 3 == 0 && (arr[i / 3] == arr[i] - 1))
            i = i / 3;
    }
    arr[0]=1;
    cout<<dp[n]<<endl;
           for (int j=0;j<=dp[n];j++)
    cout <<arr[j]<" ";

}
int main()
{
    int number,x;
    cin>>number;
    x=primitive_calculator(number);
      int q[x];
    q[x-1]=number;

    for (int i = (x-1); i > 0; i--)
    {
       q[i-1]=q[i]-1;
       if(q[i]%2==0){
        if(q[i-1]<(number)/2))
            q[i-1]=q[i-1];
        else q[i-1]=(number/2);
       }
       if(q[i]%3==0){
        if(q[i-1]<((number)/3)){
            q[i-1]=q[i-1];
        }
        else q[i-1]=(number/3);
       }
       number=q[i-1];
    }
    cout<<x<<endl;
    for(int i =x-1 ;i>=0;i--)
        cout<<q[i]<<" ";
    return 0;
}
