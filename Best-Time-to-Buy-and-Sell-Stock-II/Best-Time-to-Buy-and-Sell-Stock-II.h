/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Best-Time-to-Buy-and-Sell-Stock-II.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/03/2013 12:09:51 AM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
class Solution {
public:
    /* 
     * 这道题目比较简单，只因题目已经设置了限制条件：在买前必须卖出手里有的股票
     * 要获得最大收益，只需买入最多次的股票，而每次卖出都希望能收益
     * 可以看出这个题目符合贪心策略
     * */
    int maxProfit(vector<int> &prices) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if( prices.size() < 2)
            return 0;
        int sumProfit = 0;
        int temp = 0;
        for( int i = 0; i < prices.size() - 1; i++)
        {
            temp = prices[i+1] - prices[i];
            if( temp > 0 )
                sumProfit += temp;
        }
        return sumProfit;
    }
};
