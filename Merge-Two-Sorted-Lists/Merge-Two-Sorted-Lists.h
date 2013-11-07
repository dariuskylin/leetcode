/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Merge-Two-Sorted-Lists.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/07/2013 04:20:17 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _MERGE_TWO_SORTED_LISTS_H_
#define _MERGE_TWO_SORTED_LISTS_H_
#include <iostream>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if( !l1 )	return l2;
        if( !l2 )	return l1;
        ListNode *head = NULL, *ptr = NULL;
        // 为了不破坏输入的l1和l2指针，另外声明指针分别指向l1和l2
        ListNode *lptr = l1, *rptr = l2;
        // 遍历l1和l2的所有节点元素，知道其中一个链表遍历完
        while(lptr && rptr)
        {
        	if(lptr->val <= rptr->val)
        	{
        		// 若head节点还没赋值，则赋值
        		if( !head )
        			head = lptr, ptr = lptr;
        		else
        			ptr->next = lptr, ptr = ptr->next;
        		lptr = lptr->next;
        	}
        	else
        	{
        		// 若head节点还没赋值，则赋值
        		if( !head )
        			head = rptr, ptr = rptr;
        		else
        			ptr->next = rptr, ptr = ptr->next;
        		rptr = rptr->next;
        	}
        }
        // 当while循环结束后，第一个链表还有剩余节点
        while( lptr)
        {
        	ptr->next = lptr;
        	ptr = ptr->next;
        	lptr = lptr->next;
        }
        // 当while循环结束后，第二个链表还有剩余节点
        while( rptr)
        {
        	ptr->next = rptr;
        	ptr = ptr->next;
        	rptr = rptr->next;
        }
        return head;
    }
};
#endif  // _MERGE_TWO_SORTED_LISTS_H_
