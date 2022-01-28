int main()
{
  long a, b, n;
  scanf("%ld %ld %ld", &a, &b, &n);
  
  long x;
  if (n < b)
    x = n;
  else
    x = b - 1;
  printf("%ld", (a * x / b) - a * (x / b));
}

