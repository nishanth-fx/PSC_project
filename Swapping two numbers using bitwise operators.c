#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    printf("The numbers before swapping %d %d",a ,b);
    // Step 1: XOR the two numbers and store the result in 'a'
    a = a ^ b;
    
    // Step 2: XOR the new value of 'a' with 'b' to get the original value of 'a'
    b = a ^ b;
    
    // Step 3: XOR the new value of 'a' with the new value of 'b' to get the original value of 'b'
    a = a ^ b;
     printf("The numbers after swapping %d %d",a ,b);
    
    return 0;
}
