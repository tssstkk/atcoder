#include <math.h>
int main()
{
  int n;
  scanf("%d", &n);
  long long sum = 0;
  int cnt = 1;
  int ans = 0;
  while (sum < n)
  {
    sum += cnt;
    cnt++;
    ans++;
  }
  printf("%d", ans);
}
