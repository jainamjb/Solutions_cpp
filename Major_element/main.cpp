#include <iostream>

using namespace std;

long Major_element(long m[],long l,long r, long x) {
    if(r<l)
    return -1;
long mid = (l+(r-l)/2);
    if(sizeof(m)/sizeof(long)==1 && x==m[l] && x==m[r])
        return 1;
        else if(sizeof(m)/sizeof(long)==2 && (m[l]==m[r]) )
            return 1;
            else if(sizeof(m)/sizeof(long)==2 && (m[l]!=m[r]))
                    return 0;
    else return (Major_element(m,0,mid,x) && Major_element(m,mid+1,r,x));

}

int main()
{
    long n;
    cin>>n;
    long m[n],c[n];
    for(long j=0;j<n;j++)
        cin>>m[j];
        for(long j=0;j<n;j++){
            if(Major_element(m,0,n-1,m[j])== 1)
                cout<<1;
                else cout<<0;
        }
    return 0;
}
