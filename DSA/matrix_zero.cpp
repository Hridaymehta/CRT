#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<bool> getZeroes(const vector<vector<int>>& matrix) {
	int m = matrix.size();
	int n = matrix[0].size();
	vector<bool> row(m, false);
	vector<bool> col(n, false);

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (matrix[i][j] == 0) {
				row[i] = true;
				col[j] = true;
			}
		}
	}

	return row, col;
}

static void setZeroes(vector<vector<int>> matrix, vector<bool>& row, vector<bool>& col) {
	int m = matrix.size();
	int n = matrix[0].size();
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (row[i] || col[j]) {
				matrix[i][j] = 0;
			}
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	vector<vector<int>> matrix = { {0, 2, 0}, {4, 5, 6}, {7, 8, 9} };
	vector<bool> rows, cols;
	setZeroes(matrix, rows, cols);
	return 0;
}