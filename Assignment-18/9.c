// 9. Write a function to reverse a string word wise. 
// (For example if the given string is “iNeuron Education Services” then the resulting string should be “Services Education iNeuron” )

// Logic 1
#include <stdio.h>
void reverse(char *name, int start, int end)
{
    int i, j;
    for (i = start, j = end; i <= j; i++, j--)
    {
        char temp = name[i];
        name[i] = name[j];
        name[j] = temp;
    }
}

int main()
{
    char name[] = "iNeuron Education Services";
    int i, j, nullFound = 0;

    for (i = 0, j = 0; name[j] != '\0';)
    {
        while (name[j] != ' ')
        {
            if (name[j] == '\0')
            {
                nullFound = 1;
                break; // if null found break loop
            }
            j++;
        }

        reverse(name, i, j - 1); // reversing each word one by one
        i = j + 1;               // i will point to character after space
        if (nullFound == 0)      // if null not found increment j at location after space
            j++;                 // j also come at that location
    }
    reverse(name, 0, j - 1); // reversing whole string

    printf("%s", name);

    return 0;
}

////Logic 2
// #include <stdio.h>

// void reverse(char* begin,char* end)
// {
//     char temp;
//     while(begin < end)
//     {
//         temp = *begin;
//         *begin++ = *end;
//         *end-- = temp;
//     }
// }

// void reverseWords(char* s)
// {
//     char* word_begin = s;
//     char* temp = s;
//     while(*temp)
//     {
//         temp++;
//         if(*temp == '\0')
//         {
//             reverse(word_begin,temp-1);
//         }
//         else if (*temp == ' ')
//         {
//             reverse(word_begin,temp-1);
//             word_begin = temp + 1;
//         }
//     }
//     reverse(s,temp-1);
// }
// int main()
// {
//     char s[] = "iNeuron Education Services";
//     char* temp = s;

//     reverseWords(s);
//     printf("%s",s);
//     return 0;
// }

