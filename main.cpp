#include <iostream>

// Lab 10 — Isaiah Salvatierra
// CIS 5 Week 10 · References & pointers

using std::cout;
using std::endl;

void swap_values(int& a, int& b) 
{
 int t = a; a = b; b = t;
 
}

int main() 
{
  int x = 3, y = 7;
  cout << "Before: " << x << " " << y << endl;
 
  swap_values(x, y);
  cout << "After: " << x << " " << y << endl;
  int* p = &x;
  cout << "x via pointer: " << *p << endl;
  return 0;
}
