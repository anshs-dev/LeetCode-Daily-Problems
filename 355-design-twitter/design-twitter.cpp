class Twitter {
public:
    unordered_map<int,unordered_set<int>>follows;
    vector<pair<int,int>>v;
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        v.push_back({userId,tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int>result;
        int i=v.size()-1,tweets=0;
        while(i>=0 && tweets<10){
            if(v[i].first==userId || follows[userId].count(v[i].first)) {
            result.push_back(v[i].second);
            tweets++;
        }
            i--;
        }
        return result;
    }
    
    void follow(int followerId, int followeeId) {
        follows[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        follows[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */