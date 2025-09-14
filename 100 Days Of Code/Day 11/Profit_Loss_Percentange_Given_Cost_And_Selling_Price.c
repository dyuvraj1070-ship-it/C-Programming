#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitLoss, percent;

    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        profitLoss = sellingPrice - costPrice;
        percent = (profitLoss / costPrice) * 100;
        printf("Profit = %.2f%%\n", percent);
    }
    else if (costPrice > sellingPrice) {
        profitLoss = costPrice - sellingPrice;
        percent = (profitLoss / costPrice) * 100;
        printf("Loss = %.2f%%\n", percent);
    }
    else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
