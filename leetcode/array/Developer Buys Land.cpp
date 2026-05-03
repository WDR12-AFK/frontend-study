#include<iostream>
using namespace std;
#include<vector>
#include<climits>
#include<algorithm>
int main()
{
	int row_num, col_num, num_total = 0;
	cin >> row_num >> col_num;
	vector<int> row_sum(row_num + 1, 0), col_sum(col_num + 1, 0);
	vector<vector<int>> nums(row_num,vector<int>(col_num));
	for(int i=1;i<=row_num;i++){
		for (int j = 1;j <=col_num;j++) {
			int num;
			cin >> num;
			num_total = num_total + num;
			
			nums[i - 1][j - 1] = num;
			row_sum[i] = row_sum[i] + num;
		}
		row_sum[i] = row_sum[i - 1] + row_sum[i];
	}

	for (int i = 1;i <= col_num;i++) {
		for (int j = 1;j <= row_num;j++) {
			col_sum[i] = col_sum[i] + nums[j - 1][i - 1];
		}
		col_sum[i] = col_sum[i - 1] + col_sum[i];
	}

	int min_difference = INT_MAX;
	for (int i = 1;i <= row_num;i++) {
		int difference = abs(num_total - 2 * row_sum[i]);
		if(min_difference>difference)
			min_difference = difference;
	}
	for (int i = 1;i <= col_num;i++) {
		int difference = abs(num_total - 2 * col_sum[i]);
		if (min_difference > difference)
			min_difference = difference;
	}
	cout << min_difference;
	system("pause");
	return 0;
}