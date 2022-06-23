//this is max heap solution; time complexity will be O(nlogn)
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


//There is another solution( binary search )
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int> &heights, int bricks, int ladders, int mid){
    vector<int> diff;
    for(int i = 1; i <= mid; i++){
        if(heights[i+1] > heights[i]){
            diff.push_back(heights[i+1]-heights[i]);

        }

    }
    sort(diff.begin(),diff.end(),greater<int>());
    int l = diff.size();
    for(int i = ladders; i < l; i++){
        if(diff[i] > bricks){
            return false;
        }
        bricks -= diff[i];
    }
    return true;
   
}
void furthestBuilding(vector<int>& heights, int bricks, int ladders){
    int start = 0;
    int end = heights.size()-1;
    int mid = start + (end - start)/2;
    int ans  = -1;
    while(start < end){
        if(check(heights,bricks,ladders,mid)){
            ans = mid;
            start = mid;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    
    cout<<ans<<" ";


}
int main(){
    vector<int> heights{4 , 2 , 7 , 6 , 9 , 14 , 12};
    int bricks = 5;
    int ladders = 1;
    furthestBuilding(heights,bricks,ladders);
    //check(heights,bricks,ladders,3);

}


