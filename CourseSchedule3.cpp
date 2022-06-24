#include<bits/stdc++.h>
using namespace std;
bool comp(vector<int> &a, vector<int> &b){
    return(a[1] < b[1]);
}
int scheduleCourse(vector<vector<int>>& courses){
    sort(courses.begin(),courses.end(),comp);
    for(int i = 0; i < courses.size(); i++){
        for(int j = 0; j < courses[i].size(); j++){
            cout<<courses[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    priority_queue<int> q;
    int time = 0;

    for(int i = 0; i < courses.size(); i++){
        if(time + courses[i][0] <= courses[i][1]){
            //cout<<"Hello again"<<endl;
            time = time + courses[i][0];
            q.push(courses[i][0]);
        }
        else if(!q.empty() && q.top() >= courses[i][0]){
            //cout<<"hello"<<endl;
            time = time - q.top() + courses[i][0];
            q.pop();
            q.push(courses[i][0]);

        }
    }
   // cout<<q.size()<<endl;
    return(q.size());



        
}
int main(){
    vector<vector<int> > courses{
        {5,5},{4,6},{2,6}
    };
    scheduleCourse(courses);

}
