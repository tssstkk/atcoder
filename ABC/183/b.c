int main()
{
  int sx, sy, gx, gy;
  int gx2, gy2;
  scanf("%d %d %d %d", &sx, &sy, &gx, &gy);
  gx2 = gx;
  gy2 = -1 * gy;
  double ans;
  ans = sx - (double)sy * (gx2 - sx) / (gy2 - sy);
  printf("%lf", ans);
}
