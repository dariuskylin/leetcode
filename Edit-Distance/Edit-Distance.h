/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Edit-Distance.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/10/2013 06:27:24 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _EDIT_DISTANCE_H_
#define _EDIT_DISTANCE_H_
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    /* 这是典型的DP问题
     * 对字符串A[1,2,...,m]和字符串B[1,2,...,n]，长度分别为m，n
     * 1、若A[m]=B[n]，那么A[1,...,m]和B[1,...,n]的编辑距离应该等于A[1,...,m-1]和B[1,...,n-1]
     * 2、若A[m]!=B[n]，情况就比较复杂：编辑方法分为insert、delete、replace三种。我们需要分别
     *    求出这三种方法的最小值，然后从这三个值中再取最小值。
     *    insert分为对A操作或B操作，所以有两个值，minDistance(A[1,...,m], B[1,...,n-1])和minDistance(A[1,...,m-1], B[1,...,n]) 
     *    delete同样分为对A和B操作，两个值，minDistance(A[1,...,m], B[1,...,n-1])和minDistance(A[1,...,m-1], B[1,...,n])，可以发现与insert具有一样的值 
     *    replace仅有一个值minDistance(A[1,...,m-1], B[1,...,n-1])
     * 3、之前使用自顶向下的递归式方法超时了，下面代码使用了自底向上的方法，避免了递归嵌套，AC
     */
    int minDistance(string word1, string word2) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        int row = word1.size();
        int col = word2.size();
        int minInsert, minDelete, minReplace;
        if(row == 0)       return col;
        if(col == 0)       return row;
        vector< vector<int> > tables(row + 1, vector<int>(col + 1, 0));
        //设置边界值。即A[j]和B[0]之间的距离应该是j
        for(int rowidx = 0; rowidx < row + 1; rowidx++)
            tables[rowidx][0] = rowidx;
        //设置边界值
        for(int colidx = 0; colidx < col + 1; colidx++)
            tables[0][colidx] = colidx;
        for(int rowidx = 1; rowidx < row + 1; rowidx++)
            for(int colidx = 1; colidx < col + 1; colidx++)
            {
                if(word1[rowidx - 1] == word2[colidx - 1])
                {
                    tables[rowidx][colidx] = tables[rowidx-1][colidx-1];
                }
                else
                {
                    //通过insert操作的min距离
                    minInsert = 1 + std::min(tables[rowidx-1][colidx], tables[rowidx][colidx-1]);
                    //通过delete操作的min距离（和minInsert相等，所以可以不计算）
                    /*
                    minDelete = 1 + std::min(tables[rowidx-1][colidx], tables[tables[rowidx][colidx-1]]);
                    */
                    //通过replace操作的min距离
                    minReplace = 1 + tables[rowidx-1][colidx-1];
                    /*
                     * tables[rowidx][colidx]应该是minInsert、minDelete、minReplace三个值的最小值
                     * 而通过观察可以看到minInsert和minDelete是相等的，所以可以省一次比较
                     */
                     tables[rowidx][colidx] = std::min(minInsert, minReplace);
                }
            }
        return tables[row][col];
    }
};
#endif  // _EDIT_DISTANCE_H_
