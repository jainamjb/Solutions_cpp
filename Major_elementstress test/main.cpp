#include <iostream>
using namespace std;
int candidate_element( long array[], long N )
{
    int count = 1 ;
    int curr_candidate = 0 ;
    for( int i = 1 ; i < N ; ++i )
    {
        if( array[i] == array[curr_candidate] ) ++count ;
        else --count ;
        if( count == 0 )
        {
            curr_candidate = i ;
            count = 1 ;
        }
    }
    return array[curr_candidate] ;
}
bool is_majority_element( long *array, long N, long candidate )
{
  int cnt = 0 ;
  for( int i = 0 ; i < N ; ++i )
      if( array[i] == candidate ) ++cnt ;
  return cnt > N/2 ;
}
int main()
{long n;
cin>>n;
long array[n];
for(long i =0;i<n;i++)
    cin>>array[n];

    int candidate = candidate_element( array, n) ;
    if( is_majority_element( array, n, candidate ) )
        cout <<1 ;
    else
        cout <<0;
}
