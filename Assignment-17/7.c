// 7. Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include <stdio.h>
int main()
{
    char name[] = "vinayakvt2708@gmail.com";
    int  i=0;
     int digitCount = 0, AlphaCount = 0,specialCount=0;
    while(name[i] != '\0')
    {
        if(name[i] >= 'a' && name[i] <= 'z')
        {
            AlphaCount++;
        }

        else if(name[i] >= '0' && name[i] <= '9')
        {
            digitCount++;
        }

        else
        {
            specialCount++;
        }
        i++;
    }

    printf("Digit count = %d,\nAlphabet aount = %d,\nSpecial character count = %d\n",digitCount,AlphaCount,specialCount);
    return 0;
}