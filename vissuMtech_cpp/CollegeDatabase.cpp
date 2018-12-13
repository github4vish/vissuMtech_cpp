#include <cstdlib>
#include <iostream>
#include<conio.h>

using namespace std;

class College
{
      string dp,dp1,wd,wd1;
      public: 
              College();
              College(string a,string b,string c,string d);
              College(College &b);
      };
  College ::College()
 {
       cout<<"\n ---------------DEFAULT CONSTRUCTOR--------------------";
     
      cout<<"\n Enter names of college,principle,director, college code:";
      cin>>dp>>dp1>>wd>>wd1;

       cout<<"\n   college Name: "<<dp; 
       cout<<"\n   college director: "<<dp1;

      cout<<"\n college principle: "<<wd;
      
      
      cout<<"\n college code: "<<wd1;
      
      
      
      
  }
   
 College ::College(string a,string b,string c,string d)
 {   
       cout<<"\n ---------------PARAMETERIZED CONSTRUCTOR--------------------";
     
      dp=a;dp1=b;wd=c;wd1=d;

       cout<<"\n   college Name: "<<dp; 
       cout<<"\n   college director: "<<dp1;

      cout<<"\n college principle: "<<wd;
      
      
      cout<<"\n college code: "<<wd1;
  }
 College ::College( College &c)
 {
      cout<<"\n ---------------COPY CONSTRUCTOR--------------------";
       

       cout<<"\n   college Name: "<<c.dp; 
       cout<<"\n   college director: "<<c.dp1;

      cout<<"\n college principle: "<<c.wd;
      
      
      cout<<"\n college code: "<<c.wd1;        
  }
      

//int main(int argc, char *argv[])
//{
//    College b;
//    College b1("sviet","d.baba","mohan","SVIET");
//    College b2=b;
//    getch();
//
//    
//}
