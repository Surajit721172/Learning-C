// The only line of input contains two space separated integers 
// �
// X and 
// �
// Y — the threshold limit and the rate at which Chef is currently working at.

// Output Format
// If Chef is prone to errors print YES, otherwise print NO.

// You may print each character of the string in uppercase or lowercase (for example, the strings yes, Yes, yEs, and YES will all be treated as identical).

#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    // Your code goes here (if needed)
 if(y>x)
 {printf("yes");}
 
 else
 {printf("no");}
 return 0;
}

