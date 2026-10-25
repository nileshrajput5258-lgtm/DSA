
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> newinterval;
        bool inserts = false;

        for (int i = 0; i < intervals.size(); i++) {
            if (inserts == false && intervals[i][0] >= newInterval[0]) {
                newinterval.push_back(newInterval);
                inserts = true;
            }
            newinterval.push_back(intervals[i]);
        }

        if (inserts == false) {
            newinterval.push_back(newInterval);
        }

        vector<vector<int>> res;

        int start1 = newinterval[0][0];
        int end1 = newinterval[0][1];

        for (int i = 1; i < newinterval.size(); i++) {
            int start2 = newinterval[i][0];
            int end2 = newinterval[i][1];

            if (end1 >= start2) {
                end1 = max(end1, end2);
            }
            else {
                res.push_back({start1, end1});
                start1 = start2;
                end1 = end2;
            }
        }

        res.push_back({start1, end1});
        return res;
    }
};
