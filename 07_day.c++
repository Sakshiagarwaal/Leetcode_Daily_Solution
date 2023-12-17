/*2353. Design a Food Rating System*/



/*solution*/

class FoodRatings {
public:
    struct Comparator {
        bool operator()(pair<int,string> l, pair<int,string> r) {
            if(l.first!=r.first) {
                return l.first<r.first;
            }
            return l.second >= r.second;
        }
    };
    
    unordered_map<string,pair<int,string>> mp1;
   
    unordered_map<string,priority_queue<pair<int,string>, vector<pair<int,string>>, Comparator>> mp2;

    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i=0; i<foods.size(); i++) {
            mp1[foods[i]] = {ratings[i],cuisines[i]};
            mp2[cuisines[i]].push({ratings[i],foods[i]});
        }
    }
    
    void changeRating(string food, int newRating) {
        mp1[food].first = newRating;
        string cuisine = mp1[food].second;
        mp2[cuisine].push({newRating,food});
    }
    
    string highestRated(string cuisine) {
        pair<int,string> highestRated = mp2[cuisine].top();
        while(mp2[cuisine].top().first!=mp1[highestRated.second].first) {
            mp2[cuisine].pop();
            highestRated = mp2[cuisine].top();
        }
        return highestRated.second;
    }
};






string expand(int n) {
    string result = "";
    int divisor = 1;
    
    while(n / divisor > 9) {
        divisor *= 10;
    }

    while(divisor >= 1) {
        int digit = n / divisor;
        result += std::to_string(digit * divisor) + " + ";
        n %= divisor;
        divisor /= 10;
    }

    if (!result.empty()) {
        result.erase(result.length() - 3); 
    }

    return result;
}




int isPerfect(int num) {
    int sum = 1;
    for(int i = 2; i * i <= num; i++) {
        if(num % i==0) {
            if(i * i != num)
                sum = sum + i + num / i;
            else
                sum = sum + i;
        }
    } 
    
    if (sum == num && num != 1)
        return 1;  
    return 0;
}

char* perfectNumbers(int n) {
    char* buffer = malloc(1024);
    buffer[0] = '\0';

    for(int num = 2; num < n; num++) {
        if(isPerfect(num)) {
            char strNum[12];
            sprintf(strNum, "%d  ", num);
            strcat(buffer, strNum);
        }
    }
    buffer = realloc(buffer, strlen(buffer) + 1);

    return buffer;
}