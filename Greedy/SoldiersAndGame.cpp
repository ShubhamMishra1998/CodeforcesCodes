#include<bits/stdc++.h>
using namespace std;
#define LL long long int
#define ULL unsigned LL
#define PII pair<int, int>
int p[5000005];
int ans[5000006];
int main() {
    int t;
    for (int i = 2; i <= 5000004; i++) {
        if (p[i] != 0)
            continue;
        for (int j = i; j <= 5000005; j += i) {
            int cj = j;
            while (cj % i == 0) {
                cj /= i;
                p[j]++;
            }
        }
    }
    for (int i = 2; i <= 5000004; i++) {
        ans[i] = ans[i - 1] + p[i];
    }
    cin >> t;
    int a, b;
    while (t--) {
        scanf("%d %d", &a, &b);
        printf("%Ld\n", ans[a] - ans[b]);
    }
 
    return 0;
}