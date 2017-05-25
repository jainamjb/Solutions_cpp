#include <iostream>

using namespace std;
short check(long num)
{
    long i=2;
    while(i!=num)
    {
        if(num%i==0)break;
        else i++;
    }
    return i==num;
}
int main()
{
    long n;
    short flag=1;
    do{
    cin>>n;
    if(n<2||n>12E9){cout<<"invalid input, enter again\n";flag=0;}
    }while(flag==0);

   long sum=5,num=2;
  long  count=0;
   while(sum<=n)
   {
       if(check(sum)){count++;}
while(1)
      {
          if(check(num)&&num>=5){sum+=num;num++;break;}
          num++;
      }

   }

    cout<<count;
    return 0;
}
