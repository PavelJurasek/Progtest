
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i = 0, j = 0;
    
    char input[], output[];
    
    scanf("%s", word);
    
    while (word[i] != '\0')
    {
        //lower case letters
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            output[j] = word[i] - 32;
            j++;
        }
        
        //capital letters
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            output[j] = word[i] + 32;
            j++;
        }
        
        //numbers
        if (word[i] >= '0' && word[i] <= '9')
        {
            output[j] = word[i] + 49;
            j++;
        }
        
        //
        i++;
    }
    
    output[j] = '\0';
    
    printf("%s\n", output);
    
    return 0;
}
