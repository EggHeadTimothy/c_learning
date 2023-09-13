#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>


int roll_dice(int number_of_dice)
{
    int result = 0;
    for(int dice=0;dice<number_of_dice;dice++)
    {
        int roll = rand() % 6 + 1;
        result += roll;
    }
    return result;
}


void test()
{
    assert(roll_dice(0) == 0);
    for(int i=0;i<1000;i++)
    {
        assert(1 <= roll_dice(1) <= 6);
        assert(2 <= roll_dice(2) <= 12);
        assert(3 <= roll_dice(3) <= 18);
        assert(100 <= roll_dice(100) <= 600);
    }
}


void user_interface()
{
    int number_of_dice;
    printf("\nEnter number of dice: ");
    scanf("%d", &number_of_dice);
    int result = roll_dice(number_of_dice);
    printf("\nThe sum of all dice rolled is %d", result);
}


int main(void)
{
    srand(time(NULL));
    test();
    char keep_going;
    while(1)
    {
        user_interface();
        printf("\n\nContinue? (y/n): ");
        scanf("%s", &keep_going);
        if(keep_going == 'n')
            break;
    }
    return 0;
}
