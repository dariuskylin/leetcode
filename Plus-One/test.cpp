/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  11/03/2013 04:08:09 AM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
#include "Plus-One.h"
using namespace std;
int main()
{
    vector<int> digits;
    digits.push_back(1);
    digits.push_back(1);
    Solution s;
    vector<int> ret = s.plusOne(digits);
    for(int i = 0; i < ret.size(); i++)
    {
        cout<<ret[i]<<"   ";
    }
    cout<<endl;
    return 0;
}

