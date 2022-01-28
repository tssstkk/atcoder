int main()
{
  int d, t, s;
  scanf("%d %d %d", &d, &t, &s);
  double ans = (double)d / s;
  if (ans <= t)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
}

