int main()
{
  int n;
  scanf("%d", &n);
  int i, a, b, c, cnt;
  cnt = 0;
  for (a = 1; 1; a++)
  {
    if (a * 1 + 1 > n)
      break;
    for (b = 1; 1; b++)
    {
      c = n - a * b;
      if (c >= 1)
        cnt++;
      else
        break;
    }
  }
  printf("%d\n", cnt);
}
