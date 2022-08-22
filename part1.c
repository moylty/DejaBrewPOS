#include <stdio.h>
#include <string.h>

int getOrderQuantity(int orderCount)
{
    printf("\nHow many to order?\n");
    scanf("%d", &orderCount);

    return orderCount;
}

int main(void)
{
    struct Coffee   //making coffee a struct makes define the prices for each one neater
    {
        float price;
    };

    typedef struct Coffee Coffee;

    Coffee flatWhite; flatWhite.price = 4.50;
    Coffee cappuccino; cappuccino.price = 4.70;
    Coffee expresso; expresso.price = 3.50;
    Coffee longBlack; longBlack.price = 4.00;
    Coffee macchiato; macchiato.price = 5.00;

    int ordering = 1;

    const int osLengthMax = 12;
    char orderSelection[osLengthMax];

    int orderCount = 0;

    float total = 0;

    while (ordering)
    {
        printf("\nDejaBrew POS\n\nAvailable coffees:\nFlat White: $%.2f\nCappuccino: $%.2f\nExpresso:   $%.2f\nLong Black: $%.2f\nMacchiato:  $%.2f\n",
        flatWhite.price, cappuccino.price, expresso.price, longBlack.price, macchiato.price);

        printf("Select a coffee to order, or enter 'done' to end order: ");
        fgets(orderSelection, osLengthMax, stdin);


        if (!(strcasecmp(orderSelection, "done\n")))
        {
            ordering = 0;
        }
        else
        // using strcasecmp() rather than strcmp() because it is case insensitive
        if (!(strcasecmp(orderSelection, "flat white\n")))  // inverting result of strcasecmp because a match returns zero
        {
            total += getOrderQuantity(orderCount) * flatWhite.price;
        }
        else if (!(strcasecmp(orderSelection, "cappuccino\n")))
        {
            total += getOrderQuantity(orderCount) * cappuccino.price;
        }
        else if (!(strcasecmp(orderSelection, "expresso\n")))
        {
            total += getOrderQuantity(orderCount) * expresso.price;
        }
        else if (!(strcasecmp(orderSelection, "long black\n")))
        {
            total += getOrderQuantity(orderCount) * longBlack.price;
        }
        else if (!(strcasecmp(orderSelection, "macchiato\n")))
        {
            total += getOrderQuantity(orderCount) * macchiato.price;
        }
        else
        {
            printf("Invalid input\n");
        }
    }

    printf("The total for your order is: $%.2f\n", total);


}