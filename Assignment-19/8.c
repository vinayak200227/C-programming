// 8. Given a list of words followed by two words, the task is to find the minimum distance   between the given two words in the list of words.
// (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”} 
// word1 = “the”, word2 = “fox”, OUTPUT : 2)

#include<stdio.h>
#include<string.h>
#include<math.h> 

int shortestDistance(char s[][20], char word1[], char word2[])
{
    int d1 = -1, d2 = -1;
    int ans = 99999;

    for(int i = 0; i <5; i++)
    {
        if (strcmp(s[i], word1) == 0)
            d1 = i;
        if (strcmp(s[i], word2) == 0)
            d2 = i;
        if (d1 != -1 && d2 != -1)
            ans = (ans < abs(d1 - d2)) ? ans : abs(d1 - d2);
    }
    return ans;    
}

int main()
{
    char s[][20] = {"the", "quick", "brown", "fox", "quick"};

    char word1[] = "the", word2[] = "fox";

    printf("%d",shortestDistance(s, word1, word2));

    return 0;
}