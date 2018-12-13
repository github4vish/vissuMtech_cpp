#include <cstdlib>
#include <iostream>
#include<conio.h>

using namespace std;

class University
{
      string dp,dp1,wd,wd1;
      int n;
      public: 
              University();
              University(string a,string b,string c,string d,int m);
              University(University &b);
      };
  University ::University()
 {
       cout<<"\n ---------------DEFAULT CONSTRUCTOR--------------------";
     
      cout<<"\n Enter names of University,principle,director, University code, number of colleges registered:";
      cin>>dp>>dp1>>wd>>wd1>>n;
      

       cout<<"\n   University Name: "<<dp; 
       cout<<"\n   University director: "<<dp1;

      cout<<"\n University principle: "<<wd;
      
      
      cout<<"\n University code: "<<wd1;
      cout<<"\n number of colleges registered in University: "<<n;
      
      
      
  }
   
 University ::University(string a,string b,string c,string d,int m)
 {   
       cout<<"\n ---------------PARAMETERIZED CONSTRUCTOR--------------------";
     
      dp=a;dp1=b;wd=c;wd1=d;n=m;

       cout<<"\n   University Name: "<<dp; 
       cout<<"\n   University director: "<<dp1;

      cout<<"\n University principle: "<<wd;
      
      
      cout<<"\n University code: "<<wd1;
      cout<<"\n number of colleges registered in University: "<<n;
  }
 University ::University( University &c)
 {
      cout<<"\n ---------------COPY CONSTRUCTOR--------------------";
       

       cout<<"\n   University Name: "<<c.dp; 
       cout<<"\n   University director: "<<c.dp1;

      cout<<"\n University principle: "<<c.wd;
      
      
      cout<<"\n University code: "<<c.wd1;        
      cout<<"\n number of colleges registered in University: "<<c.n;
  }
      

//int main(int argc, char *argv[])
//{
//    University b;
//    University b1("Nagarjuna","d.baba","mohan","SVIET",225);
//    University b2=b;
//    getch();
//
//    
//}

