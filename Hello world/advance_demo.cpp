#include <iostream>
#include "pointer_array.h"

int main(int argc, char** argv)
{
  std::cout << "Hello Eric! This is an advanced pointer demonstration." << std::endl;

  // Assign variables a and b to have values 1 and 2 respectively...
  int array[5] = {1,2,3,4,5};
  std::cout << "Passing arrays into func as pointers:" << pointer::arrayAdd(array, 5) << std::endl;

  // Now we used the more explicit version of the same operation above...
  std::cout << "Hardcore version         :" << pointer::arrayAddHardcore(array, 5) << std::endl;

  // We can create an array using the hardcore pointer syntax...
  int* arr = (int*) malloc(sizeof(int)*5); //Here we assign memory for 5 int
  // Now we assign each elements of the array:
  *(arr) = 1;
  *(arr + 1) = 2;
  *(arr + 2) = 3;
  *(arr + 3) = 4;
  *(arr + 4) = 5;
  std::cout << "Extreme version          :" << pointer::arrayAddHardcore(array, 5) << std::endl;
  std::cout << "Let's print arr          :" << arr << std::endl;
  int test = 1;
  std::cout << "Compare with a signle int:" << &test << std::endl;
  free(arr); // We now free the memory arr takes

  return 0;
}
