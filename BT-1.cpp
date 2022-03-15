#include <iostream.h>
using namespace std;
int main()
{
int i, n;
double S = 0;
cout<<"Nhap n: "; 
cin>>n;
i = 1;
while (i <= n)
{ 
  S = S + i ;
  i++; 
}
cout <<"Tong cac so nguyen tu 1 den " <<n<<" la"<<S<<endl;
return 0;
}
