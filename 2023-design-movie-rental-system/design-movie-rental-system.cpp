class MovieRentingSystem {
public:
    // Comparator for available movies: sort by price, then shop
    struct CompAvailable {
        bool operator()(const pair<int,int> &a,const pair<int,int> &b) const {
            if(a.first == b.first) return a.second < b.second; // tie: shop
            return a.first < b.first;                           // price first
        }
    };

    // Comparator for rented movies: sort by price, then shop, then movie
    struct CompRented {
        bool operator()(const vector<int> &a,const vector<int> &b) const {
            if(a[0] != b[0]) return a[0] < b[0]; // price
            if(a[1] != b[1]) return a[1] < b[1]; // shop
            return a[2] < b[2];                   // movie
        }
    };

    // Data structures
    map<int, set<pair<int,int>, CompAvailable>> available; // movieId -> {price, shop}
    map<pair<int,int>, int> priceMap;                     // {shop, movie} -> price
    set<vector<int>, CompRented> rented;                 // {price, shop, movie}

    // Constructor
    MovieRentingSystem(int n, vector<vector<int>>& entries) {
        for(auto &x : entries){
            int shop = x[0], movie = x[1], price = x[2];
            available[movie].insert({price, shop});
            priceMap[{shop, movie}] = price;
        }
    }

    // Search for top 5 cheapest shops for a movie
    vector<int> search(int movie) {
        vector<int> result;
        if(available.find(movie) == available.end()) return result;
        auto &s = available[movie];
        int k = 5;
        for(auto &p : s){
            if(k-- == 0) break;
            result.push_back(p.second); // shop
        }
        return result;
    }

    // Rent a movie from a shop
    void rent(int shop, int movie) {
        int p = priceMap[{shop, movie}];
        available[movie].erase({p, shop});
        rented.insert({p, shop, movie});
    }

    // Drop a previously rented movie
    void drop(int shop, int movie) {
        int p = priceMap[{shop, movie}];
        rented.erase({p, shop, movie});
        available[movie].insert({p, shop});
    }

    // Report top 5 cheapest rented movies
    vector<vector<int>> report() {
        vector<vector<int>> result;
        int k = 5;
        for(auto &v : rented){
            if(k-- == 0) break;
            result.push_back({v[1], v[2]}); // {shop, movie}
        }
        return result;
    }
};

/**
 * Your MovieRentingSystem object will be instantiated and called as such:
 * MovieRentingSystem* obj = new MovieRentingSystem(n, entries);
 * vector<int> param_1 = obj->search(movie);
 * obj->rent(shop,movie);
 * obj->drop(shop,movie);
 * vector<vector<int>> param_4 = obj->report();
 */
