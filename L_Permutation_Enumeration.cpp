#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> set_bits;
	int cnt_bit = (int)log2(n) + 1;
	long long a=0,b=0;
	for(int i=0; i<cnt_bit; i++){
		if((1<<i) & n){
			set_bits.push_back(i);
		}else{
			a |= (1<<i);
			b |= (1<<i);
		}
	}
	int sz = 1 << set_bits.size();
	long long ans = -1;
	for(int mask = 0; mask<sz; mask++){
        long long a_copy = a, b_copy = b;
		for(int j=0; j < set_bits.size(); j++){
			if(mask & (1<<j)){
				a_copy |= (1<<set_bits[j]);
			}else{
				b_copy |= (1<<set_bits[j]);
			}
		}
        ans = max(ans, a_copy * 1LL * b_copy);
	}
	cout << ans << "\n";
}