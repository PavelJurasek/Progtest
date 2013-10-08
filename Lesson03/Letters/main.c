
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0, j = 0;
    char input[81], output[81];

    // get input string
    scanf("%s", input);
    
    while (input[i] != '\0') // end of string
    {
        if (i >= 80) { break; }
        
        // 'a' - decimal ASCII value of letter 'a'
        
        if (input[i] >= 'a' && input[i] <= 'z') {
            output[j++] = input[i] - 32; // transforms lowercase letter to uppercase
        }
        
        // transforms uppercase letter to lowercase
        if (input[i] >= 'A' && input[i] <= 'Z') {
            output[j++] = input[i] + 32;
        }
        
        // transforms numbers to lowercase letter
        if (input[i] >= '0' && input[i] <= '9') {
            output[j++] = input[i] + 49;
        }
        
        i++;
    }

    output[j] = '\0';
    
    printf("%s\n", output);
    
    return 0;
}
