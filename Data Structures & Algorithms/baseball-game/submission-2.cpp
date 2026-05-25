class Solution {
   public:
    int calPoints(vector<string>& operations) {
        vector<int> records;
        for (const string& s : operations) {
            if (s == "+") {
                int n = records.size();
                records.push_back(records[n-1] + records[n-2]);
            } else if (s == "D") {
                records.push_back(2 * records.back());
            }
            else if (s == "C") {
                records.pop_back();
            }
            else {
                records.push_back(stoi(s));
            }
        }
        return accumulate(records.begin(), records.end(), 0);
    }
};