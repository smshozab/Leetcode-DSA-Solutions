class MyHashMap {public:
   vector<int>hm;
   MyHashMap() {
       int size=1000001;
       // for(int i=0;i<9999999;i++)
       //
    hm.push_back(-1);
       hm.resize(size);
       fill(hm.begin(),hm.end(),-1);
   }
       void put(int key, int value) {
       hm[key]=value;
   }
       int get(int key) {
       return hm[key];
   }
       void remove(int key) {
       hm[key]=-1;
   }};/** * Your MyHashMap object will be instantiated and called as such: * MyHashMap* obj = new MyHashMap(); * obj->put(key,value); * int param_2 = obj->get(key); * obj->remove(key); */