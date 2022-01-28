int main()
{
  long x;
  scanf("%ld", &x);
  long a = 100;
  long cnt = 0;
  for (int i = 0; a < x; i++)
  {
    a *= 1.01;
    cnt++;
  }
  printf("%ld", cnt);
}
