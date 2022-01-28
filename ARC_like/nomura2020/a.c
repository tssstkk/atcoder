int main()
{
  int h1, m1, h2, m2, k;
  scanf("%d %d %d %d %d", &h1, &m1, &h2, &m2, &k);
  int tmp_h, tmp_m;
  int min;
  if (h2 - h1 > 0)
  {
    tmp_h = h2 - (h1 + 1);
    tmp_m = 60 - m1 + m2;
  }
  else if (tmp_m == 0)
  {
    tmp_h = 0;
    tmp_m = m2 - m1;
  }
  min = tmp_h * 60 + tmp_m;
  printf("%d", min - k);
}
