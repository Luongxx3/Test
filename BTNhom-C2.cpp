#include<iostream>
using namespace std;
int main(){
 float sotien;
 cout<<"Nhap vao so  dien tieu thu :";
 cin>>sotien;
 do{
 	if(sotien<0){
 	cout<<"Nhap lai so dien >0 :";
 	cin>>sotien;
  }
 }while(sotien<0);
 if(sotien<=100)
 {
   cout<<"Tong tien la :"<<sotien*2000<<" nghin dong "<<endl;
 }
 else if(sotien<200)
 { 
   cout<<"Tong tien la :"<<sotien*2500<<" nghin dong "<<endl;
 }
 else if(sotien<300)
 { 
   cout<<"Tong tien la :"<<sotien*3000<<" nghin dong "<<endl;
 }
 else 
 {
   cout<<"Tong tien la :"<<sotien*5000<<" nghin dong "<<endl;
 }
return 0;
}
