#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 1000005;
int dp[maxn];
int n, q;
char str[maxn];
int main() {
	int cas = 1;
	while (scanf("%s", str) != EOF) {
		int len = strlen(str);
		dp[0] = 1;
		for (int i = 1; i < len; i++)
			if (str[i] == str[i-1])
				dp[i] = dp[i-1] + 1;
			else dp[i] = 1;
		printf("Case %d:\n", cas++);
		int l, r;
		scanf("%d", &q);
		while (q--) {
			scanf("%d%d", &l, &r);
			if (l > r)
				swap(l, r);
			if (r - l + 1 <= dp[r])
				printf("Yes\n");
			else printf("No\n");
		}
	}
	return 0;
}
