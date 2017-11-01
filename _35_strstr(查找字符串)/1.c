#include <stdio.h>
#include <string.h>

int main ()
{
    char str[] = "This is a simple string";
    char *pch;
    
    pch = strstr(str, "simple");
    strncpy(pch, "sample", 6);
    
    
    printf(pch);printf("\n");
    printf(str);printf("\n");
    
    while(1);
    return 0;
}
