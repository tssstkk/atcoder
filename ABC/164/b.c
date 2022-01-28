int main()
{
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  
  int i, cnt1 = 0, cnt2 = 0;
  for (i = 0; i * b < c; i++)
    cnt1++;
  for (i = 0; i * d < a; i++)
    cnt2++;
  if (cnt1 <= cnt2)
    printf("Yes");
  else
    printf("No");
}
