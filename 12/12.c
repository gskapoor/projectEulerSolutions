#include <stdio.h>

int triNum(int n)
{
  return (n * n - n)/2;
}

int numFactors(int n)
{
  int nFacts = 0;
  for(int i = 2; i * i < n; i++)
  {
    if (!(n % i))
    { nFacts++; }
  }

  return nFacts;
}


int main()
{
  int tri = 1;
  while(1)
  {
    if(numFactors(triNum(tri)) > 500)
    {
      printf("%d", triNum(tri));
      return 0;
    }
    tri++;
  }


  return 0;
}
