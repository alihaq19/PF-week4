#include <iostream>
using namespace std;
void printmenu();
void calculateaggregate(string name,float matricm,float interm,float ecatm);
void comparemarks(string name1,int ecatm1,string name2,int ecatm2);
main()
  { 
  printmenu();
  string name1;
  float matricm1;
  float interm1;
  float ecatm1;
  string name2;
  float matricm2;
  float interm2;
  float ecatm2;
  
  cout<<"Enter your name ";
  cin>>name1;
  cout<<"Enter your matriculation marks ";
  cin>>matricm1;
  cout<<"Enter your intermediate marks ";
  cin>>interm1;
  cout<<"Enter your ecat marks ";
  cin>>ecatm1;
  calculateaggregate(name1,matricm1,interm1,ecatm1);
  cout<<"Enter your name ";
  cin>>name2;
  cout<<"Enter your matriculation marks ";
  cin>>matricm2;
  cout<<"Enter your intermediate marks ";
  cin>>interm2;
  cout<<"Enter your ecat marks ";
  cin>>ecatm2;
  calculateaggregate(name2,matricm2,interm2,ecatm2);
  comparemarks(name1,ecatm1,name2,ecatm2);
  }
void printmenu()
  {
  cout<<"                       ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^      "<<endl;
  cout<<"                       ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^      "<<endl;
  cout<<"                       ^^                                                 ^^      "<<endl;
  cout<<"                       ^^           UNIVERSITY OF ENGINEERING             ^^      "<<endl;
  cout<<"                       ^^                     AND                         ^^      "<<endl;
  cout<<"                       ^^                  TECHNOLOGY                     ^^      "<<endl;
  cout<<"                       ^^                                                 ^^      "<<endl;
  cout<<"                       ^^                                                 ^^      "<<endl;
  cout<<"                       ^^                                                 ^^      "<<endl;
  cout<<"                       ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^      "<<endl;
  cout<<"                       ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^      "<<endl;
  cout<<"                       ADMISSIONS    CAMPUS     RESEARCH     FACULTY    HELP      "<<endl;
  cout<<"                           ^                                                      "<<endl;
  cout<<"                           ^                                                      "<<endl;
  }
void calculateaggregate(string name,float matricm,float interm,float ecatm)
  {
  float marksm;
  float totalm;
  float marksi;
  float totali;
  float markse;
  float totale;
  float aggregate;
  marksm=matricm/1100*100;
  marksi=interm/1100*100;
  markse=ecatm/400*100;
  totalm=marksm*0.3;
  totali=marksi*0.3;
  totale=markse*0.4;
  aggregate=totalm+totali+totale;
  cout<<name <<" 's aggregate is = "<<aggregate<<endl;
  }
void comparemarks(string name1,int ecatm1,string name2,int ecatm2)
  {
  if(ecatm1>ecatm2)
   {
    cout<<"Roll number 1 is "<< name1<<endl;
   }
  if(ecatm2>ecatm1)
   {
    cout<<"Roll number 1 is "<< name2<<endl;
   }
  }