#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * strnstr(const char *s, const char *find, size_t slen)
{
	char c, sc;
	size_t len;
    
	if ((c = *find++) != '\0') {
		len = strlen(find);
		do {
			do {
				if ((sc = *s++) == '\0' || slen-- < 1)
					return (NULL);
			} while (sc != c);
			if (len > slen)
				return (NULL);
		} while (strncmp(s, find, len) != 0);
		s--;
	}
	return ((char *)s);
}

int print_unique(char *loaded){
    char * ptr, *unique, *addr;
    
    addr = unique = (char *)malloc(sizeof(loaded));
    if(unique == NULL)
        return EXIT_FAILURE;
    strcpy(unique, "");
    
    ptr = strtok(loaded, "\n");
    do{
        if(strnstr(unique, ptr, strlen(ptr)) == NULL){
            strcat(unique, ptr);
            strcat(unique, "\n");
        }
        ptr = strtok(NULL, "\n");
    }while(ptr != NULL);
    
    printf("Unique strings:\n%s", unique);
    free(addr);
    return EXIT_SUCCESS;
}


int main (const int argc, const char *argv[])
{
    char * loaded, word[128];
    size_t size = 0, allocated = 128;
    
    loaded = (char *)malloc(allocated*sizeof(char));
    if(loaded == NULL)
        return EXIT_FAILURE;
    strcpy(loaded, "");
    
    while(scanf("%s", slovo) != EOF){
        if(strcmp(slovo, "konec") ==0){
            print_unique(loaded);
            free(loaded);
            return EXIT_SUCCESS;
        }
        size = strlen(slovo);
        if(size >=allocated){
            allocated += 128;
            loaded = (char *)realloc(loaded, allocated*sizeof(char));
            if(loaded == NULL)
                return EXIT_FAILURE;
        }
        strcat(loaded, slovo);
        strcat(loaded, "\n");
    }
    
    free(loaded);
    return EXIT_SUCCESS;
}