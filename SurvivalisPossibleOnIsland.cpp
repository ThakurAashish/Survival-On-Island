#include <bits/stdc++.h>
using namespace std;

void survival(int S, int N, int M)
{
    // if we can not buy at least a week supply of food during the first week
    // OR we can not buy a day supply of food om 1st day tjem we cant survive
    if (((N * 6) < (M * 7) && S > 6) || M > N)
        cout << "No\n";
    else
    {
        // if we can survive then we can buy ceil(A/N) 
        // times where A is total units of food required
        int days = (M * S) / N;
        if (((M * S) % N) != 0)
            days++;
        cout << "Yes " << days << endl;
    }
}
int main()
{
    int S = 10, N = 16, M = 2;
    survival(S, N, M);
    return 0;
}