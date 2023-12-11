class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int, int> m;
		for(int i = 0; i < arr.size(); i++){
			m[arr[i]]++;
		}
		for(auto i : m){
			if(i.second > arr.size() / 4){
				return i.first;
			}
		}
		return arr[0];
    }
};
