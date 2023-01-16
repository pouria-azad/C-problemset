//برنامه ای بنویسید که تعدادی عدد را از ورودی خوانده و آنها را در آرایه ای قرار دهد و سپس با استفاده از الگوریتم حبابی بصورت صعودی مرتب و چاپ کند


#include <iostream>
//pouria azad
using namespace std;

int main(){
  
  int a[10], n=5;
    
  for(int i=0;i<n;i++)
    cin>>a[i];  
  
  
  for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
      if(a[j]<a[i]) swap(a[j],a[i]);
  
  for(int i=0;i<n;i++){
    cout<<a[i];
            }
  
  
  return 0;
}
