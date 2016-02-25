/* Write a function that returns the first digit of a number */

int first_digit(int n) /* function first_digit takes 1 argument (int n) & returns an (int) */
{
  if ( n == 0 )
    return(n);
  else if ( n > 0 && n < 10 )
    return(n);
  else if ( n > 10 )
    {
      while ( n >= 10 )
      {
	n = n / 10;
      }
      return(n);
    }
  else if ( n < -1 && n > -9 )
    {
      n = n * -1;
      return(n);
    }
  else 
    {
      while ( n <= -10 )
	{
	  n = n / 10;
	}
      n = n * -1;
      return(n);
      } 
}    

  



















	   








