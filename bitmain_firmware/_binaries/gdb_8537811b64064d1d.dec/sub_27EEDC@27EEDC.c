int __fastcall sub_27EEDC(void *a1)
{
  void *v1; // r11
  int result; // r0

  v1 = off_46DED0;
  off_46DED0 = a1;
  sub_289B4C("\x1B[A", sub_29750C);
  sub_289B4C("\x1B[B", sub_29760C);
  sub_289B4C("\x1B[C", sub_295430);
  sub_289B4C("\x1B[D", sub_295374);
  sub_289B4C("\x1B[H", sub_2954F8);
  sub_289B4C("\x1B[F", sub_295510);
  sub_289B4C("\x1BOA", sub_29750C);
  sub_289B4C("\x1BOB", sub_29760C);
  sub_289B4C("\x1BOC", sub_295430);
  sub_289B4C("\x1BOD", sub_295374);
  sub_289B4C("\x1BOH", sub_2954F8);
  result = sub_289B4C("\x1BOF", sub_295510);
  off_46DED0 = v1;
  return result;
}
