/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Two-Sum.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/06/2013 11:22:43 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _TWO_SUM_H_
#define _TWO_SUM_H_
#include <vector>
#include <algorithm>
using std::vector;
struct Node {
	int val;
	int seq;
};
bool compare(Node lhs, Node rhs)
{
	return lhs.val < rhs.val;
}
class Solution {
public:
    /* 
     * 对于未排序的数组来说，设置两层for循环遍历是首先可以想到的方法，复杂度为O(N^2)
     * 将未排序的数组排序后再求twosum，可以优化到O(NlogN)复杂度：
     * 新建一个结构体	struct Node {int val; int seq;}；seq用来存储val在原数组的下标
     * 将Node数组排序后，设置两个指针分别指向数组首元素和尾元素，判断两个指针的Node的val和
     * 是否等于target，等于则按照seq从小到大存到返回数组，小于target，那么将首元素指针右移；
     * 大于target，则将尾元素指针左移；循环终止条件是首指针和尾指针相遇。
     * */
    vector<int> twoSum(vector<int> &numbers, int target) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        vector<int> indexs;
        if(numbers.size() < 2)
        	return indexs;
        vector<Node> Nodes(numbers.size());
        for(int idx = 0; idx < numbers.size(); idx++)
        	Nodes[idx].val = numbers[idx], Nodes[idx].seq = idx + 1;
        // 排序，复杂度O(NlogN)
        std::sort(Nodes.begin(), Nodes.end(), compare);
        int lptr = 0, rptr = Nodes.size() - 1;
        int tempSum = 0;
        while(lptr < rptr)
        {
        	tempSum = Nodes[lptr].val + Nodes[rptr].val;
        	if( tempSum == target)
        	{
        		// 返回的两个下标需要从小到大排序
        		if(Nodes[lptr].seq < Nodes[rptr].seq)
        			indexs.push_back(Nodes[lptr].seq), indexs.push_back(Nodes[rptr].seq);
        		else
        			indexs.push_back(Nodes[rptr].seq), indexs.push_back(Nodes[lptr].seq);
        		break;
        	}
        	else if( tempSum < target)
        		lptr++;
        	else
        		rptr--;
        }
        return indexs;
    }
};
#endif  // _TWO_SUM_H_
