#include <stdio.h>

void calculate_the_maximum(int n, int k) 
{
    int max_and = 0, max_or = 0, max_xor = 0; // Initialize maxima to 0 
    for(int a = 1; a <= n; a++)
    { 
        for(int b = a + 1; b <= n; b++)
        {
            int and_val = a & b; // bitwise AND
            int or_val = a | b; // bitwise OR
            int xor_val = a ^ b; // bitwise XOR

             // Update max_and if and_val is larger and < k
            if(and_val > max_and && and_val < k) 
            {
                 max_and = and_val; 
            }
            // Update max_or if or_val is larger and < k
            if(or_val > max_or && or_val < k)
            {
                 max_or = or_val;
            }  
            // Update max_xor if xor_val is larger and < k
            if(xor_val > max_xor && xor_val < k)
            {
                max_xor = xor_val;
            }   
        }
    }
    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    
    return 0;
}