#include <iostream>
#include <string.h>


struct team{
    char name[100];
    long int goals,ga,points,gd;
};
int main() {
    string t1,t2;
long int n,m,i,j,s1,s2;
short flag=1;
cin>>n;
struct team teams[n],temp;
    for(i=0;i<n;i++){
    cin>>teams[i].name;
    teams[i].goals=0;
    teams[i].points=0;
    teams[i].ga=0;}
cin>>m;
while(m>0){
    cin >>t1>>t2;
    if(t1==t2){cout<<"Invalid input";
    flag=0;}
       if(flag){ cin>>s1>>s2;
    for(i=0;i<n;i++)
        {
        if(t1==teams[i].name)
            {
            teams[i].goals+=s1;
                    if(s1>s2)teams[i].points+=2;
                    if(s1==s2) teams[i].points+=1;
                    teams[i].ga+=s2;
            }
         if(t2==teams[i].name)
         {
            teams[i].goals+=s2;
                  if(s1<s2)teams[i].points+=2;
                 if(s1==s2) teams[i].points+=1;
                       teams[i].ga+=s1;
            }

        }
        m--;
}

for(i=n;i>0;i--)
                    teams[i].gd=teams[i].goals-teams[i].ga;


 for (i = 0; i < n; i++)
{

        for (j = i; j >= 0; j--)
        {
            if (teams[j+1].points < teams[j].points)
            {
                temp = teams[j+1];
                teams[j+1] = teams[j];
                teams[j] = temp;
            }
          else  if(teams[i].points==teams[i-1].points)
            {
                if(teams[i-1].gd>teams[i].gd){
                temp = teams[i];
                teams[i] = teams[i-1];
                teams[i-1] = temp;}

                if(teams[i].gd==teams[i-1].gd){

                           if(teams[i-1].goals>teams[i].goals){
                temp = teams[i];
                teams[i] = teams[i-1];
                teams[i-1] = temp;}

                           else if(teams[i].goals==teams[i-1].goals)
                           {if
                           (strcmp(teams[i].name,teams[i-1].name)>0){
                            temp = teams[i];
                            teams[i] = teams[i-1];
                            teams[i-1] = temp;}}
                }}
else break;
        }
}
}

  if (flag) { for(i=n-1;i>=0;i--){
            //if(teams[i].points!=teams[i-1].points){
              //  cout<<teams[i].name<<endl;}
 cout<<teams[i].name<<endl;
                }
  }
	return 0;

}
