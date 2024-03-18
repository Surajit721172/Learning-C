// Input Format
// The first line of input will contain a single integer 
// �
// T, denoting the number of test cases.
// Each test case contains two space-separated integers 
// �
// X and 
// �
// Y — the numbers Chef and Chefina got on their respective dice.
// Output Format
// For each test case, output on a new line, YES, if the turn was good and NO otherwise.

// Each character of the output may be printed in either uppercase or lowercase. That is, the strings NO, no, nO, and No will be treated as equivalent.

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    // Loop for each test case
    while (t--) {
        int x, y;

      
        scanf("%d %d", &x, &y);

        // Your code for each test case goes here 
        if((x+y)>6)
        {
            printf("yes \n");
            
            
        }
        else {
            printf("no\n");
        }
    }
}
