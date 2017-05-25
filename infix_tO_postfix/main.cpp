#include <iostream>
#define MAX_SIZE 20
#define TOP -1
using namespace std;

struct stk{
char stack[MAX_SIZE];
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

void push (stk *s,char value){
if(full(s)==0)
{
(s->top)++;
s->stack[s->top]=value;
}
else cout<<"stack full.\n";
}

char pop (stk *s){
if(empty(s)==0)
{
char x=s->stack[s->top];
s->stack[s->top]=0;
(s->top)--;
return x;
}
else if(empty(s)==1) {cout<<"stack empty.cannot pop.\n";return '0';}
}

int isOperand(char c){
if(c == '+' || c=='-' || c=='*' || c=='/' || c=='^')
    return 1;
else return 0;
}

int prec(char c1,char c2){
if(c1==c2)return 1;
if((c1=='*' || c1=='/') && (c2=='+' || c2=='-') ) return 1;
if(c1=='^' && (c2=='+' || c2=='-' ||c2=='*' || c2=='/')) return 1;
else return 0;
}

int main()
{
  int i=0,j=0;
  struct stk stack1;
  struct stk *s=&stack1;
  string infix;
  char prefix[50];
  cout<<"Enter an infix expression...\n";
  cin>>infix;
  while(infix[i]!='\0'){
    if(!isOperand(infix[i])){
        prefix[j]=infix[i];
        j++;
    }
   else{
    while(!empty(s) && prec(stack1.stack[stack1.top],infix[i]) ){
     char ch=pop(s);
     prefix[j]=ch;
     j++;
     }
    push(s,infix[i]);}
    i++;
  }
  while(!empty(s)){
    char z=pop(s);
    prefix[j]=z;
    j++;
  }
//  prefix[j]='\0';
    cout<<"its post fix is:";
  for(i=0;i<j;i++)
    cout<<prefix[i];
    return 0;
}
