#include<iostream>
using namespace std;
int main(){
  int n,p;
  p=1;
  cout<<"Nhap n = ";
  cin>>n;
  for(int i = 1; i <= n; i++)
    {
    	p=p*(2*i);
	 }
    cout<<"Tich day so 2x4x6x...x2n la :"<<p<<endl;
return 0;
}
