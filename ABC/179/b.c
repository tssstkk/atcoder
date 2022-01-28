int main()
{
  int n;
  scanf("%d", &n);
  int d[n][3], i, flag = 0;
  for (i = 0; i < n; i++)
  {
    scanf("%d %d", &d[i][0], &d[i][1]);
    if (d[i][0] == d[i][1])
      flag++;
    else if (d[i][0] != d[i][1])
      flag = 0;
    if (flag == 3)
    {
      printf("Yes\n");
      return 0;
    }
  }
  printf("No\n");
}
