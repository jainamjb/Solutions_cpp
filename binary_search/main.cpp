#include <iostream>
#include<math.h>
using namespace std;

long binary_search(long a[],long l,long r, long x) {
    if(r<l)
    return x;
  long mid = (l+(r-l)/2);

    if(x==a[mid])
        {
            a[mid]=-1;
            return -1;
        }
  else if(x<a[mid])
  return binary_search(a,0,mid-1,x);
  else if (x>a[mid])
    return binary_search(a,mid+1,r,x);
    else return -1;
}

void Q_sort(long arr[], long left, long right) {
      long i = left, j = right;
      long tmp;
      long pivot = arr[(left + right) / 2];

      /* partition */
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      }
      if (left < j)
            Q_sort(arr, left, j);
      if (i < right)
            Q_sort(arr, i, right);
}
int main() {
  long n,o,s=0;
  bool q=false;
  cin>> n;
  long a[n];
  for (long i = 0; i < n; i++) {
    cin >> a[i];
  }

  long m;
  cin >> m;
  long b[m];
  for (long i = 0; i < m; ++i) {
    cin >> b[i];
  }
  Q_sort(a,0,n-1);
  Q_sort(b,0,m-1);
  if(m>n)
    s=m;
  else
    s=n;
    long c[s];

  if(m>n){
  for (long i = 0; i<m; i++) {
        c[i]=binary_search(a,0,n-1,b[i]);
  }
    }
    else{
          for (long i = 0; i<n; i++) {
        c[i]=binary_search(b,0,n-1,a[i]);
  }

    }
    for (long i = 0; i<s; i++) {
       if(c[i]!=-1)
        cout<<c[i]<<" ";
  }
}
