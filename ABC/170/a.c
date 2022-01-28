int main()
{
  int x[6];
  for (int i = 0; i < 5; i++)
  {
  	scanf("%d", &x[i]);
    if (x[i] == 0)
    {
      printf("%d", i+1);
      return 0;
    }
  }
}

