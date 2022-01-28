int main()
{
  int n;
  scanf("%d", &n);
  if (n <= 599)
    printf("8");
  else if (n <= 799)
    printf("7");
  else if (n <= 999)
    printf("6");
  else if (n <= 1199)
    printf("5");
  else if (n <= 1399)
    printf("4");
  else if (n <= 1599)
    printf("3");
  else if (n <= 1799)
    printf("2");
  else if (n <= 1999)
    printf("1");
}
