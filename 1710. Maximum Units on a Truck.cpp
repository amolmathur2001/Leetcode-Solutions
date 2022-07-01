#include<bits/stdc++.h>
using namespace std;
static bool comp(vector<int> &a, vector<int> &b){
    if(a[1] > b[1]){
        return true;
    }
    return false;

}
int maximumUnits(vector<vector<int>>& boxTypes, int truckSize){
    sort(boxTypes.begin(),boxTypes.end(),comp);
    int unit_count = 0;

    for(int i = 0; i < boxTypes.size(); i++){
        if(truckSize >= boxTypes[i][0]){
            // whole space is available, so pick all boxes of that unit;
            unit_count = unit_count + (boxTypes[i][0] * boxTypes[i][1]);
            truckSize = truckSize - boxTypes[i][0];
        }
        else{
            // truck size less than no. of boxes of that type; we take only required box and that unit and add it to the ans;
            unit_count = unit_count + boxTypes[i][1] * truckSize;
        }
    }
    return unit_count;


        
}
int main(){
    vector<vector<int> > boxTypes{
        {1,3},{2,2},{3,1}
    };
    int truckSize = 4;

    cout<<maximumUnits(boxTypes,truckSize);
    //maximumUnits(boxTypes,truckSize);

}
