int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
  int n, k;
  scanf("%d %d", &n, &k);
  int p[n], i;
  for (i = 0; i < n; i++)
    scanf("%d", &p[i]);
  qsort(p, n, sizeof(int), compare_int);
  int sum = 0;
  for (i = 0; i < k; i++)
    sum += p[i];
  printf("%d", sum);
}
