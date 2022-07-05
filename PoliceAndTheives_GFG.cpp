// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int catchThieves(char arr[], int n, int k) 
    {
        // Code here 
        vector<int> T;
        vector<int> P;

        for(int i = 0; i < n; i++){
            if(arr[i] == 'T'){
                T.push_back(i);
            }
            if(arr[i] == 'P'){
                P.push_back(i);
            }
        }
        int i = 0, j = 0,count = 0;
        while(i < T.size() && j < P.size()){
            if(abs(T[i] - P[j]) <= k){
                count++;
                i++;
                j++;
            }
            else{
                if(P[j] > T[i]){
                    i++;
                }
                if(P[j] < T[i]){
                    j++;
                }
            }

        }
        return(count);

    }
};

// { Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n >> k;
		char arr[n];
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
		Solution obj;
		cout<<obj.catchThieves(arr, n, k) << endl;
	}
	return 0; 
} 

  // } Driver Code Ends
