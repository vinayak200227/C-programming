// 8. Write a function to count words in a given string

#include<stdio.h>
int main()
{
    char a[] = "My name is Vinayak";
    int count=0, i;

    for(i=0; a[i] != '\0'; i++)
    {
        if(a[i] == ' ')
            count++;
    }
    count++; // last word will not be counted in above for loop so increment count by 1
    printf("Number of words = %d\n",count);
    return 0;
}