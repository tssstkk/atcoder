int main()
{
  int n;
  char s[8];
  scanf("%d %s", &n, s);
  if (s[n - 1] == 'o')
    printf("Yes\n");
  else
    printf("No\n");
}
