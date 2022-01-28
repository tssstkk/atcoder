int main()
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if (a == b)
    printf("%d\n", c);
  else if (b == c)
    printf("%d\n", a);
  else if (c == a)
    printf("%d\n", b);
  else
    printf("0\n");
}
