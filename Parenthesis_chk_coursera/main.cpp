#include <iostream>
#include<string.h>

using namespace std;

    char s[100000][2];
    long top=-1,i=0;
void push(char a,int i);
char peek();
int main()
{
    string a;
    cin>>a;
    bool m=true;
   // int u=0,v=0,w=0,p;
    long l,p;
    l=a.length();

    for(i=0;i<l;i++){
        if(a[i]=='(')
            {push(a[i],i);}
        if(a[i]=='[')
            {push(a[i],i);}
        if(a[i]=='{')
            {push(a[i],i);}
        else if(a[i]==')' && peek()=='('){
            top--;
        }
        else if(a[i]==']' && peek()=='['){
            top--;
        }
        else if(a[i]=='}' && peek()=='{'){
            top--;
        }
        else if(a[i]==')' || a[i]==']' || a[i]=='}' && top==-1 ){
            p=i;
            m=false;
            //if(a[i]==')')u--;if(a[i]==']')u--;if(a[i]==']');
            break;
        }
        else if(a[i]==')' || a[i]==']' || a[i]=='}' && top!=-1 ){
            p=i;
            m=false;

            break;
        }

    }
    if(m==false)
        cout<<++p;

    if(top==-1 && m==true)
        cout<<"Success";
        else if(top!= -1 && m==true){
int x=s[top][1];
        cout<<x;
          /*  int j;
    char q=s[top];

    for( j=0;j<l;j++){
        if(q==a[j])
            {
                 if(q=='(')
                 {
                if(u==0)
                {cout<<++j;break;}
                else u--;
                }
                 if(q=='[')
                  {
                   if(v==0)
                    {cout<<++j;break;}
                    else v--;
                  }
                  {
                 if(q=='{'){
                  if(w==0)
                  {cout<<++j;break;}
                 else w--;
                }
                 }
            }
        }*/
    }
    return 0;
}
void push(char a,int j)
{
        top++;
       // cout<<j<<endl;
       s[top][1] = ++j;
       s[top][0]=a;
}
char peek()
{
return s[top][0];
}
