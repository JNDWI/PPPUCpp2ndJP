#include "../../std_lib_facilities.h"

int main()
{
	int grain{ 1 };
	int count{ 0 };
	int total_grain{ 0 };
	int target_grain{ 0 };

	cout << "チェスを考案した人に褒美を与える．何グレインのコメを与えたいか，整数で入力してください． ---> ";
	cin >> target_grain;

	while (total_grain < target_grain) {
		int save_grain;
		++count;
		if (count == 1) {
			total_grain += grain;
		}
		else if (count > 1) {
			grain *= 2;
			total_grain += grain;
		}
		cout << count << " 升目 : " << total_grain << " 所有しているグレイン量\n";
	}
}