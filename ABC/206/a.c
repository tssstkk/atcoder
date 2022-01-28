int main()
{
  int n;
  scanf("%d", &n);
  int a = 1.08 * n;
  if (a > 206)
    printf(":(\n");
  else if (a == 206)
    printf("so-so\n");
  else
    printf("Yay!\n");
}
