
#include <iostream>
#include <vector>

using namespace std;

int main ()
{
  int n = 37;
  int cnt = 0;
  vector < bool > prime (n + 1, true);

  prime[0] = prime[1] = false;

  for (int i = 2; i < n; i++)
    {
      if (prime[i] == true)
	{
	  cnt++;
	  cout << "Prime no. :" << i << " ";
	  for (int j = 2 * i; j < n; j = j + i)
	    {
	      prime[j] = false;
	      cout << " To false:" << j << " ";
	    }

	}
      cout << endl;
    }

  cout << endl << "total prime:" << cnt;

  return 0;
}
