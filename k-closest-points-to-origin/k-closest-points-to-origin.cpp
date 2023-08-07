class Solution {
public:
    double dis(vector<int>& point1){

        double res = pow(pow((point1[0]),2)+pow((point1[1]),2),0.5);
        return res;
    }

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,vector<int>>,vector<pair<double,vector<int>>>,less<>>pq;
        vector<vector<int>> result;
        for(int i=0;i<k;i++){
            double res=dis(points[i]);
            pq.push( {res,points[i]});
        }

        for(int i=k;i<points.size();i++){
            double res=dis(points[i]);
            if(res<pq.top().first){
                pq.pop();
                pq.push({res,points[i]});
            }
        }
        result.reserve(k);
        for (int i = 0; i < k; ++i) {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;

    }
};