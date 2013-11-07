/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Add-Two-Numbers.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/07/2013 09:03:46 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _ADD_TWO_NUMBERS_H_
#define _ADD_TWO_NUMBERS_H_

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    /* 
     * 链表操作问题，简单的两个链表节点相加即可，唯一要注意的是进位问题，
     * 进位包括中间节点的进位，和最后只有一个节点相加后的遗留进位1需要一个新节点。
     * */
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if( !l1 ) 	return l2;
        if( !l2 )  	return l1;
        int carry = 0;
        int lhs, rhs, tempSum;
        ListNode *head = NULL, *ptr;
        while( l1 || l2)
        {
        	if(l1) 	lhs = l1->val;	else lhs = 0;
        	if(l2)	rhs = l2->val; 	else rhs = 0;
        	tempSum = lhs + rhs + carry;
        	if(tempSum >= 10) 	
        		carry = 1, tempSum -= 10;
        	else
        		carry = 0;
        	if( !head )
        		head = new ListNode(tempSum), ptr = head;
        	else
        		ptr->next = new ListNode(tempSum), ptr = ptr->next;
        	if(l1)
        		l1 = l1->next;
        	if(l2) 
        		l2 = l2->next;
        }
        // 如果最后遗留一个进位1
        if( carry )
        	ptr->next = new ListNode(carry);
        return head;
    }
};
#endif  // _ADD_TWO_NUMBERS_H_
