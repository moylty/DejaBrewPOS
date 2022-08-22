#include <stdio.h>
#include <string.h>

int getOrderQuantity(int orderCount)
{
    orderCount = 0;

    while (orderCount < 1)  // this prevents the quantity from being negative or zero
    {
        printf("\nHow many to order?\n");
        scanf("%d", &orderCount);
    }

    return orderCount;
}

int main(void)
{
    struct Coffee   //making coffee a struct makes defining the prices for each one neater
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
    int orderCount = 0;

    const int osLengthMax = 12;
    char orderSelection[osLengthMax];
    char anotherOrder[4];
    
    float total = 0;

    while (ordering)
    {
        printf("\nDejaBrew POS\n\nAvailable coffees:\nFlat White: $%.2f\nCappuccino: $%.2f\nExpresso:   $%.2f\nLong Black: $%.2f\nMacchiato:  $%.2f\n",
        flatWhite.price, cappuccino.price, expresso.price, longBlack.price, macchiato.price);

        printf("\nCurrent total: $%.2f\n", total);
        printf("Select a coffee to order, or enter 'done' to end order: ");
        fgets(orderSelection, osLengthMax, stdin);

        // using strcasecmp() rather than strcmp() because it is case insensitive
        if (!(strcasecmp(orderSelection, "flat white\n")) || !(strcasecmp(orderSelection, "f\n")))  // inverting result of strcasecmp because a match returns zero
        {
            total += getOrderQuantity(orderCount) * flatWhite.price;
        }
        else if (!(strcasecmp(orderSelection, "cappuccino\n")) || !(strcasecmp(orderSelection, "c\n")))
        {
            total += getOrderQuantity(orderCount) * cappuccino.price;
        }
        else if (!(strcasecmp(orderSelection, "expresso\n")) || !(strcasecmp(orderSelection, "e\n")))
        {
            total += getOrderQuantity(orderCount) * expresso.price;
        }
        else if (!(strcasecmp(orderSelection, "long black\n")) || !(strcasecmp(orderSelection, "l\n")))
        {
            total += getOrderQuantity(orderCount) * longBlack.price;
        }
        else if (!(strcasecmp(orderSelection, "macchiato\n")) || !(strcasecmp(orderSelection, "m\n")))
        {
            total += getOrderQuantity(orderCount) * macchiato.price;
        }
        else if (!(strcasecmp(orderSelection, "done\n")) || !(strcasecmp(orderSelection, "d\n")))
        {
            printf("The total for your order is: $%.2f\n", total);

            printf("Is there another customer?\n");
            fgets(anotherOrder, 4, stdin);

            if (!(strcasecmp(anotherOrder, "yes")))
            {
                total = 0;
            }
            else
            {
                ordering = 0;
            }
            
        }
        getchar();  
        /*
        this is here to eat the newline character left in the input stream by scanf.
        if the newline char is kept the fgets function is skipped over.
        This was a VERY annoying bug.

        It also prevents the console window from immediately closing after the
        program ends on windows. This was absolutely intentional.
        */
    }
}