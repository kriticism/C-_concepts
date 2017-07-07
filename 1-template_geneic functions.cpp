#include <iostream>

// class treeNode{
// public:
//   int value;
//   treeNode* next;
//   treeNode(int, treeNode*);
// }
//
// treeNode::treeNode (int N, treeNode* NEXT = NULL) {
//   value = N;
//   next = NEXT;
// }

template <class X>
void swapArgs(X &a, X &b){
  X temp;
  temp = a;
  a = b;
  b = temp;
}
int main(){
  int i = 10, j = 20;
  cout<<i<<","<<j<<"->";
    swapArgs(i, j);
  cout<<i<<","<<j<<endl;

  double d = 10.14, e = 20.02;
  cout<<d<<","<<e<<"->";
    swapArgs(d, e);
  cout<<i<<","<<j<<endl;

  char b = '*', c = 'k';
  cout<<b<<","<<c<<"->";
    swapArgs(b, c);
  cout<<b<<","<<c<<endl;

  return 0;
}
