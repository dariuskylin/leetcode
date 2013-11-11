/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Decode-Ways.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/11/2013 07:53:04 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _DECODE_WAYS_H_
#define _DECODE_WAYS_H_
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    /* 
     * 题目显然是一道DP的题目，用D(n)表示字符串s[1,2,...,n]的解码个数，那么有关系：
     * 1、D(n) = D(n-1) + D(n-2)    当字符s[n]和双字符字符s[n-1,n]都有效时
     * 2、D(n) = D(n-1)             仅有字符s[n]有效时
     * 3、D(n) = D(n-2)				仅有双字符s[n-1,n]有效时
     * 4、D(n) = 0                  其他情况
     * 在判断符合哪种情况时，容易疏漏很多细节，需要考虑较多的特例。
     * */
    int numDecodings(string s) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(s.size() == 0)	return 0;
        if(s.size() == 1 && s[0] == '0')	return 0;
        if(s.size() == 1)	return 1;
        //必须判断，不然如“00”就会被漏掉
        if(s[0] == '0')		return 0;
        vector<int> numSeqs(s.size() + 1);
        numSeqs[0] = 1;
        numSeqs[1] = 1;
        int twoBitOk = 1;
        int oneBitOk = 1;
        for(int i = 2; i <= s.size(); i++)
        {
        	if(s[i-2] == '1'||((s[i-2] == '2')&&(s[i-1] < '7')))
        		twoBitOk = 1;
        	else 
        		twoBitOk = 0;
        	if(s[i-1] != '0')
        		oneBitOk = 1;
        	else 
        		oneBitOk = 0;
        	if(oneBitOk && twoBitOk)
        		numSeqs[i] = numSeqs[i-1] + numSeqs[i-2];
        	else if(oneBitOk)
        		numSeqs[i] = numSeqs[i-1];
        	else if(twoBitOk)
        		numSeqs[i] = numSeqs[i-2];
        	else
        		return 0;

        }
        return numSeqs[s.size()];
    }
};
#endif  // _DECODE_WAYS_H_
