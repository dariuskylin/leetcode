/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  11/12/2013 01:57:52 AM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
#include "Remove-Nth-Node-From-End-of-List.h"
using namespace std;
int main()
{
    ListNode node1(1);
    ListNode node2(2);
    ListNode node3(3);
    ListNode node4(4);
    ListNode node5(5);
    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = &node5;
    Solution s;
    ListNode *ret = s.removeNthFromEnd(&node1, 2);
    while(ret)
    {
        cout<<ret->val<<"  ";
        ret = ret->next;
    }    
    cout<<endl;
    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = &node5;
    ListNode *ret2 = s.removeNthFromEnd(&node1, 5);
    while(ret2)
    {
        cout<<ret2->val<<"  ";
        ret2 = ret2->next;
    }    
    cout<<endl;
    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = &node5;
    ListNode *ret3 = s.removeNthFromEnd(&node1, 1);
    while(ret3)
    {
        cout<<ret3->val<<"  ";
        ret3 = ret3->next;
    }    
    cout<<endl;

}
