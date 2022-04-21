#include<bits/stdc++.h>
using namespace std;
class MyHashSet{
    public:
    vector<bool> ans;
    MyHashSet(){
        ans.resize(1e6+1,false);

    }
    void add(int key){
        ans[key] = true;
    }
    void remove(int key){
        ans[key] = false;
    }
    bool contain(int key){
        if(ans[key]){
            return true;
        }
        return false;
    }


};
int main(){
    MyHashSet h;
    
}
