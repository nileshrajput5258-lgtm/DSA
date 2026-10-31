class Solution {
public:
    long long validSubstringCount(string word1, string word2) {

        int n = word1.size();
        int m = word2.size();

        if (n < m) return 0;

        vector<int> freq(26, 0);

        for (char ch : word2) {
            freq[ch - 'a']++;
        }

        int left = 0;
        long long ans = 0;

        for (int right = 0; right < n; right++) {

            freq[word1[right] - 'a']--;

            while (true) {

                bool valid = true;

                for (int i = 0; i < 26; i++) {
                    if (freq[i] > 0) {
                        valid = false;
                        break;
                    }
                }

                if (!valid) break;

                freq[word1[left] - 'a']++;
                left++;
            }

            ans += left;
        }

        return ans;
    }
};