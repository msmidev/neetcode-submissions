class KthLargest {
public:

    priority_queue<int> q {};
    int k;

    KthLargest(int k, vector<int>& nums) : k{k} {
        for(int i : nums)
            q.push(i);
    }
    
    int add(int val) {
        q.push(val);

        vector<int> returns {};
        int ret = 0;

        for(int i = 0; i < k; i++) {
            ret = q.top();
            returns.push_back(ret);
            q.pop();
        }

        for(int i = 0; i < k; i++) {
            q.push(returns.back());
            returns.pop_back();
        }

        return ret;
    }
};
