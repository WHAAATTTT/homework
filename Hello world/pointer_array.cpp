#include "pointer_array.h"

namespace pointer
{

//-----------------------------------------------------------------------------
int arrayAdd(int* a, int length)
{
  int output = 0;
  for(int i = 0; i < length; i++)
  {
      output += a[i];
  }
  return output;
}

int arrayAddHardcore(int* a, int length)
{
  int output = 0;
  for(int i = 0; i < length; i++)
  {
      // Here, a + i is the address of the i_th elements in the array. *(a+i) obtains the value.
      // Since the compiler already know this is an int type address, adding 1 means adding the size of the int type memory.
      output += *(a + i);   
  }
  return output;
}

} // end namespace