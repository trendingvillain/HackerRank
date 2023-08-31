/*
Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
*/
#include <stdio.h>

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max(int a, int b) {
    return a > b ? a : b;     // i wrote this function to avoid duplication of code.
}

int max_of_four(int a, int b, int c, int d) {
    return max(a, max(b, max(c, d)));
}
 int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
