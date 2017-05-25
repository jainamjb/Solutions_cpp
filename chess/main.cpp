#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{   int x,a,i=0,j,k=0,l=0,y=0,l1[2],m1[2],l2[2],m2[2],count1=0,count2=0;
    //int    l1[]={0,0},    m1[]={0,0},    l2[]={0,0},    m2[]={0,0};
    char chess[8][8];
    string fen1,fen2;
    cin>>fen1;
    for(a=0;a<8;a++){
    while(fen1[i] != '/'){
    //cout<<(fen[i]);
                    if((int)fen1[i]>=49 && (int)fen1[i]<=57 )
                    {
                   if((int)fen1[i]==49) x=1; if((int)fen1[i]==50) x=2; if((int)fen1[i]==51) x=3; if((int)fen1[i]==52) x=4; if((int)fen1[i]==53) x=5; if((int)fen1[i]==54) x=6; if((int)fen1[i]==55) x=7;if((int)fen1[i]==56) x=8;
                    while(x){
                    //int y=x;
                    chess[a][y]='0';
                    y++;
                    x--;}}
                   // if(x==0)break;}
            if(((int)fen1[i]>=65 && (int)fen1[i]<=90) || ((int)fen1[i]>=97 && (int)fen1[i]<=122) )
            {
            if(fen1[i]=='b'){
                    //j=0;
                    chess[a][y]='b';
                    //l1[j]=a;m1[j]=y;
                    y++;count1++;}
            if(fen1[i]=='B'){
                    // j=0;
                    chess[a][y]='B';
                    //l2[j]=a;m2[j]=y;
                    y++;count2++;}
            else if(fen1[i]!='B'&& fen1[i]!='b') {chess[a][y]='#';
            y++;}
            }
        i++;
        if(fen1[i]=='/') y=0;
    }
          if(fen1[i]=='/') i++;
    }
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(chess[i][j]=='b')
            {l1[k]=i;m1[k]=j;k++;}
                 if(chess[i][j]=='B')
            {l2[l]=i;m2[l]=j;l++;}
        }
       // k=0;
    }
    for(int k=0;k<2;k++){
    int c1=count1,c2=count2;
    //    cout<<l1[k]<<m1[k]<<endl;     cout<<l2[k]<<m2[k]<<endl;
    while((l1[k]--)>=0 && (m1[k]--)>=0 && c1>0){
    if(l1[k]==-1 || m1[k]==-1)break;
    if(chess[l1[k]][m1[k]]=='0')
    {cout<<l1[k];
    cout<<m1[k]<<endl;}

    }
    while((l2[k]--)>=0 && (m2[k]--)>=0 && c2>0){
    if(l2[k]==-1 || m2[k]==-1)break;
    if(chess[l2[k]][m2[k]]=='0')
    {cout<<l2[k];
    cout<<m2[k]<<endl;}

    }
    c1--;    c2--;
    }

     for(int k=0;k<2;k++){
    int c1=count1,c2=count2;
    //    cout<<l1[k]<<m1[k]<<endl;     cout<<l2[k]<<m2[k]<<endl;
    while((l1[k]--)>=0 && (m1[k]++)<=7 && c1>0){
    if(l1[k]==-1 || m1[k]==8)break;
    if(chess[l1[k]][m1[k]]=='0')
    {cout<<l1[k];
    cout<<m1[k]<<endl;}

    }
    while((l2[k]--)>=0 && (m2[k]++)<=7 && c2>0){
    if(l2[k]==-1 || m2[k]==8)break;
    if(chess[l2[k]][m2[k]]=='0')
    {cout<<l2[k];
    cout<<m2[k]<<endl;}

    }
    c1--;    c2--;
    }

     for(int k=0;k<2;k++){
       int c1=count1,c2=count2;
    //    cout<<l1[k]<<m1[k]<<endl;     cout<<l2[k]<<m2[k]<<endl;
    while((l1[k]++)<=7 && (m1[k]--)>=0 && c1>0){
    if(l1[k]==8 || m1[k]==-1)break;
    if(chess[l1[k]][m1[k]]=='0')
    {cout<<l1[k];
    cout<<m1[k]<<endl;}

    }
    while((l2[k]++)<=7 && (m2[k]--)>=0 && c2>0){
    if(l2[k]==8 || m2[k]==-1)break;
    if(chess[l2[k]][m2[k]]=='0')
    {cout<<l2[k];
    cout<<m2[k]<<endl;}

    }
    c1--;    c2--;
    }

     for(int k=0;k<2;k++){
      int c1=count1,c2=count2;
    //    cout<<l1[k]<<m1[k]<<endl;     cout<<l2[k]<<m2[k]<<endl;
    while((l1[k]++)<=7 && (m1[k]++)<=7 && c1>0){
    if(l1[k]==8 || m1[k]==8)break;
    if(chess[l1[k]][m1[k]]=='0')
    {cout<<l1[k];
    cout<<m1[k]<<endl;}

    }
    while((l2[k]++)<=7 && (m2[k]++)<=7 && c2>0){
    if(l2[k]==8 || m2[k]==8)break;
    if(chess[l2[k]][m2[k]]=='0')
    {cout<<l2[k];
    cout<<m2[k]<<endl;}

    }
    c1--;    c2--;
    }

    for(int q=0;q<8;q++)
    {
        for(int r=0;r<8;r++)
            cout<<chess[q][r];
        cout<<endl;
    }

    return 0;
}
