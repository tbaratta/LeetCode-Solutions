class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for (string detail: details) {
            string ageString = { detail[11], detail[12] };
            int ageInt = stoi(ageString);

            if (ageInt > 60) {
                count++;
            }
        }
        return count;
    }
};