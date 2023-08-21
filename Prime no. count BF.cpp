#include <iostream>

using namespace std;

bool isprime (int n)
{
  if (n <= 1)
    return false;

  for (int i = 2; i < n; i++)
    {				//only <n as it will be divisible by n.
      if (n % i == 0)
	{
	  return false;
	}
    }
  return true;

}

int
main ()
{
  cout << isprime (2) << endl;
  int count = 0;
  for (int i = 2; i < 39; i++)
    {
      if (isprime (i))
	{
	  cout << i << " ";
	  count++;
	}
    }
  cout << endl;
  cout << count;
  return 0;
}
