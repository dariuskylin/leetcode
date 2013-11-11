/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Remove-Nth-Node-From-End-of-List.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/12/2013 01:45:18 AM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _REMOVE_NTH_NODE_FROM_END_OF_LIST_H_
#define _REMOVE_NTH_NODE_FROM_END_OF_LIST_H_

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    /* 
     * 这里题意已经说明n是有意义的，省去了很多有效性判断。
     * 设置两个快慢指针，初始都指向头指针。先由快指针向前移动n步，然后快慢指针一起向后移动，
     * 直到快指针指向链表尾，此时慢指针指向的就是倒数n个节点。
     * 为了删除慢指针指向的这个指针，我们还需要一个指向慢指针前一个节点的指针preNode。
     * 如果要删除的倒数第n个节点是末尾节点，不需要特殊处理；但是如果这个节点是头节点，
     * 就需要特别的处理一下了，因为删除了head指针，必须返回head->next（即使为NULL）.
     * 很容易可以得出，如果遇到n刚好是节点个数的时候，快指针先走的时候，就会指向末尾。
     * */
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(!head || !n) 	return head;
        ListNode *faster = head, *slower = head, *preNode = NULL;
        for(int i = 0; i < n; i++)
        	faster = faster->next;
        //n等于节点个数的特殊情况，也就是要删除的是头节点
        if(!faster)
        	return head->next;
        while(faster)
        {
        	faster = faster->next;
        	slower = slower->next;
        	if(!preNode) 
        		preNode = head;
        	else 	
        		preNode = preNode->next;
        }
        preNode->next = slower->next;
        return head;
    }
};
#endif  // _REMOVE_NTH_NODE_FROM_END_OF_LIST_H_
