int main()
{
  long a[4];
  scanf("%ld %ld %ld %ld", &a[0], &a[1], &a[2], &a[3]);
  int i = 0;
  long sum;
  while (i < 4)
  {
    sum = a[0] + a[1] + a[2] + a[3];
    sum -= a[i];
    if (a[i] == sum)
    {
      printf("Yes");
      return 0;
    }
    i++;
  }
  int j;
  for (i = 0; i < 3; i++)
  {
    for (j = i + 1; j < 4; j++)
    {
      sum = a[0] + a[1] + a[2] + a[3];
      sum = sum - a[i] - a[j];
      if (sum == a[i] + a[j])
      {
        printf("Yes");
        return 0;
      }
    }
  }
  printf("No");
  return 0;
}
