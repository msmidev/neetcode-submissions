class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        //loop
        int studentsMismatched = 0;
        while (studentsMismatched < students.size()) {
            // student sandwich match
            if (students[0] == sandwiches[0]) {
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                studentsMismatched = 0;
            }
            else {
                students.push_back(students[0]);
                students.erase(students.begin());
                studentsMismatched++;
            }
        }

        return students.size();
    }
};