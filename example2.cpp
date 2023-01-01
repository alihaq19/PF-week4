  #include <iostream>
  using namespace std;
  main()
  {
  int number1
  int number2;
  int add;
  int product;
  int subtract;
  char sign;
  cout<<"Enter a number ";
  cin<<number1;
  cout<<"Enter 2nd number ";
  cin>>number2;
  cout<<"Enter + to add * to multiply and - to subtract ";
  cin<<sign;
  if(sign== '+')
  {
  add=number1+number2;
  cout<<"The sum is "<<add<<endl;
  }
  if(sign=='*')
  {
  product=number1*number2;
  cout<<"The product is "<<product<<endl;
  }
  if(sign=='-')
  {
  subtract=number1-number2;
  cout<<"The subtracted result is "<<subtract;
  }
  }