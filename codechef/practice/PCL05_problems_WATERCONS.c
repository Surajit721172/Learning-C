// The first line contains a single integer 
// �
// T — the number of test cases. Then the test cases follow.
// The first and only line of each test case contains one integer 
// �
// X — the amount of water Chef drank today.
// Output Format
// For each test case, output YES if Chef followed the doctor's advice of drinking at least 
// 2000
// 2000 ml of water. Otherwise, output NO.

// You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

int main() {
    int t;
    scanf("%d", &t);

    // Loop for each test case
    while (t--) {
        int x;
        scanf("%d", &x);

        // Your code for each test case goes here
        if(x>=2000)
        {
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }
return 0;
}