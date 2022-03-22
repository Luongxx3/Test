#include<iostream>
using namespace std;
int main(){
int thu;
cout<<"Nhap thu:";
cin>>thu;
do{
  if(1>thu||thu>7){ 
     cout<<"Nhap lai thu:";
     cin>>thu;	
    }	
  }while(1>thu||thu>7);
  if(thu==1){
     cout<<"Sunday"<<endl; 
  }
  else if(thu==2){
     cout<<"Monday"<<endl;
  }
  else if(thu==3){
     cout<<"Tuesday"<<endl;
  }
  else if(thu==4){
     cout<<"Wednesday"<<endl;
  }
  else if(thu==5){
     cout<<"Thursday"<<endl;
  }
  else if(thu==6){
     cout<<"Friday"<<endl;
  }
  else if(thu==7){
     cout<<"Saturday"<<endl;
  }  
return 0;	
}
