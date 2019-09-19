#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[] = "Iftekhar shuvo";

    printf(" %s\n", string);

    string[strlen(string) - 5]  = '\0';

    printf("Truncated name: %s\n", string);

    return 0;
}
