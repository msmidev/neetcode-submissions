class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        class Compare {
            public:
                bool operator()(vector<int> p1, vector<int> p2) {
                    int d1 = p1[0]*p1[0] + p1[1]*p1[1];
                    int d2 = p2[0]*p2[0] + p2[1]*p2[1];
                    return d1 < d2;
                }
        };

        priority_queue<vector<int>, vector<vector<int>>, Compare> maxHeap {};

        for(vector<int> point : points) {
            maxHeap.push(point);
            if (maxHeap.size() > k)
                maxHeap.pop();
        }

        vector<vector<int>> results {};
        while(!maxHeap.empty()) {
            results.push_back(maxHeap.top());
            maxHeap.pop();
        }

        return results;
    }
};
