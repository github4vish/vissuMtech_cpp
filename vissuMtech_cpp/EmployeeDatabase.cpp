#include <cstdlib>
#include <iostream>
#include<conio.h>

using namespace std;

class Employee
{
      int eno,basic,da,hra,it,gross,net,d,h,i;
      public: 
              Employee();
              Employee(int a,int x,int y,int z,int b);
              Employee(Employee &b);
      };
  Employee ::Employee()
 {

       cout<<"\n ---------------DEFAULT CONSTRUCTOR--------------------";
 
      cout<<"\n Enter Employee number: ";
      cin>>eno;
      
       cout<<"\n Enter basic,da,hra,it: ";
       cin>>basic>>da>>hra>>it;

      d=basic*da/100;
            h=basic*hra/100;
                  i=basic*it/100;
       gross=basic+d+d;
       net=gross-i;
      cout<<"\n Gross Salary: "<<gross;


      cout<<"\n Net Salary: "<<net;
      
  }
   
 Employee ::Employee(int a,int x,int y,int z,int b)
 {   
     eno=a;basic=x;da=y;hra=z;it=b;
      cout<<"\n ---------------PARAMETRERIZED CONSTRUCTOR--------------------";
      d=basic*da/100;
            h=basic*hra/100;
                  i=basic*it/100;
       gross=basic+h+d;
       net=gross-i;
       cout<<"Employee id: "<<eno;
      cout<<"\n Gross Salary: "<<gross;


      cout<<"\n Net Salary: "<<net; 
  }
 Employee ::Employee( Employee &c)
 {
      cout<<"\n ---------------COPY CONSTRUCTOR--------------------";
      c.d=basic*da/100;
            c.h=basic*hra/100;
                  c.i=c.basic*c.it/100;
       c.gross=c.basic+c.h+c.d;
       net=gross-i;
              cout<<"Employee id: "<<c.eno;
      cout<<"\n Gross Salary: "<<c.gross;


      cout<<"\n Net Salary: "<<c.net;        
  }
      

int main(int argc, char *argv[])
{
    Employee b;
    Employee b1(550,5000,2,3,6);
    Employee b2=b;
    getch();
    
}


