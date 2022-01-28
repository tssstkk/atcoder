int main()
{
  char n[20];
  scanf("%s", n);
  int sum = 0, i = 0;
  while (n[i] != '\0')
  {
    sum += n[i];
    i++;
  }
  int tmp = sum % 3;
  int k = i;
  if (tmp == 0)
  {
    printf("0\n");
    return 0;
  }
  
  for (i = 0; i < k; i++)
  {
    if (n[i] % 3 == 0)
      continue;
    if (n[i] % 3 == tmp && k != 1)
    {
      printf("1\n");
      return 0;
    }
  }
  int sum2 = sum;
  int cnt = 0;
  
  for (i = 0; i < k; i++)
  {
    if (n[i] % 3 == 0)
      continue;
    if (n[i] % 3 != tmp)
    {
      cnt++;
      if (cnt == 2 && cnt != k)
      {
        printf("2\n");
        return 0;
      }
    }
  }
  printf("-1\n");
}
