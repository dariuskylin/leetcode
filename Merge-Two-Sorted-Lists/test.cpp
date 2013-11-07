/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  11/07/2013 04:37:37 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include "Merge-Two-Sorted-Lists.h"
#include <iostream>
using namespace std;
int main()
{
    ListNode l11(1);
    ListNode l12(3);
    ListNode l13(7);
    ListNode l14(14);
    l11.next = &l12;
    l12.next = &l13;
    l13.next = &l14;

    ListNode l21(2);
    ListNode l22(9);
    l21.next = &l22;

    Solution s;
    ListNode *ret = s.mergeTwoLists(&l11, &l21);
    while(ret)
    {
        cout<<ret->val<<"  ";
        ret = ret->next;
    }
    cout<<endl;

    ListNode case11(2);
    ListNode case21(1);
    ListNode * ret2 = s.mergeTwoLists(&case11, &case21);
    while(ret2)
    {
        cout<<ret2->val<<"  ";
        ret2 = ret2->next;
    }
    cout<<endl;

    ListNode case211(1);
    ListNode case212(3);
    ListNode case213(4);
    case211.next = &case212;
    case212.next = &case213;
    ListNode case221(0);
    ListNode * ret3 = s.mergeTwoLists(&case211, &case221);
    while(ret3)
    {
        cout<<ret3->val<<"  ";
        ret3 = ret3->next;
    }
    cout<<endl;
    return 0;
}
