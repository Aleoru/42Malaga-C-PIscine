#include <unistd.h>

void    skyscraper(char *numarray)
{
    int collup[4];
    int colldown[4];
    int rowleft[4];
    int rowright[4];
    int posarray;
    int posptr;

    posarray = 0;
    posptr = 0;
    while (posarray < 4)
    {
        collup[posarray] = numarray[posptr] - '0';
        /* collup[posarray] = collup[posarray] + '0';
        write(1, &collup[posarray], 1); */
        posarray++;
        posptr++;
    }
    posarray = 0;
    while (posarray < 4)
    {
        colldown[posarray] = numarray[posptr] - '0';
        /* colldown[posarray] = colldown[posarray] + '0';
        write(1, &colldown[posarray], 1); */
        posarray++;
        posptr++;
    }
    posarray = 0;

    while (posarray < 4)
    {
        rowleft[posarray] = numarray[posptr] - '0';
        /* rowleft[posarray] = rowleft[posarray] + '0';
        write(1, &rowleft[posarray], 1); */
        posarray++;
        posptr++;
    }
    posarray = 0;
    while (posarray < 4)
    {
        rowright[posarray] = numarray[posptr] - '0';
        /* rowright[posarray] = rowright[posarray] + '0';
        write(1, &rowright[posarray], 1); */
        posarray++;
        posptr++;
    }    
}