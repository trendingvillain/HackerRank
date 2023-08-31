/*
complete the function void update(int *a,int *b). it receives two integer pointers, int* a and int* b. set the value of to their sum, and to their absolute difference. there is no return value, and no return statement is needed.
*/

#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    // Complete this function
    int t1, t2;
    t1 = *a + *b;
    t2 = abs(*a - *b);
    *a = t1;
    *b = t2;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
