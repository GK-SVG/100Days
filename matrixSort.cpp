#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void countSort(vector<int> &v){
    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());
    int range = max - min + 1;
    
    vector<int> cnt(range), ans(v.size());
    for (int i=0; i<v.size(); i++){
        cnt[v[i]-min]++;
    }
    for (int i=1; i<cnt.size(); i++){
        cnt[i] += cnt[i-1];
    }
    for (int i=v.size()-1; i>=0; i--){
        ans[cnt[v[i]-min]-1] = v[i];
        cnt[v[i]-min]--;
    }
    for (int i=0; i<v.size(); i++){
        v[i] = ans[i];
    }
}

int main() {
	int t;
	cin >> t;
	while (t--){
	    int n;
	    cin >> n;
	    vector<int> v(n*n);
	    for (int i=0; i<n*n; i++){
	        cin >> v[i];
	    }
	    countSort(v);
	    for (int e : v){
	        cout << e << " ";
	    }
	    cout << endl;
	}
	return 0;
}
