#include "main.h"

/**
 * _isalpha - This is checking whether a letter is upper or lowercase
 * Description: function for checking if a letter is a upper or lower case
 * @c:This is the ineteger integer which is entered
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{

    if ((c >= 'a' && c <= 'z') || (c  >= 'A' && c <= 'Z')){
          return(1);
    }   
    else{
          return(0);
    }
}