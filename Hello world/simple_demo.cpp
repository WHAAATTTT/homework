#include <iostream>
#include "pointer_simple.h"

int main(int argc, char** argv)
{
  std::cout << "Hello Eric! This is a pointer demonstration." << std::endl;

  // Assign variables a and b to have values 1 and 2 respectively...
  int a = 1;
  int b = 2;
  std::cout << "Without using pointer:" << pointer::normalAdd(a, b) << std::endl;

  // Creating pointers c and d that points to the address of a and b, dentoed by &a and &b...
  int* c = &a;
  int* d = &b;
  std::cout << "Using pointer:" << pointer::pointerAdd(c, d) << std::endl;
  a = 3;
  b = 4;
  // If we change the values of the address c and d is pointing to, then c and d will change too...
  std::cout << "After changing a and b to (3,4):" << pointer::pointerAdd(c, d) << std::endl;

  // Finally to demonstrate the difference, let's print c and d...
  std::cout << "Printing c and d:" << c << "  and  " << d << std::endl;
  std::cout << "They are adresses." << std::endl;

  return 0;
}
