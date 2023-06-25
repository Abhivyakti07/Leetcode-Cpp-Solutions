long long int
bs (int n)
{
  
int s = 0;
  
int e = n;
  
long long int mid = s + (e - s) / 2;
  
long long int ans = -1;
  
 
while (s <= e)
    {
      
long long int sq = mid * mid;
      
 
if (sq == n)
	{
	  
return mid;
	
}
      
if (sq < n)
	{
	  
ans = mid;
	  
s = mid + 1;
	
}
      
      else
	{
	  
e = mid - 1;
	
}
      
mid = s + (e - s) / 2;
    
}
  
return ans;

}


 
 
 
int
floorSqrt (int n) 
{
  
return bs (n);

}


