//参考:https://atcoder.jp/contests/abc275/submissions/36074099

#include <stdio.h>
#include <string.h>
#include <algorithm>
// #include <string>
// #include <unordered_set>
char s[100][100];
// std::string t(int x) { return std::to_string(x); }
// std::string trans(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
// 	puts((t(x1) + t(y1) + t(x2) + t(y2) + t(x3) + t(y3) + t(x4) + t(y4)).c_str());
// 	return t(x1) + t(y1) + t(x2) + t(y2) + t(x3) + t(y3) + t(x4) + t(y4);
// }
int main() {
	for(int i = 0; i < 9; i ++) scanf("%s", s[i]);
	// std::unordered_set<std::string> set;
	int res = 0;
	for(int x1 = 0; x1 < 9; x1 ++) for(int y1 = 0; y1 < 9; y1 ++) if(s[x1][y1] == '#')
		for(int x2 = 0; x2 < 9; x2 ++) for(int y2 = 0; y2 < 9; y2 ++) if(s[x2][y2] == '#')
			if(x1 != x2 || y1 != y2) {
				int dx = x2 - x1, dy = y2 - y1;
				int x3 = x2 + dy, y3 = y2 - dx;
				int x4 = x1 + dy, y4 = y1 - dx;
				if(x3 >= 0 && y3 >= 0 && x4 >= 0 && y4 >= 0) {
					// printf("(%d,%d),(%d,%d),(%d,%d),(%d,%d)\n", x1, y1, x2, y2, x3, y3, x4, y4);
					if(s[x3][y3] == '#' && s[x4][y4] == '#') res ++;
				}
			}
	printf("%d\n", res >> 2);
	// printf("%d\n", int(set.size()) >> 2);
	return 0;
}