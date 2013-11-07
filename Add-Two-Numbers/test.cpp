/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  11/08/2013 12:26:51 AM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
#include "Add-Two-Numbers.h"
using namespace std;
int main()
{
    ListNode l11(2);
    ListNode l12(4);
    ListNode l13(3);
    ListNode l21(5);
    ListNode l22(6);
    ListNode l23(4);
    l11.next = &l12;
    l12.next = &l13;
    l21.next = &l22;
    l22.next = &l23;
    Solution s;
    ListNode *ret = s.addTwoNumbers(&l11, &l21);
    while(ret)
    {
        cout<<ret->val<<"  ";
        ret = ret->next;
    }
    cout<<endl;
    return 0;
}
