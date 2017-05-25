#include <iostream>

using namespace std;

int parent (int i){
return ((i-1)/2);
}
int l_child(int i){
return 2*i;
}


int main()
{
    int n,h=0,i,count=0;
    bool flag=false;
    cin>>n;
    int heap[n],k=0,heap1[n],result[n][2];
    for(int l=0;l<n;l++)
        {
            cin>>heap[l];
            heap1[l]=heap[l];
        }
    for(int l=0;l<n;l++)
        if(l_child(l)<=n)
            h++;

    for(int j=0;j<h-1;j++){
        for(i=n-1;i>0;flag=false){
                if(parent(i)<0)
                break;
            if(heap1[parent(i)]>heap1[i]){
                if(heap1[i]<heap1[i-1]){
                std::swap(heap1[parent(i)],heap1[i]);
                result[k][0]=parent(i);
                result[k][1]=i;
                i=parent(i);
                k++;
                flag=true;
                count++;
                }
                else {
                        std::swap(heap1[parent(i)],heap1[i-1]);
                        result[k][0]=parent(i);
                        result[k][1]=i-1;
                        k++;
                        i=parent(i);
                        flag=true;

                        count++;
                }
            }
if(flag==false) i--;

        }
    }
    cout<<count<<endl;
    for(int i=0;i<k;i++){
        cout<<result[i][0]<<" "<<result[i][1]<<endl;
    }
      /*  for(int l=0;l<n;l++)
        cout<<heap[l]<<" ";
        cout<<endl;
        if(heap[l_child(parent(i))]>heap[r_child(parent(i))])
                    std::swap(heap[parent(i)],heap[r_child(parent(i))]);
                    else if(heap[l_child(parent(i))]<=heap[r_child(parent(i))])
                    std::swap(heap[parent(i)],heap[r_child(parent(i))]);*/
    return 0;
}
