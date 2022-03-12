#include <stdio.h>
#include <utility>
#include <algorithm>
#include <vector>
int ri() {
	int n;
	scanf("%d", &n);
	return n;
}
int main() {
	int n = ri();
	std::vector<int> a(1 << n);
	for (auto &i : a) i = ri();
	int half = 1 << (n - 1);
	int max = std::max_element(a.begin(), a.end()) - a.begin();
	auto start = max < half ? a.begin() + half : a.begin();
	printf("%d\n", (int) (std::max_element(start, start + half) - a.begin() + 1));
	
	return 0;
}