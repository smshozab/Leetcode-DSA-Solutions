class MyHashSet {public:
   int M; //size
   vector<list<int>>buckets;
   int getIndex(int key){
       return key%M;
   }
       MyHashSet() {
       M=15000;
       buckets=vector<list<int>>(M,list<int>{});
   }
       void add(int key) {
       int index=getIndex(key);
       auto itr=find(buckets[index].begin(),buckets[index].end(),key);
       if(itr==buckets[index].end()){
           buckets[index].push_back(key);
       }
   }
       void remove(int key) {
       int index=getIndex(key);
       auto itr=find(buckets[index].begin(),buckets[index].end(),key);
       if(itr!=buckets[index].end()){
           buckets[index].erase(itr);
       }
   }
       bool contains(int key) {
       int index=getIndex(key);
       auto itr=find(buckets[index].begin(),buckets[index].end(),key);
       return itr!=buckets[index].end();
   }};/** * Your MyHashSet object will be instantiated and called as such: * MyHashSet* obj = new MyHashSet(); * obj->add(key); * obj->remove(key); * bool param_3 = obj->contains(key); */