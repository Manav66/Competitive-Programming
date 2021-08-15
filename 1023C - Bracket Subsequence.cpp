#include <bits/stdc++.h>

using namespace std;

int const N = 2e5 + 1;
int n, k;
char s[N], r[N];

int main() {
  scanf("%d %d", &n, &k);
  scanf("%s", s);
  r[k] = '\0';

  int o = k / 2, c = o;
  for(int i = 0, j = 0, cur; i < n; ++i) {
    if(s[i] == '(') {
      if(o > 0)
        r[j++] = '(', ++cur;
      --o;
    } else {
      if(c > 0 && cur > 0)
        r[j++] = ')', --cur;;
      --c;
    }
  }

  printf("%s\n", r);

  return 0;
}
