#include <stdio.h>


int main() 
{
    char s[100];
    
    // Read a full line of input including spaces
    scanf("%[^\n]%*c", s);
    
    // Print "Hello, World!" on the first line
    printf("Hello, World!\n");
    
    // Print the input string on the second line
    printf("%s\n", s);
    
    return 0;
}