/*#include<stdio.h>
int main(){
    char ch1,ch2;
    int n;
    scanf("%c",&ch1);
    scanf("%c",&ch2);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2!=0) printf("%c",ch1);
            else printf("%c",ch2);
        }
    printf(" ");
    }
    return 0;
}
*/
#include <stdio.h>

int main() {
    char ch1, ch2;
    int n;

    // Read first character
    scanf("%c", &ch1);
    // Consume the newline character left in the input buffer
    getchar();
    
    // Read second character
    scanf("%c", &ch2);
    // Consume the newline character left in the input buffer
    getchar();

    // Read integer n
    scanf("%d", &n);

    // Loop through rows
    for (int i = 1; i <= n; i++) {
        // Loop to print characters in each row
        for (int j = 1; j <= i; j++) {
            if (i % 2 != 0) {
                printf("%c", ch1); // Print ch1 for odd rows
            } else {
                printf("%c", ch2); // Print ch2 for even rows
            }
        }
        printf(" "); // Move to the next line after each row
    }

    return 0;
}
