#include <iostream>

using namespace  std;
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
void Q_3way(long a[],long l,long r){
long i = l-1, j = r, p = l-1, q = r; Item v = a[r];
  if (r <= l) return;
  for (;;)
    {
       while (a[++i] < v) ;
       while (v < a[--j]) if (j == l) break;
       if (i >= j) break;
       swap(a[i], a[j]);
       if (a[i] == v) { p++; swap(a[p], a[i]); }
       if (v == a[j]) { q--; swap(a[j], a[q]); }
    }
  swap(a[i], a[r]); j = i-1; i = i+1;
  for (k = l; k < p; k++, j--) swap(a[k], a[j]);
  for (k = r-1; k > q; k--, i++) swap(a[i], a[k]);
    Q_sort(a,l,p);
    Q_sort(a,q,r);
    }
int main()
{
    long n;
    cin>>n;
    long a[n];
    for(long i=0;i<n;i++)
        cin>>a[i];
    Q_3way(a,0,n-1);
    for(long i=0;i<n;i++)
        cout <<a[i]<<endl;
    return 0;
}
