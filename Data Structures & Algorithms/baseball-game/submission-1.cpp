class Solution {
   public:
    int calPoints(vector<string>& operations) {
        vector<int> records;
        for (const string& s : operations) {
            if (s == "+") {
                int first = records.back();
                records.pop_back();
                int second = records.back();
                records.push_back(first);
                records.push_back(first + second);
            } else if (s == "D") {
                int last = records[records.size() - 1];
                records.push_back(2 * last);
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