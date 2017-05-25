#include <iostream>

int get_change(int m) {
  int count=0;
  if(m>10){
  while((m) >=10 ){
    count++;
    m=m-10;
  }
  }
  if (m>=5 && m <10){
    count++;
    m=m-5;
  }
  if(m>0 && m < 5){
     while((m) >0 ){
    count++;
    m--;
  }}
  return count;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}

