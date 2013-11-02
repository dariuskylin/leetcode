/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Best-Time-to-Buy-and-Sell-Stock2.h
 *    Description:  
 *        Version:  1.0
 *        Created:  2013年11月02日 17时36分24秒
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef BEST_TIME_TO_BUY_AND_SELL_STOCK2_H_
#define BEST_TIME_TO_BUY_AND_SELL_STOCK2_H_
#include <vector>
using std::vector;
class Solution {
    public:
        /* 
         * 之前用枚举所有（买，卖），得到最大收益的方法是O(N*N)，超时了
         * 我们考虑添加一个额外数组maxN用来存储最大卖价
         * 这个最大卖价是逆序推导的，从pos=prices.size()-1,开始，一只到0结束
         * maxN[pos]表示prices[pos]到prices[prices.size()-1]这几天的最大卖价，
		 * prices[pos]是这一天的买价，那么二者相减，就是收益
         * */
        int maxProfit(vector<int> &prices) {
            // IMPORTANT: Please reset any member data you declared, as
            // the same Solution instance will be reused for each test case.
            if(prices.size() < 2)
                return 0;
            vector<int> maxN(prices.size(), 0);
            int max = 0;
			//注意是逆序，这是求出pos——prices.size()之间的最大卖价
            for(int pos = prices.size() - 1; pos >= 0; pos--)
            {
                max = max < prices[pos]?prices[pos]:max;
                maxN[pos] = max;
            }
            int ret = 0;
            for(int i = 0; i < prices.size(); i++)
            {
                int temp = maxN[i] - prices[i];
                if(temp > ret)
                    ret = temp;
            }
            return ret;
        }
};
#endif  // BEST_TIME_TO_BUY_AND_SELL_STOCK2_H_
