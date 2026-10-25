class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(trainers.begin(),trainers.end());
        sort(players.begin(),players.end());
        int left = 0;
        int right = 0;
        while(left<trainers.size() && right<players.size())
        {
            if(trainers[left] < players[right])
            {
                left++;
            }
            else
            {
                left++;
                right++;
            }
        }
        return right;
    }
};