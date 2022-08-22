#include <stdio.h>
#include <string.h>

int main(void)
{
    struct Coffee   //making coffee a struct makes define the prices for each one neater
    {
        float price;
    };

    typedef struct Coffee Coffee;

    Coffee flatWhite; flatWhite.price = 4.50;
    Coffee cappucino; cappucino.price = 4.70;
    Coffee expresso; expresso.price = 3.50;
    Coffee longBlack; longBlack.price = 4.00;
    Coffee macchiato; macchiato.price = 5.00;

    int ordering = 1;
    const int osLengthMax = 12;
    char orderSelection[osLengthMax];

    while (ordering)
    {
        printf("DejaBrew POS\n\nAvailable coffees:\nFlat White: $%.2f\nCappuccino: $%.2f\nExpresso:   $%.2f\nLong Black: $%.2f\nMacchiato:  $%.2f\n",
        flatWhite.price, cappucino.price, expresso.price, longBlack.price, macchiato.price);

        printf("Select a coffee to order: ");
        fgets(orderSelection, osLengthMax, stdin);

        // using strcasecmp() rather than strcmp() because it is case insensitive
        if (!(strcasecmp(orderSelection, "flat white\n")))  // inverting result of strcasecmp because a match returns zero
        {
            printf("\nflat white selected\n");
        }
    }


}