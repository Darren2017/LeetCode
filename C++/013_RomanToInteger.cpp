class Solution {
public:
    int romanToInt(string s) {
        queue<char> q;
        char tem1, tem2;
        int len = s.size(), sum = 0;
        for(int i = 0; i < len; i++){
            q.push(s[i]);
        }
        while(!q.empty()){
            tem1 = q.front();
            q.pop();
            tem2 = q.front();
            if(judge(tem1, tem2)){
                sum -= ans(tem1);
            }else{
                sum += ans(tem1);
            }
        }
        return sum;
    }

    bool judge(char a, char b){
        if((a == 'I' && b == 'V') || (a == 'I' && b == 'X')){
            return true;
        }
        if((a == 'X' && b == 'L') || (a == 'X' && b == 'C')){
            return true;
        }
        if((a == 'C' && b == 'D') || (a == 'C' && b == 'M')){
            return true;
        }
        return false;
    }

    int ans(char a){
        switch(a){
            case 'I':{
                return 1;
            }
            case 'V':{
                return 5;
            }
            case 'X':{
                return 10;
            }
            case 'L':{
                return 50;
            }
            case 'C':{
                return 100;
            }
            case 'D':{
                return 500;
            }
            case 'M':{
                return 1000;
            }
        }
        return 0;
    }
};

/*
    采用队列，将s中的字符依次入队后开始出队，
    出队时根据当前元素的下一个元素判断应该加上还是减去该元素的值。
*/