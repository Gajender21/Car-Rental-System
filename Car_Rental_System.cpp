#include<iostream>
using namespace std;

class Signup{
  public:
  string name;
  int password;
   void takinginput(){cout<<"Enter Name= ";
   cin>>name;
   cout<<"Set Password= ";
   cin>>password;
   cout<<"SignUp Successful"<<endl;}

};
class Login:public Signup{
public:
string checkname;
int checkpassword;
   void takinginput()
   {cout<<"Enter Name= ";
   cin>>checkname;
   cout<<"Enter Password= ";
   cin>>checkpassword;}
   void check(string name,int password){
     if(checkname==name&&checkpassword==password){
       cout<<"Login Successful"<<endl;
     }else cout<<"ERROR= Name or Password is incorrect"<<endl;
   }
};
class Cars{
  public:
  int input;int km;
void choosecar(){
  cout<<"1. Hatchback"<<endl<<"2. Sedan"<<endl<<"3. Suv"<<endl;
cin>>input;
switch (input)
{
case 1:cout<<"****Hatchback****"<<endl<<"1. i20"<<endl<<"2. Baleno"<<endl<<"3. Wagonar"<<endl;
// CHOOSE FROM SUBCARS
cin>>input;
switch (input)
{
case 1: cout<<"Enter the Km you want to drive= ";
        cin>>km;
        cout<<"Cost= "<<km*9<<"Rs"<<endl;
  break;
case 2: cout<<"Enter the Km you want to drive= ";
        cin>>km;
        cout<<"Cost= "<<km*8<<"Rs"<<endl;
        break;
case 3: cout<<"Enter the Km you want to drive= ";
        cin>>km;
        cout<<"Cost= "<<km*7<<"Rs"<<endl;   
        break;

default:cout<<"ENTER A VALID INPUT";
  break;
}
  break;
case 2: cout<<"****Sedan****"<<endl<<"1. Verna"<<endl<<"2. Honda City"<<endl<<"3. Ciaz"<<endl;
cin>>input;
switch (input)
{
case 1: cout<<"Enter the Km you want to drive= ";
        cin>>km;
        cout<<"Cost= "<<km*9<<"Rs"<<endl;
  break;
case 2: cout<<"Enter the Km you want to drive= ";
        cin>>km;
        cout<<"Cost= "<<km*9<<"Rs"<<endl;
        break;
case 3:cout<<"Enter the Km you want to drive= ";
        cin>>km;
        cout<<"Cost= "<<km*8.5<<"Rs"<<endl;  
        break;      
default:cout<<"ENTER A VALID INPUT";
  break;
}
break;
case 3:cout<<"****Suv****"<<endl<<"1. Creta"<<endl<<"2. Honda WR-V"<<endl<<"3. S-Cross"<<endl;
cin>>input;
switch (input)
{
case 1:cout<<"Enter the Km you want to drive= ";
        cin>>km;
        cout<<"Cost= "<<km*10<<"Rs"<<endl;
  break;
case 2:cout<<"Enter the Km you want to drive= ";
        cin>>km;
        cout<<"Cost= "<<km*10<<"Rs"<<endl;
  break;
  case 3:cout<<"Enter the Km you want to drive= ";
        cin>>km;
        cout<<"Cost= "<<km*9.5<<"Rs"<<endl;
  break;
default:cout<<"ENTER A VALID INPUT";
  break;
}
break;
default:cout<<"ENTER A VALID INPUT";
  break;
}
}

};

int main(){
  int input;
 
 cout<<"1. Sign up"<<endl;
 cout<<"2. Login"<<endl;
 cin>>input;
Login l;
Signup s;
switch (input)
{
case 1:s.takinginput();
  break;
case 2:l.takinginput();
default:cout<<"Enter a valid input"<<endl;
  break;
}
 cout<<"1. Sign up"<<endl;
 cout<<"2. Login"<<endl;
 cin>>input;
 l.takinginput();
 l.check(s.name,s.password);
 cout<<"*****WELCOME TO CAR RENTALS*****"<<endl;
Cars c;
c.choosecar();
}