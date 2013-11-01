/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Linked-List-Cycle.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  2013年11月01日 16时00分22秒
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
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
        	else
        		return false;
        	if(slower == faster)
        		return true;
        }
        if(slower != NULL && slower == faster)
        	return true;
        return false;

    }
};

int main()
{
	Solution s;
	ListNode node1(10);
	ListNode node2(11);
	node1.next = &node2;
	node2.next = &node1;
	cout<<(int)s.hasCycle(&node1)<<endl;
	return 0;
}
