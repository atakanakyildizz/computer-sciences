/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Please, type 42: ");

    int dna;
    scanf("%d", &dna);

    if (dna == 42)
    {
        printf("Long life Douglas!\n");
    }
    else
    {
        printf("D'ho!?\n");
    }

    return 0;
}