int __fastcall sub_288D00(int a1, void *a2)
{
  void *v2; // r5
  int result; // r0

  v2 = off_46DED0;
  off_46DED0 = a2;
  result = sub_288C1C(a1, 0);
  off_46DED0 = v2;
  return result;
}
