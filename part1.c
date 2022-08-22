#include <stdio.h>
#include <string.h>

void orderQuantity(int orderCountArray[5], int ocIndex)
{
    printf("\nHow many to order?\n");
    scanf("%d", &orderCountArray[ocIndex]);
    ocIndex++;
}

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

    int orderCounts[5];
    int ocIndex = 0;

    float total = 0;

    while (ordering)
    {
        printf("DejaBrew POS\n\nAvailable coffees:\nFlat White: $%.2f\nCappuccino: $%.2f\nExpresso:   $%.2f\nLong Black: $%.2f\nMacchiato:  $%.2f\n",
        flatWhite.price, cappucino.price, expresso.price, longBlack.price, macchiato.price);

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
            orderQuantity(orderCounts, ocIndex);
            //printf("recently inputted quantity: %d\n", orderCounts[ocIndex]);
            total += orderCounts[ocIndex] * flatWhite.price;

        }
        else if (!(strcasecmp(orderSelection, "cappuccino\n")))
        {
            ;
        }

        //printf("ordercount 0: %d\n", orderCounts[ocIndex]);
        //ordering = 0;

    }

    printf("The total for your order is: $%.2f\n", total);


}