class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int tx = target[0];
        int ty = target[1];
        int n = drones.size();
        int minDst = INT_MAX; 
        int ansIndex = -1;
        for(int i=0; i<n; i++){
            int x= drones[i][0];
            int y= drones[i][1];
            int range= drones[i][2];
            int dst = abs(x-tx)+abs(y-ty);
        if (dst <= range && dst < minDst) {
                minDst = dst;       
                ansIndex = i;
            }
        }
        return ansIndex;
        }
    
};