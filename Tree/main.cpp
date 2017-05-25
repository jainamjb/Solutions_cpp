#include <iostream>
using namespace std;

// C++ program to find height using parent array


// This function fills depth of i'th element in parent[]. The depth is
// filled in depth[i].


// This function returns height of binary tree represented by
// parent array
int findHeight(int parent[], int n)
{
     int count,maxcount=0;

	for (int i = 0; i < n; i++)
    {
		count=1;

       int temp=parent[parent[i]];
        while(temp!=-1)
        {
            count++;
            temp=parent[temp];

        }
        if(count>maxcount)
        maxcount=count;
    }
        return maxcount;
}




// Driver program to test above functions
int main()
{
	// int parent[] = {1, 5, 5, 2, 2, -1, 3};
	int m;
	cin>>m;
	int parent[m];
	for(int i=0;i<m;i++)
        cin>>parent[i];
int a=0;
	int n = sizeof(parent)/sizeof(parent[0]);
	cout << "Height is " << findHeight(parent, n);
	return 0;
}
