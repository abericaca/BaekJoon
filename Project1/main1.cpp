#include <iostream>
#include <map>
#include <vector>
using namespace std;

int N;
int D[20][20];

void input(int N, int D[20][20]) {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> D[i][j];
		}
	}
}

void get_dp(map<vector<int>, int>& dp) {
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j <= N - i; j++) {
			vector<int> key;
			key.push_back()
		}
	}



}

void solve() {
	int N, D[20][20];
	input(N, D);

	map<vector<int>, int> dp;
	get_dp(dp);
}

int main() {
	solve();

	return 0;
}