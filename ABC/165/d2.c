int main()
{
  long a, b, n;
  scanf("%ld %ld %ld", &a, &b, &n);
  
  long x;
  if (n < b)
    x = n;
  else
    x = b - 1;
  long ans, t1, t2, t3;
  t1 = a * x / b;
  t2 = a;
  t3 = x / b;
  ans = t1 - t2 * t3;
  printf("%ld", ans);
}
