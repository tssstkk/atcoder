int main()
{
  long long a, b;
  scanf("%lld %lld", &a, &b);
  if (b >= a && b <= 6 * a)
    printf("Yes");
  else
    printf("No");
}
