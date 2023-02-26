//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        sort(v.begin(), v.end());
    
        // Find the floor value
        for(int i = 0; i < n-1; i++) {
            if (x >= v[i] && x < v[i+1]) {
                return i;
            }
        }
    
        // Check if the floor value is the last element
        if (x >= v[n-1]) {
            return n-1;
        }
    
        // If no floor value is found, return -1
        return -1;
            
        }
};


//{ Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driver Code Ends