class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> isvisited(n, false);
        
        queue<int> q;
        q.push(0);
        isvisited[0] = true;

        while(!q.empty()){
            int room = q.front();
            q.pop();

            for(int key : rooms[room]){
                if(!isvisited[key]){
                    isvisited[key] = true;
                    q.push(key);
                }
            }
        }
        for(auto x : isvisited){
            if(x==false){
                return false;
            }
        }
        return true;
    }
};