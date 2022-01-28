#include <stdlib.h>

int main()
{
  int n;
  scanf("%d", &n);
  char s[11];
  // 何回出たか
  int cnt[n];
  // nのとこが重複なしの人数、11のとこが名前
  char name[n][11];
  int i, j, count = 0;
  for (i = 0; i < n; i++)
  {
    cnt[i] = 0;
  }
  
  for (i = 0; i < n; i++)
  {
    scanf("%s", s);
    // 被りがあるか
    for (j = 0; j < n; j++)
    {
      // 被りがない場合
      if (j == count)
      {
        strcpy(name[count], s);
        count++;
        cnt[j]++;
        break;
      }
      // 被りがあった場合
      if (strcmp(s, name[j]) == 0)
      {
        cnt[j]++;
        break;
      }
    }
  }
  
  int max_cnt = 0, max_cnt_num = 0;
  for (i = 0; i < count; i++)
  {
    if (max_cnt < cnt[i])
    {
      max_cnt = cnt[i];
      max_cnt_num = i;
    }
  }
  printf("%s\n", name[max_cnt_num]);
}
