class MyHashMap {
    unordered_map<int, int> myMap;

public:
    MyHashMap() {
        myMap = {};
    }
    
    void put(int key, int value) {
        myMap[key] = value;
    }
    
    int get(int key) {
        if(myMap.find(key) == myMap.end())
        {
            return -1;
        }

        return myMap[key];
    }
    
    void remove(int key) {
        if(myMap.find(key) != myMap.end())
        {
            myMap.erase(key);
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */