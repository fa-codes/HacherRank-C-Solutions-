#include <stdio.h>
void check(int a, int b, int first, int last, int n)
{
  if (n >= 1)
  {
    if(a == first || a == last || b == first || b == last)  
        printf("%d ", n);
    else
      check(a, b, first + 1, last - 1, n - 1);
  }
}
int main() 
{
    int n;
    scanf("%d", &n);
    int rows = 2 * n - 1;

  	for(int a = 0; a < rows; a++)
    {
      for(int b = 0; b < rows; b++)
      {
        check(a, b, 0, rows-1, n);
       
      }
   printf("\n");
    }
    
    return 0;
}
