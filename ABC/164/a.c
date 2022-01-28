int main()
{
  int s, w;
  scanf("%d %d", &s, &w);
  if (w >= s)
    printf("unsafe");
  else if (w < s)
    printf("safe");
}
