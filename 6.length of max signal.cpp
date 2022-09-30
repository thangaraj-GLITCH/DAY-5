#include <bits/stdc++.h>
using namespace std;

	pair<int, int> countOneAndZero(string s)
	{
		int one = 0, zero = 0;
		
		for(int i = 0; i < s.length(); i++) 
		{
			if(s[i] == '1') 
			else		
				zero++;
		}
		
		return {one, zero};
	}
int countString(int i, int one, int zero, int& maxZero, int& maxOne,
			vector<string>& arr)
	{
		if(i >= arr.size()) 
			return 0;
		
	
		if(one > maxOne || zero > maxZero)
			return 0;
		
		
		pair<int, int> p = countOneAndZero(arr[i]);
		
		
		
		int ans1 = 0, ans2 = 0, ansWithout = 0;
		
	
		if(one + p.first <= maxOne && zero + p.second <= maxZero)
		{
			
			ans1 = 1 + countString(i + 1, one + p.first, zero + p.second,
						maxZero, maxOne, arr);
			
			
			ans2 = countString(i + 1, one, zero, maxZero, maxOne, arr);
		}
		else 
		{
			ansWithout = countString(i + 1, one, zero, maxZero, maxOne, arr);
		}
		
	
		return max({ans1, ans2, ansWithout});
		
		
	}
				
int main() {

	vector<string> arr = { "10", "0001", "1",
						"111001", "0" };

	
	int N = 3, M = 5;
	
	int idx=0;
	int one=0;
	int zero=0;
	cout << countString(idx,one,zero,M, N, arr);
}
