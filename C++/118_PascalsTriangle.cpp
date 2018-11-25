#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > ans;
        if(numRows == 0){
            return ans;
        }else{
            vector<int> tem;
            queue<int> Q;
            tem.push_back(1);
            ans.push_back(tem);
            Q.push(0), Q.push(1), Q.push(1);
            for(int k = 1; k < numRows; k++){
                vector<int> tep;
                Q.push(0);
                int s, e;
                do{
                    s = Q.front();
                    Q.pop();
                    e = Q.front();
                    if(e){
                        tep.push_back(e);
                    }
                    Q.push(s + e);
                }while(e);
                ans.push_back(tep);
            }
        }
        return ans;
    }
};