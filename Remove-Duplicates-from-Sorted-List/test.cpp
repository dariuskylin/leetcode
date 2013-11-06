/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  11/07/2013 12:43:02 AM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
#include "Remove-Duplicates-from-Sorted-List.h"
using namespace std;
int main()
{
    cout<<"Test Case 1: 1 1 2"<<endl;
    ListNode list1(1);
    ListNode list2(1);
    ListNode list3(2);
    list1.next = &list2;
    list2.next = &list3;
    Solution s;
    ListNode* ret = s.deleteDuplicates(&list1);
    while(ret)
    {
        cout<<ret->val<<"  ";
        ret = ret->next;
    }
    cout<<endl;
    cout<<"Test Case 2: 1 1 2 3 3"<<endl;
    ListNode list21(1);
    ListNode list22(1);
    ListNode list23(2);
    ListNode list24(3);
    ListNode list25(3);
    list21.next = &list22;
    list22.next = &list23;
    list23.next = &list24;
    list24.next = &list25;
    ret = s.deleteDuplicates(&list21);
    while(ret)
    {
        cout<<ret->val<<"  ";
        ret = ret->next;
    }
    cout<<endl;
    cout<<"Test Case 3: 1 1 1"<<endl;
    ListNode list31(1);
    ListNode list32(1);
    ListNode list33(1);
    list31.next = &list32;
    list32.next = &list33;
    ret = s.deleteDuplicates(&list31);
    while(ret)
    {
        cout<<ret->val<<"  ";
        ret = ret->next;
    }
    cout<<endl;
    return 0;
}
