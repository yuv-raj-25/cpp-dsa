#include <iostream>
using namespace std;


int knapSack(int W, int wt[], int val[], int n)
{
	int i, w;
	vector<vector<int> > K(n + 1, vector<int>(W + 1));

	for (i = 0; i <= n; i++) {
		for (w = 0; w <= W; w++) {
			if (i == 0 || w == 0)
            {
K[i][w] = 0;
            }
			else if (wt[i - 1] <= w)
            {

            }
			else
            {
                
            }
				K[i][w] = K[i - 1][w];
		}
	}
	return K[n][W];
}

int main()
{
	int profit[] = { 60, 100, 120 };
	int weight[] = { 10, 20, 30 };
	int W = 50;
	int n = sizeof(profit) / sizeof(profit[0]);

	cout << knapSack(W, weight, profit, n)<<endl;

	return 0;
}

