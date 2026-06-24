#include <stdio.h>

struct Item
{
    char name[20];
    int price;
    int stock;
    int billQty;
};

int main()
{
    struct Item items[6] = {
        {"Rice", 50, 10, 0},
        {"Sugar", 45, 2, 0},
        {"Oil", 120, 5, 0},
        {"Milk", 30, 8, 0},
        {"Biscuit", 10, 0, 0},
        {"Soap", 25, 12, 0}
    };

    int choice, itemNo, qty;
    int total = 0;

    while (1)
    {
        printf("\n========== DMART INVOICE ==========\n");
        printf("1. View Inventory Stock\n");
        printf("2. Purchase Items\n");
        printf("3. Checkout & Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nItem No\tItem\t\tPrice\tStock\n");

            for (int i = 0; i < 6; i++)
            {
                printf("%d\t%-10s\t%d\t%d\n",
                       i + 1,
                       items[i].name,
                       items[i].price,
                       items[i].stock);
            }
        }

        else if (choice == 2)
        {
            printf("\nEnter Item Number: ");
            scanf("%d", &itemNo);

            if (itemNo < 1 || itemNo > 6)
            {
                printf("Invalid Item Number!\n");
            }
            else
            {
                int i = itemNo - 1;

                if (items[i].stock == 0)
                {
                    printf("%s is Not Available.\n",
                           items[i].name);
                }
                else
                {
                    printf("Enter Quantity: ");
                    scanf("%d", &qty);

                    if (qty <= 0)
                    {
                        printf("Invalid Quantity!\n");
                    }
                    else if (qty > items[i].stock)
                    {
                        printf("Only %d %s Available.\n",
                               items[i].stock,
                               items[i].name);
                    }
                    else
                    {
                        items[i].billQty += qty;
                        items[i].stock -= qty;
                        total += qty * items[i].price;

                        printf("%s Added To Bill.\n",
                               items[i].name);
                    }
                }
            }
        }

        else if (choice == 3)
        {
            printf("\n========== DMART FINAL BILL ==========\n");
            printf("Item\t\tQty\tPrice\tAmount\n");

            for (int i = 0; i < 6; i++)
            {
                if (items[i].billQty > 0)
                {
                    printf("%-10s\t%d\t%d\t%d\n",
                           items[i].name,
                           items[i].billQty,
                           items[i].price,
                           items[i].billQty * items[i].price);
                }
            }

            printf("-------------------------------------\n");
            printf("Total Amount : Rs.%d\n", total);
            printf("Thank You For Shopping At DMart!\n");
            break;
        }

        else
        {
            printf("Invalid Choice! Please Try Again.\n");
        }
    }

    return 0;
}