class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int greatest = arr[arr.size() - 1];
        arr[arr.size() - 1] = -1;
        int position = arr.size() - 2;

        while (position >= 0) {
            if(arr[position] <= greatest) {
                arr[position] = greatest;
            }
            else {
                int newGreatest = arr[position];
                arr[position] = greatest;
                greatest = newGreatest;
            }
            position--;
        }
        return arr;
    }
};