#include <bits/stdc++.h>
using namespace std;

void partition(long a[], long l, long r, long &i, long &j)
{
    i = l-1, j = r;
    long p = l-1, q = r;
    long v = a[r];

    while (true)
    {

        while (a[++i] < v);

        while (v < a[--j])
            if (j == l)
                break;
        if (i >= j) break;

        swap(a[i], a[j]);

        if (a[i] == v)
        {
            p++;
            swap(a[p], a[i]);
        }
        if (a[j] == v)
        {
            q--;
            swap(a[j], a[q]);
        }
    }

    swap(a[i], a[r]);

    j = i-1;
    for (long k = l; k < p; k++, j--)
        swap(a[k], a[j]);

    i = i+1;
    for (long k = r-1; k > q; k--, i++)
        swap(a[i], a[k]);
}

// 3-way partition based quick sort
void quicksort(long a[], long l, long r)
{
    if (r <= l) return;

    long i, j;
    partition(a, l, r, i, j);
    quicksort(a, l, j);
    quicksort(a, i, r);
}

int main()
{
    long n;
    cin>>n;
    long a[n];
    for(long i=0;i<n;i++)
        cin>>a[i];
    quicksort(a, 0, n-1);
    for(long i=0;i<n;i++)
        cout <<a[i]<<" ";
    return 0;
}
