
#include <iostream>
#include <math.h>
#define MAX_SIZE 20
#define TOP -1
using namespace std;

struct stk{
double stack[MAX_SIZE];
int top=TOP;//=-1;
};

int full(stk *s){
if(s->top==MAX_SIZE-1)return 1;
else return 0;
}

int empty(stk *s){
if(s->top==-1)return 1;
else return 0;
}

void push (stk *s,double value){
if(full(s)==0)
{
(s->top)++;
s->stack[s->top]=value;
}
else cout<<"stack full.\n";
}

double pop (stk *s){
if(empty(s)==0)
{
 double val=s->stack[s->top];
(s->top)--;
return val;
}
else if(empty(s)==1) {cout<<"stack empty.cannot pop.\n";return 0;}
}

int isDigit(char c){
if((c-'0')>=0 && (c-'0')<=9)
    return 1;
else return 0;
}

double oper(char symb,double i,double j){
switch(symb){
case '+': return i+j;break;
case '-': return i-j;break;
case '*': return i*j;break;
case '/': return i/j;break;
case '^': return pow(i,j);break;
default: cout<<"INVALID OPERATOR...\n";break;
            return 0;
}
}

int main()
{
  int i=0;
  double val1,val2,val;
  struct stk stack1;
  struct stk *s=&stack1;
  string conv;
  cout<<"Enter any conv in postfix form...\n";
  cin>>conv;
  while(conv[i]!='\0'){
    if((conv[i]-'0')>=0 && (conv[i]-'0')<=9){
        push(s,(double)(conv[i]-'0'));}
        else{
            val2=pop(s);
            val1=pop(s);
            val=oper(conv[i],val1,val2);
            push(s,val);
        }
      i++;
    }

  cout<<pop(s);
    return 0;
}
