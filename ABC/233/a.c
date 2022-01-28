int main()
{
  int x, y;
  scanf("%d %d", &x, &y);
  int i = 0;
  while (x + 10 * i < y)
  {
    i++;
  }
  printf("%d\n", i);
}
