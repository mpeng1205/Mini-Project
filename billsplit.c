// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(int people, float bill, float tax, int tip);

int main(void)
{
    int people_amount = get_int("People present: ");
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(people_amount, bill_amount, tax_percent, tip_percent));
}
// TODO: Complete the function
//float half(float bill, float tax, int tip)
//{
//    return 0.0;
//}
float half(int people, float bill, float tax, int tip)
{

    float half = (bill + (bill * tax / 100) + (bill + (bill * tax / 100)) * tip / 100) / people;
    return half;
    return 0.0;
}
