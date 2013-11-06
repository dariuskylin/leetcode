/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Remove-Duplicates-from-Sorted-List.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/07/2013 12:35:20 AM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _REMOVE_DUPLICATES_FROM_SORTED_LIST_H_
#define _REMOVE_DUPLICATES_FROM_SORTED_LIST_H_

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    /* 
     * 思路比较简单，遍历所有结点，如果当前结点的下一个节点值与当前
     * 节点值相等，那么删除下个节点；如果不相等，则将当前指针指向下
     * 一个节点。
     * 当当前指针指向最后一个节点时就是循环终止条件。
     * */
    ListNode *deleteDuplicates(ListNode *head) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(!head || head->next == NULL)
        	return head;
        ListNode *ptr = head;
        while(ptr && ptr->next)
        {
        	if(ptr->next->val == ptr->val)
        	{
        		ptr->next = ptr->next->next;
        	}
        	else
        		ptr = ptr->next;
        }
        return head;
    }
};
#endif  // _REMOVE_DUPLICATES_FROM_SORTED_LIST_H_
