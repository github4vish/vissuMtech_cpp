#include <cstdlib>
#include <iostream>
#include<conio.h>

using namespace std;

class Bank
{
      float dp,dp1,wd,wd1, min,amount;
      public: 
              Bank();
              Bank(float x,float y);
              Bank(Bank &b);
      };
  Bank ::Bank()
 {
       cout<<"\n ---------------DEFAULT CONSTRUCTOR--------------------";
       min=500;
      cout<<"\n Enter amount to open account:";
      cin>>dp1;
      if(dp1<min)
       cout<<"\n amount should be greater than 500";
      else 
      {
      dp=dp1;
      cout<<"\n deposition suceess";
      amount=dp+min;
      
      
      cout<<"\n Enter amount to withdrawl:";
      cin>>wd1;
      if(wd1>dp)
      cout<<"\n amount insufficient";
      else 
      { wd=wd1;
           amount=dp-wd;
      cout<<"\n balance is "<<amount;         
      }
      }
  }
   
 Bank ::Bank(float x,float y)
 {   
      cout<<"\n ---------------PARAMETRERIZED CONSTRUCTOR--------------------";
      dp1=x;
      if(dp1<min)
       cout<<"\n amount should be greater than 500 \n";
      else 
      {
      cout<<"\n deposition suceess";
      dp=dp1;
      amount=dp+min;
      
      wd1=y;
      if(wd1>dp)
      cout<<"\n amount insufficient";
      else 
      { wd=wd1;
            amount=dp-wd;
      cout<<"\n balance is "<<amount;         
      }       
     } 
  }
 Bank ::Bank( Bank &c)
 {
      cout<<"\n ---------------COPY CONSTRUCTOR--------------------";
      if(c.dp1<c.min)
       cout<<"\n amount should be greater than 500";
      else 
      {
      c.dp=c.dp1;
      c.amount=c.dp+c.min;
      
      
     
      if(c.wd1>c.dp)
      cout<<"\n amount insufficient";
      else 
      { c.wd=c.wd1;
           c.amount=c.dp-c.wd;
      cout<<"\n balance is "<<c.amount;   }       
     }        
  }
      

//int main(int argc, char *argv[])
//{
//    Bank b;
//    Bank b1(550,50);
//    Bank b2=b;
//    getch();
//    
//}
