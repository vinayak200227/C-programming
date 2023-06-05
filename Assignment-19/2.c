// 2. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.

#include <stdio.h>
#include <string.h>

void sortCityNames(char cities[][100], int count) {
    char temp[100];

    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(cities[i], cities[j]) > 0) {
                strcpy(temp, cities[i]);
                strcpy(cities[i], cities[j]);
                strcpy(cities[j], temp);
            }
        }
    }
}

int main() {
    char cities[10][100];

    printf("Enter 10 city names:\n");

    for (int i = 0; i < 10; i++) {
        printf("Enter city name %d: ", i + 1);
        fgets(cities[i], sizeof(cities[i]), stdin);

        // Remove the newline character from the string
        cities[i][strcspn(cities[i], "\n")] = '\0';
    }

    sortCityNames(cities, 10);

    printf("\nSorted city names:\n");

    for (int i = 0; i < 10; i++) {
        printf("%s\n", cities[i]);
    }

    return 0;
}
