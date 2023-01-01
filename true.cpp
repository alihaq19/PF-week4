#include <iostream>
using namespace std;
void reverse(string);
main()
  {
  string word;
  cout<<"Enter true or false ";
  cin>>word;
  reverse(word);
  }
  void reverse(string word1)
  {
  if(word1=="true")
   {
     cout<<"false";
   }
  if(word1=="false")
  {
     cout<<"true";
  }
  }

