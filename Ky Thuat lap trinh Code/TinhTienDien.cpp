#include <stdio.h>

int calculateTotalCost(int X1, int Y1, int X2, int Y2, int X3, int Y3, int A1, int B1, int C1, int A2, int B2, int C2, int A3, int B3, int C3) {
    int cost1 = 0, cost2 = 0, cost3 = 0;

    if (Y1 <= 50) {
        cost1 = Y1 * A1;
    } else if (Y1 <= 150) {
        cost1 = 50 * A1 + (Y1 - 50) * B1;
    } else {
        cost1 = 50 * A1 + 100 * B1 + (Y1 - 150) * C1;
    }

    if (Y2 <= 200) {
        cost2 = Y2 * A2;
    } else if (Y2 <= 1000) {
        cost2 = 200 * A2 + (Y2 - 200) * B2;
    } else {
        cost2 = 200 * A2 + 800 * B2 + (Y2 - 1000) * C2;
    }

    if (Y3 <= 100) {
        cost3 = Y3 * A3;
    } else if (Y3 <= 200) {
        cost3 = 100 * A3 + (Y3 - 100) * B3;
    } else {
        cost3 = 100 * A3 + 100 * B3 + (Y3 - 200) * C3;
    }

    int totalCost = cost1 + cost2 + cost3;

    return totalCost;
}

int main() {
    int X1, Y1, X2, Y2, X3, Y3;
    int A1, B1, C1, A2, B2, C2, A3, B3, C3;
    
    // Đọc dữ liệu từ file PAY.INP
    FILE *inputFile = fopen("PAY.INP", "r");
    fscanf(inputFile, "%d %d %d %d %d %d", &X1, &Y1, &X2, &Y2, &X3, &Y3);
    fscanf(inputFile, "%d %d %d %d %d %d %d %d %d", &A1, &B1, &C1, &A2, &B2, &C2, &A3, &B3, &C3);
    fclose(inputFile);

    int totalCost = calculateTotalCost(X1, Y1, X2, Y2, X3, Y3, A1, B1, C1, A2, B2, C2, A3, B3, C3);

    // Ghi kết quả vào file PAY.OUT
    FILE *outputFile = fopen("PAY.OUT", "w");
    fprintf(outputFile, "%d\n", totalCost);
    fclose(outputFile);

    return 0;
}
