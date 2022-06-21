#include<bits/stdc++.h>
using namespace std;
void furthestBuilding(vector<int>& heights, int bricks, int ladders){
    //create max heap
    priority_queue<int> q;
    int i = 0, diff = 0;
    for(i = 0; i < heights.size()-1; i++){
        diff = heights[i+1] - heights[i];
        cout<<diff<<endl;
        // if diff becomes less than zero that means height of next building is greater than current building 
        if(diff < 0){
            cout<<"Hello "<<endl;
            continue;

        }
        bricks = bricks - diff;
        cout<<bricks<<endl;
        q.push(diff);

        if(bricks < 0){
            bricks += q.top();
            q.pop();
            ladders--;
        }

        if(ladders < 0){
            break;
        }
    }

    cout<<i<<endl;

        
}
int main(){
    vector<int> heights{14, 3, 19, 3};
    //cout<<heights.size()<<" ";
    int bricks = 17;
    int ladders = 0;
    furthestBuilding(heights,bricks,ladders);


}


