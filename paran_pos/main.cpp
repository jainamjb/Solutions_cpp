#include <iostream>
#include<string.h>
using namespace std;
long top=-1,i=0;
string s,a;
int l,u=0,v=0,w=0;
void push(char a)
{
        top++;
       s[top] = a;
}
char peek()
{
return s[top];
}
void exit(){
if(top!=-1)
cout<<++i;
else
cout<<"Success";
}

int check(){
for(i=0;i<l;i++)
{
if(a[i]=='['||a[i]=='{'||a[i]=='(')
{
push(a[i]);
}
else if(a[i]==')')
    if (peek()=='(')
{
        if(top==-1)
        {cout<<++i;
        break;}
        else
        {top--;
        u++;
        }

}   else return ++i;

else if(a[i]==']')
    if (peek()=='[')
{
        if(top==-1)
        {cout<<++i;
        break;}
        {top--;
        v++;
        }
}     else return ++i;
else if(a[i]=='}')
    if (peek()=='{')
{
        if(top==-1)
        {cout<<++i;
        break;}
         {top--;
        w++;
        }
}   else return ++i;
}
}



int main()
{
bool r=true;
cin>>a;

l=a.length();
