#include <iostream>
using namespace std;
/*

 + used to create generic functions and classes
 + type of data on which function/class operates is passed as parameter

 + used as:
 template <class Ttype> returnType functionName(parameters){
    // body of function
  }

*/

// 1. function with one generic type
template <class ValueType>
void swapArgs(ValueType &a, ValueType &b){
  ValueType temp;
  temp = a;
  a = b;
  b = temp;
}

// 2. function with two generic types
template <class type1, class type2>
void squarer(type1 a, type2 b){
  cout<< a*a <<" "<< b*b <<endl;
}

// 3. new syntax for overloaded specialization of generic function to specific for char
template<> void swapArgs<char>(char &a, char &b){
  cout<< "[[[...char specialization of swap!...]]]";
  char temp;
  temp = a;
  a = b;
  b = temp;
}


int main(){

  // 1. test for one generic type
  int i = 10, j = 20;
  cout<<i<<","<<j<<"->";
    swapArgs(i, j);
  cout<<i<<","<<j<<endl;

  double d = 10.14, e = 20.02;
  cout<<d<<","<<e<<"->";
    swapArgs(d, e);
  cout<<d<<","<<e<<endl;




  // 2. test for two generic types
  squarer(2.22, -22);

  // 3. test for overloaded specialization of generic function

  char b = 'x', c = '*';
  cout<<b<<","<<c<<"->";
    swapArgs(b, c);
  cout<<b<<","<<c<<endl;


  return 0;
}
