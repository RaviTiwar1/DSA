#include<bits/stdc++.h>
using namespace std;

long long int maxProfit(vector<int>& prices) {
    long long int res = 0;
    prices.insert(prices.begin(), 0);
    for(int i = 1; i < prices.size(); i++) {
        res += max(prices[i] - prices[i - 1], 0);
    }
    return res;
}
 
int main()
{
    vector<int>a = {4,1,2,3};
    vector<int>b = {1, 2, 3, 3, 2, 1, 5};
    vector<int>c = {1000000000, 1, 2, 2, 1000000000, 1, 1000000000};
    cout<<maxProfit(a);
    cout<<maxProfit(b);
    cout<<maxProfit(c);

    return 0;
}
