//برنامه ای برای معکوس کردن ارقام یک عدد با استفاده از اشاره گرها بنویسید

#include <iostream>
//pouria azad
using namespace std;

int main(){
  
  int b=0;
  cin>>b;
  int *p=&b;
  int p2[100];
  int n=0;
  while((*p)>0){
  p2[n]=(*p)%10;
  *p=(*p)/10;  
  n++  ;
  }

  for(int i=0;i<n;i++)
  cout<<p2[i];

  return 0;
}
