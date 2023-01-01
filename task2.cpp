  #include <iostream>
  using namespace std;
  void checkresult(int marks);
  main()
  { 
  int marks;
  while (true){
  cout<<"Enter your marks ";
  cin>>marks;
  checkresult(marks);
}
  
  }
  void checkresult(int marks)
  {
  if(marks>50)
  {
  cout<<"Pass"<<endl;
  } 
  if(marks==50)
  {
  cout<<"Work hard"<<endl;
  }
  if(marks<50)
  {
  cout<<"fail"<<endl;
  }
  }