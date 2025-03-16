int maxProfitAssignment(int* difficulty, int difficultySize, int* profit, int profitSize, int* worker, int workerSize) {
    int i, j, totalProfit = 0;

    for (i = 0; i < workerSize; i++) {
        int maxProfit = 0;

        for (j = 0; j < difficultySize; j++) {
            if (worker[i] >= difficulty[j]) {
                if (profit[j] > maxProfit) {
                    maxProfit = profit[j];
                }
            }
        }

        totalProfit += maxProfit;
    }

    return totalProfit;
}
