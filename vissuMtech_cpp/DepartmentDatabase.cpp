#include <cstdlib>
#include <iostream>
#include<conio.h>

using namespace std;

class Department
{
      string dp,dp1,wd1;
      int wd;
      public: 
              Department();
              Department(string a,string b,int c,string d);
              Department(Department &b);
      };
  Department ::Department()
 {
       cout<<"\n ---------------DEFAULT CONSTRUCTOR--------------------";
     
      cout<<"\n Enter names of Department,HOD, number of staff, code:";
      cin>>dp>>dp1>>wd>>wd1;

       cout<<"\n   Department Name: "<<dp; 
       cout<<"\n   Department HOD: "<<dp1;

      cout<<"\n Department number of staff: "<<wd;
      
      
      cout<<"\n Department code: "<<wd1;
      
      
      
      
  }
   
 Department ::Department(string a,string b,int c,string d)
 {   
       cout<<"\n ---------------PARAMETERIZED CONSTRUCTOR--------------------";
     
      dp=a;dp1=b;wd=c;wd1=d;

      cout<<"\n   Department Name: "<<dp; 
       cout<<"\n   Department HOD: "<<dp1;

      cout<<"\n Department number of staff: "<<wd;
      
      
      cout<<"\n Department code: "<<wd1;
  }
 Department ::Department( Department &c)
 {
      cout<<"\n ---------------COPY CONSTRUCTOR--------------------";
       

      cout<<"\n   Department Name: "<<c.dp; 
       cout<<"\n   Department HOD: "<<c.dp1;

      cout<<"\n Department number of staff: "<<c.wd;
      
      
      cout<<"\n Department code: "<<c.wd1;        
  }
      

//int main(int argc, char *argv[])
//{
//    Department b;
//    Department b1("ELECTRICAL & ELECTRONIC ENGG ","d.baba",15,"EEE");
//    Department b2=b;
//    getch();
//
//    
//}
