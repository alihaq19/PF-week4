  #include <iostream>
  using namespace std;
  void add(int num1,int num2);
  void product(int num1,int num2);
  void subtract(int num1,int num2);
  void divide(int num1,int num2);
  main()
  {
  int num1;
  int num2;
  char sign;
  cout<<"enter a number ";
  cin>>num1;
  cout<<"Enter 2nd number ";
  cin>>num2;
  cout<<"Enter operator +,-,*,/ ";
  cin>>sign;
  if(sign=='+')
  {
  add(num1,num2);
  }
  if(sign=='*')
  {
  product(num1,num2);
  }
  if(sign=='-')
  {
  subtract(num1,num2);
  }
  if(sign=='/')
  {
  divide(num1,num2);
  }
  }
  void add(int num1,int num2)
  {
  int sum;
  sum=num1+num2;
  cout<<"The sum is "<<sum;
  }
  
  void product(int num1,int num2)
  {
  int multiply;
  multiply=num1*num2;
  cout<<"The product is "<<multiply;
  }
  
  void subtract(int num1,int num2)
  {
  int minus;
  minus=num1-num2;
  cout<<"The subtracted result is "<<minus;
  }
 
  void divide(int num1,int num2)
  {
  int div;
  div=num1/num2;
  cout<<"The divided result is "<<div;
  }
  