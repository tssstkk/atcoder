int main()
{
  long a, b, v, w, t;
  scanf("%ld %ld", &a, &v);
  scanf("%ld %ld", &b, &w);
  scanf("%ld", &t);
  if (v <= w)
  {
    printf("NO");
    return 0;
  }
  long dis;
  if (a > b)
    dis = abs(a-b);
  else
    dis = abs(b-a);
  if (dis - t * (v - w) > 0)
    printf("NO");
  else
    printf("YES");
}
