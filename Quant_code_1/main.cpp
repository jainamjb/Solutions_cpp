#include <iostream>
#include<vector>

using namespace std;

int main()
{
vector<long long> v;
long long int i,k,count=0,result=0;
bool flag=false;
for(int j=0;j<10000;j++)
{
    for(int k=1 ;k<j;k++)
    {
        if(j%k==0)
            count++;
            cout<<count<<endl;
        if(count >4)
            break;
    }
    if(count==3)
    {
        v.push_back(j);
        result++;
        //cout<<j<<endl;
    }
count=0;
}

cout<<result<<endl;
count=0;
/*for(long long i=100;i<1000000000;i++)
{

    for( k=1;k<v.size();k++){

        if(i%v[k]==0)
        flag=true;
        //cout<<result<<endl;
    }

    if(flag==true)
        {
    cout<<i<<endl;
    continue;
    }
    if(flag==false) {
        for(long long p=1;p<i;p++)
           {
               if(k%p==0)
              count++;
        if(count>3)
            break;
           }
    }
    if(count==3)
        {
            result++;
            cout<<result<<endl;
            }
    count=0;
    flag=false;
    cout<<result<<endl;
}
*/
cout<<result<<endl;
    return 0;
}
