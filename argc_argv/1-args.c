#include <stdio.h>

#include "main.h"


int main(int argc, char *argv[])
{
    int i;

    printf("%d\n",argc);

    for(i=0; i < argc - 1; i++)
    {
        printf("%s\n", argv[i]);
    }
    return (0);
}
