#include <stdlib.h>
#include <stdio.h>

int main()
{
    char str[80];

    fprintf(stdout, "\nPlease enter a rational number (e.g., 0.5):\n");
    scanf ("%79s", str);

    fprintf(stdout, "\nYou entered '%s'\n", str);

    return EXIT_SUCCESS;
}
