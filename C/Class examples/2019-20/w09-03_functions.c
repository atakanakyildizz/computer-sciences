/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

void string_upper(char s[]);
void first_char_to_upper(char s[]);

int main()
{
    char string[4096];
    scanf("%s", string);

    printf("%s\n", string);
    first_char_to_upper(string);
    printf("%s\n", string);
    return 0;
}

void char_to_upper(char s[])
{
    if (s[0] >= 'a' && s[0] <= 'z')
    {
        s[0] = s[0] - 'a' + 'A';
    }
}

void string_upper(char s[])
{
    for (int t = 0; s[t] != '\0'; ++t)
    {
        if (s[t] >= 'a' && s[t] <= 'z')
        {
            s[t] = s[t] - 'a' + 'A';
        }
    }
}

void first_char_to_upper(char s[])
{
    // AAA!!!BBBmamma_mia -> AAA!!!BBBMamma_mia

    /**
    // take 1
    for(int t = 0; s[t] != '\0'; ++t) {
        if(s[t] >= 'a' && s[t] <= 'z') {
            s[t] = s[t] - 'a' + 'A';
            break;  // yes, it works but you lose points
        }
    }

    // take 2
    int swapped = 0;
    for(int t = 0; !swapped && s[t] != '\0'; ++t) {
        if(s[t] >= 'a' && s[t] <= 'z') {
            s[t] = s[t] - 'a' + 'A';
            swapped = 1;
        }
    }
    **/

    // take 3
    int t = 0;
    while (s[t] != '\0' && (s[t] < 'a' || s[t] > 'z'))
    {
        ++t;
    }
    if (s[t] != '\0')
    {
        s[t] = s[t] - 'a' + 'A';
    }
}
