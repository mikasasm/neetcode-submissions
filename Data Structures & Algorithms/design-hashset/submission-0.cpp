class MyHashSet {
public:
    vector<int> nums;

    MyHashSet() {
        
    }
    
    void add(int key) {
        for(int x : nums) {
            if(x == key)
                return;
        }
        nums.push_back(key);
    }
    
    void remove(int key) {
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == key) {
                nums.erase(nums.begin() + i);
                return;
            }
        }
    }
    
    bool contains(int key) {
        for(int x : nums) {
            if(x == key)
                return true;
        }
        return false;
    }
};