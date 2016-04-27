/* Write code in while loop displaying addition of 2 arrays starting from the last item to the first */
int print_char(char c);

int main(void)
{
  int a[5] = { 0, 1, 2, 4, 1 };
  int b[5] = { 1, 6, 2, 2, 8 };
  int i;
  
  i = 4;
  while (i >= 0) 
    {
      /* 48 in decimal is equivalent to '0' */
      print_char(48 + (a[i] + b[i]));
      /* Same: i = i-1; i--; */
      i-=1;
    }
  print_char('\n');
  return (0);
}
