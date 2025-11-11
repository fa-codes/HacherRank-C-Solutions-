#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    // Complete this function  
    int pa = *a;
    int pb = *b;
    /* The * operator is used here to dereference the pointers a and b.
     This reads the actual integer values stored in the memory locations they point to.
     
     We must store these original values in temporary variables (pa, pb)
      because the value of *a is modified first. If we didn't use temporary variables,
       the calculation for the difference would use the new, summed value of *a. */
    *a = pa + pb;
    *b = abs(pa - pb);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}



