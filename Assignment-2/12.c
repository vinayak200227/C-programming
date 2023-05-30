// 12. Write a program to take a three digit number from the user and rotate its digits by
// one position towards the right.

# include<stdio.h>
int main(){
    // int n, r, t;
    // printf("Enter three digit number:\n");
    // scanf("%d", &n);
    // r = n % 10;
    // t = n /10;
    // n = r * 100 + t;
    // printf("Number after rotating its digit by one position towards right is %d", n);
    int x;
    printf("Enter three digit number:\n");
    scanf("%d", &x);
    x = (x % 10) * 100 + (x / 10);
    printf("Number after rotating its digit by one position towards right is %d", x);
    return 0;
}