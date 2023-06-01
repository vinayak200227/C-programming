// 7. Program to take the value from the user as input electricity unit charges and calculate
// total electricity bill according to the given condition . Using the switch statement.
// For the first 50 units Rs. 0.50/unit          (0 - 50)
// For the next 100 units Rs. 0.75/unit         (51 - 150)
// For the next 100 units Rs. 1.20/unit         (151 - 250)
// For units above 250 Rs. 1.50/unit            (251 - above)
// An additional surcharge of 20% is added to the bill.

#include<stdio.h>
int main()
{
    float unit = 120, total,finalTotal;

    switch ( unit <= 50)
    {
    case 0:
        // 50 > unit
        switch(150 < unit)
        {
            case 0: // 51 < unit < 150
                total = 50 * 0.5 + (unit - 50)*0.75;
                  break;
            case 1: // 151 < unit < 250
                total = 50 *0.5 + 100 * 0.75 + (unit - 100)*1.20 ;
                 break;
        }
        break;
    
    case 1:
         // unit < 50
         total = unit * 0.5;
        break;
    }
    
    finalTotal = total + total * 0.2;
    printf("Total Amount = %f\n",finalTotal);

    return 0;
}

