#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    if (number > 1)
    {
        for (int i = 3; i < number; i++)
        {
//
            for (int j = 2; j < number; j++)
            {
//

                if (number % j == 0) //no skiping numbers like it was doing below
                {
                    return false;
                }
            }
//
            if (number % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    return 0;
}
