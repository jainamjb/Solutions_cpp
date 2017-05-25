#include <iostream>
#include<vector>
#include<math.h>
using namespace std;
vector <long long> v;
int main()
{
    long long n=1028,k=1031,elem=0,r=0,sum=0;
    long long x[534060];
    for (int i=1;i<=1028;i++)
    {
        if(1028%i==0)
        {
        v.push_back(i);
        elem++;
        }
    }
    for(int i=1;i<=v.size();i++){
        for(int j=1;j<=1032;j++){
            for (int k=1;k<=v[i];k++)
                {
                if(v[k]%k==0)
                {
                if(r>=534060)
                    break;
                x[r]=k;
                r++;
                elem++;
                }
                }
                if(r>=534060)
                    break;
        }
        if(r>=534060)
                    break;
    }
    ///cout<<elem<<endl;


    cout<<sum;
    //cout << "Hello world!" << endl;
    return 0;
}
