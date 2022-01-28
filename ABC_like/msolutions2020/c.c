int main()
{
  long n, k;
  scanf("%ld %ld", &n, &k);
  int i;
  long a[n];
  for (i = 0; i < n; i++)
    scanf("%ld", &a[i]);
  int j;
  for (i = k; i < n; i++)
  {
    if (a[i - k] < a[i])
      printf("Yes\n");
    else
      printf("No\n");
  }
}
