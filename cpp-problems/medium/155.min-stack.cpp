/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */

// @lc code=start
class MinStack {
private:
    vector<pair<int,int>> v;

public:
    MinStack() {
        
    }
    void push(int val) {
        if (v.empty()) {
            v.push_back(make_pair(val,val));
        } else {
            int previous_min = v.back().second;
            v.push_back(make_pair(val, min(previous_min,val)));
        }
    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
        return v.back().first;
    }
    
    int getMin() {
        return v.back().second;
    }
};


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

