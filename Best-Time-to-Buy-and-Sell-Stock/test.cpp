/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  2013年11月02日 14时51分15秒
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
#include <vector>
#include "Best-Time-to-Buy-and-Sell-Stock.h"
using namespace std;
int main()
{
    Solution s;
    vector<int> prices;
    for(int i = 10; i > 0; i--)
        prices.push_back(i);
    int max = s.maxProfit(prices);
    cout<<max<<endl;
    return 0;
}
