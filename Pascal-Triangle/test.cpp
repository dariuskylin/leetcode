/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  11/12/2013 12:20:35 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
#include "Pascal-Triangle.h"
#include <vector>
using namespace std;
int main()
{
    Solution s;
    vector<vector<int> > ret = s.generate(5);
    cout<<"Rows Number:"<<ret.size()<<endl;
    for(int i=0; i<ret.size(); i++)
    {
        cout<<"[";
        for(int j=0; j<ret[i].size();j++)
            cout<<ret[i][j]<<"  ";
        cout<<"]"<<endl;
    }
    vector<vector<int> > ret1 = s.generate(1);
    cout<<"Rows Number:"<<ret1.size()<<endl;
    for(int i=0; i<ret1.size(); i++)
    {
        cout<<"[";
        for(int j=0; j<ret1[i].size();j++)
            cout<<ret1[i][j]<<"  ";
        cout<<"]"<<endl;
    }

    return 0;
}
