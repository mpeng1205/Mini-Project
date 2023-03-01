#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("how tall? ");//EX: 5
    }
    while (height < 1 || height > 8); // height between 1 - 8
    int space = height - 1; //EX: 4
    for (int j = 0; j < height; j++) //vertical length/rows (repeat 'height' rows); EX: 5 rows
    {
        for (int k = space; k > 0; k--) //empty space by (height -1) in column
        {
            printf(" "); //EX: first pass: 4 space
        }
        for (int i = space; i < height; i++) //EX: first pass: space is at 4
        {
            printf("#"); //EX: first pass: only 1 ('#') on the right
        }
        printf("  ");// the space between two pyramid
        for (int i = space; i < height; i++)
        {
            printf("#");
        }
        space = space - 1; //decrease space by one while increase '#' by one from the previous row;
        printf("\n");
    }
}