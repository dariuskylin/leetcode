/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Linked-List-Cycle.h
 *    Description:  
 *        Version:  1.0
 *        Created:  2013年11月01日 15时30分44秒
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _LINKED_LIST_CYCLE_H_
#define _LINKED_LIST_CYCLE_H_
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	/*
	 * 判断链表是否有环，使用快慢指针来实现
	 * 设置1快1慢两个指针，快指针一次走两步，慢指针一次走一步
	 * 1）如果快慢指针遇到NULL，那么链表肯定是没有环的
	 * 2）链表中有环，那么会出现快指针和慢指针指向一个节点的时候
	 */
    bool hasCycle(ListNode *head) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if( !head )
        	return false;
        ListNode *slower = head;
        ListNode *faster = head;
        while( slower && faster )
        {
        	slower = slower->next;
        	if (faster->next != NULL)
        		faster = faster->next->next;
        	else  // 快指针到了NULL，链表肯定没环
        		return false;
        	if(slower == faster)  // 快指针反超慢指针，快慢指针都指向一个节点，有环。
        		return true;
        }
        if(slower != NULL && slower == faster) // 判断一下推出while循环的条件
        	return true;
        return false;

    }
};
#endif  // _LINKED_LIST_CYCLE_H_
