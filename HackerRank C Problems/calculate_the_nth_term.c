#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
      // Base case: if n is 1, return a
    if (n == 1) {
        return a;
    }
    // Base case: if n is 2, return b
    else if (n == 2) {
        return b;
    }
    // Base case: if n is 3, return c
    else if (n == 3) {
        return c;
    }
    // Recursive case: calculate the nth term as the sum of the previous three terms
    else {
        return find_nth_term(n - 1, b, c, a + b + c);
    }
}
  



int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
