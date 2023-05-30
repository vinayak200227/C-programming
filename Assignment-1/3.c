// 5. WAP to calculate the length of String using printf function.

#include<stdio.h>
    int
    main(){
    int x = printf("Hello \n");
    printf("%d \n",x);

    int y = printf("Bye \\Hello \n");
    printf("%d \n", y);

    int z = printf("Bye \\\\Hello \n");
    printf("%d \n", z);

     return 0;
}