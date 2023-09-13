#include <stdio.h>
#include <assert.h>


float get_cost_of_coffee(int number, float price)
{
    int accumulator = 0;
    float total_cost = 0.00;
    for(int coffee = 0; coffee < number; coffee++)
    {
        if(accumulator > 7 && accumulator % 8 == 0)
            ;
        else
            total_cost += price;
        accumulator += 1;
    }
    return total_cost;
}


void user_interface(void)
{
    int number;
    float price;
    printf("\n\nEnter number of coffees purchased: ");
    scanf("%d", &number);
    printf("\nEnter price of each coffee: ");
    scanf("%f", &price);
    float total_cost = get_cost_of_coffee(number, price);
    printf("\nThe total cost is: $%.2f", total_cost);
}


void test(void)
{
    printf("\nTesting program...");
    assert(get_cost_of_coffee(7, 2.50) == 17.50);
    assert(get_cost_of_coffee(8, 2.50) == 20.00);
    assert(get_cost_of_coffee(9, 2.50) == 20.00);
    assert(get_cost_of_coffee(10, 2.50) == 22.50);
    for(int i = 1; i < 4; i++)
    {
        assert(get_cost_of_coffee(0, i) == 0);
        assert(get_cost_of_coffee(8, i) == 8 * i);
        assert(get_cost_of_coffee(9, i) == 8 * i);
        assert(get_cost_of_coffee(18, i) == 16 * i);
        assert(get_cost_of_coffee(19, i) == 17 * i);
        assert(get_cost_of_coffee(30, i) == 27 * i);
    }
    printf("\nAll tests completed successfully.");
}


int main(void)
{
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
