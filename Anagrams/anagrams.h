/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  anagrams.h
 *    Description:  
 *        Version:  1.0
 *        Created:  05/24/2015 12:04:30 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _ANAGRAMS_H_
#define _ANAGRAMS_H_
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using std::vector;
using std::string;

/* Failed
class Solution {
public:
    vector<string> anagrams(vector<string> &strs) {
        // write your code here
        vector<string> ret(0);
        if(strs.size() <= 1)
            return ret;
        vector<vector<int> > tbl(0);
        vector<int> visted(strs.size(), 0);
        for(int i=0; i<strs.size(); i++)
        {
            vector<int> col(26, 0);
            tbl.push_back(col);
        }
        for(int i=0; i<strs.size(); i++)
            for(int j=0; j<strs[i].length(); j++)
                tbl[i][strs[i][j]-'a']++;
        for(int i=0; i<strs.size(); i++)
        {
            int flag = 0;
            visted[i] = 1;
            for(int j=i+1; j<strs.size() && visted[j]==0 && tbl[i] == tbl[j]; j++)
            {
                if(flag == 0)
                    ret.push_back(strs[i]);
                flag = 1;
                visted[j] = 1;
                ret.push_back(strs[j]);
            }
        }
        return ret;
    }
};
*/
/*  Time Limit Exceeded
class Solution {
public:
    vector<string> anagrams(vector<string> &strs) {
        // write your code here
        vector<string> ret(0);
        if(strs.size() <= 1)
            return ret;
        vector<vector<int> > tbl(0);
        vector<int> visted(strs.size(), 0);
        for(int i=0; i<strs.size(); i++)
        {
            vector<int> col(26, 0);
            tbl.push_back(col);
        }
        for(int i=0; i<strs.size(); i++)
            for(int j=0; j<strs[i].length(); j++)
                tbl[i][strs[i][j]-'a']++;
        for(int i=0; i<strs.size(); i++)
            for(int j=0; j<strs.size(); j++)
            {
                if(i == j)
                    continue;
                if(tbl[j] == tbl[i])
                {
                    ret.push_back(strs[i]);
                    break;
                }
            }
        return ret;
    }
};
*/

/*  Time Limit Exceeded
class Solution {
public:
    vector<string> anagrams(vector<string> &strs) {
        // write your code here
        vector<string> ret(0);
        if(strs.size() <= 1)
            return ret;
        vector<vector<int> > tbl(0);
        vector<int> visted(strs.size(), 0);
        for(int i=0; i<strs.size(); i++)
        {
            vector<int> col(26, 0);
            tbl.push_back(col);
        }
        for(int i=0; i<strs.size(); i++)
            for(int j=0; j<strs[i].length(); j++)
                tbl[i][strs[i][j]-'a']++;
        for(int i=0; i<strs.size(); i++)
        {
            if(visted[i] == 1)
                continue;
            int flag = 0;
            visted[i] = 1;
            for(int j=i+1; j<strs.size(); j++)
            {
                if(visted[j]==0 && tbl[i] == tbl[j])
                {
                    if(flag == 0)
                        ret.push_back(strs[i]);
                    flag = 1;
                    visted[j] = 1;
                    ret.push_back(strs[j]);
                }
            }
        }
        return ret;
    }
};
*/
class Solution {
public:
    vector<string> anagrams(vector<string> &strs) {
        // write your code here
        vector<string> ret(0);
        std::unordered_map<string, vector<string> > group;
        for(int i=0; i<strs.size(); i++)
        {
            string key = strs[i];
            std::sort(key.begin(), key.end());
            group[key].push_back(strs[i]);
        }

        for(std::unordered_map<string, vector<string> >::iterator it=group.begin(); it !=group.end(); it++)
        {
            if(it->second.size() > 1)
                ret.insert(ret.end(), it->second.begin(), it->second.end());
        }
        return ret;
    }
};

#endif  // _ANAGRAMS_H_
