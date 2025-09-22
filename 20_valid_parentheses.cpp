class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        map<char, char> mp;
        mp[')'] = '(';
        mp[']'] = '[';
        mp['}'] = '{';
        for(auto v: s){
            if(mp.find(v) != mp.end()){
                if(stk.empty() || mp[v] != stk.top())return false;
                stk.pop();
            }
            else stk.push(v);
        }
        return stk.empty();
    }
};
