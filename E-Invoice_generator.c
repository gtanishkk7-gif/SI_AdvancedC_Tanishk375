#include <stdio.h>

int main()
{
    char items[6][20] = {"Rice", "Sugar", "Oil", "Milk", "Biscuit", "Soap"};
    int price[6] = {50, 45, 120, 30, 10, 25};
    int stock[6] = {10, 2, 5, 8, 0, 12};

    int billQty[6] = {0};

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
                printf("%d\t%s\t\t%d\t%d\n",
                       i + 1,
                       items[i],
                       price[i],
                       stock[i]);
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

                if (stock[i] == 0)
                {
                    printf("%s is Not Available.\n", items[i]);
                }
                else
                {
                    printf("Enter Quantity: ");
                    scanf("%d", &qty);

                    if (qty <= 0)
                    {
                        printf("Invalid Quantity!\n");
                    }
                    else if (qty > stock[i])
                    {
                        printf("Only %d %s Available.\n",
                               stock[i],
                               items[i]);
                    }
                    else
                    {
                        billQty[i] += qty;
                        stock[i] -= qty;
                        total += qty * price[i];

                        printf("%s Added To Bill.\n", items[i]);
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
                if (billQty[i] > 0)
                {
                    printf("%s\t\t%d\t%d\t%d\n",
                           items[i],
                           billQty[i],
                           price[i],
                           billQty[i] * price[i]);
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
