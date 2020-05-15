#include "pointer_simple.h"

namespace pointer
{

//-----------------------------------------------------------------------------
int normalAdd(int a, int b)
{
  return a + b;
}

int pointerAdd(int* a, int* b)
{
    return *a + *b;
}

} // end namespace