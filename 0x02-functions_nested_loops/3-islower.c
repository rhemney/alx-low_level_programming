#include "main.h"

/**
 * _islower - main block
 * Descrition: checks for lower case letters
 */
int _islower(int c)
{
    
    if (c >= 'a' && c <= 'z'){
        return(1);
    }
    else{
        return(0);
    }
}