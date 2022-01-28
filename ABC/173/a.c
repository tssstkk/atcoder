int main()
{
  int n;
  scanf("%d", &n);
  int a = n / 1000;
  if (n % 1000 != 0)
    a++;
  printf("%d", a * 1000 - n);
}

