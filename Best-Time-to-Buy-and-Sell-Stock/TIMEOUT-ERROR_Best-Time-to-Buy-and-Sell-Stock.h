/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Best-Time-to-Buy-and-Sell-Stock.h
 *    Description:  
 *        Version:  1.0
 *        Created:  2013年11月02日 14时44分37秒
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef BEST_TIME_TO_BUY_AND_SELL_STOCK_H_
#define BEST_TIME_TO_BUY_AND_SELL_STOCK_H_
#include <vector>
using std::vector;
class Solution {
public:
    /*
     * 通过股票的一次买和一次卖得到最大收益
     * 最简单的思路是枚举出所有的买的时间和卖的时间，得出每一个（买，卖）的收益来
     * 从所有的收益中找出最大的收益，复杂度为O(N*N)
     * 这个算法的实现在Leetcode平台上不能通过，TIMEOUT，说明需要小于O(N*N)的算法来实现。
     */
    int maxProfit(vector<int> &prices) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(prices.size() < 2)
        	return 0;
        int max = 0;
        for(int i = 0; i < prices.size() -1; i++)
        {
        	for(int j = i + 1; j < prices.size(); j++)
        	{
        		if(prices[i] - prices[j] > max)
        		{
        			max = prices[i] - prices[j];
        		} 
        	}
        }
        return max;
    }
};
#endif  // BEST_TIME_TO_BUY_AND_SELL_STOCK_H_
