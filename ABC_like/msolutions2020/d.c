int main()
{
  int n;
  scanf("%d", &n);
  int a[n];
  int dansa = 0, kakaku = 200;
  long sum = 1000, buy = 0;
  int i;
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  i = 1;
  while (i < n)
  {
    if (a[i - 1] >= a[i])
      i++;
    else
    {
      buy = sum / a[i - 1];
      sum += (a[i] - a[i - 1]) * buy;
      i++;
    }
  }
  printf("%ld", sum);
}
