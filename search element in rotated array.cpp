

int
findpivot (vector < int >&arr, int n)
{
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;

  while (s < e)
    {
      if (arr[mid] >= arr[0])
	{
	  s = mid + 1;
	}
      else
	{
	  e = mid;
	}
      mid = s + (e - s) / 2;
    }
  return s;
}

int
bs (vector < int >&arr, int st, int ed, int key)
{

  int s = st;
  int e = ed;

  int mid = s + (e - s) / 2;

  while (s <= e)
    {

      if (arr[mid] == key)
	{
	  return mid;
	}

      else if (arr[mid] > key)
	{
	  e = mid - 1;
	}

      else
	{
	  s = mid + 1;
	}

      mid = s + (e - s) / 2;
    }
  return -1;
}



int
search (vector < int >&arr, int n, int k)
{
  int piv = findpivot (arr, n);
  if (k >= arr[piv] && k <= arr[n - 1])
    {
      return bs (arr, piv, n - 1, k);
    }
  else
    {
      return bs (arr, 0, piv - 1, k);
    }

}
