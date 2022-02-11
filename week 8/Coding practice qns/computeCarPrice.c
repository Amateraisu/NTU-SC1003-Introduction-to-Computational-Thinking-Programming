#include <stdio.h>
int main()
{
    int category;
    float list_price, category_price, after_discounted;
    float luxury_tax = 0.0, gst_tax = 0.0;
    float total, total_tax;
    int categories[] = {70000, 80000, 23000, 600};

    // getting user input
    printf("Please enter the list price: \n");
    scanf("%f", &list_price);
    printf("Please enter the category:\n");
    scanf("%d", &category);

    after_discounted = list_price * (9.0 / 10.0);
    if (after_discounted > 100000)
    {
        luxury_tax = after_discounted / 10;
    }
    gst_tax = (after_discounted / 100) * 3;

    if (category == 1)
    {
        category_price = categories[category - 1];
    }
    else if (category == 2)
    {
        category_price = categories[category - 1];
    }
    else if (category == 3)
    {
        category_price = categories[category - 1];
    }
    else
        category_price = categories[category - 1];
    printf("%f\n", category_price);
    total_tax = gst_tax + luxury_tax;
    total = total_tax + after_discounted + category_price;
    printf("Total price is %.2f", total);

    return 0;
}