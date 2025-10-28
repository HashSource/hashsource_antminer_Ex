void __fastcall sub_95110(const char *a1, int a2, int a3)
{
  void *v5; // r8
  void *v6; // r7
  void *v7; // r7
  int v8; // [sp+14h] [bp-4h] BYREF

  v8 = 0;
  v5 = sub_92564(2460128, (int)&v8);
  v6 = sub_92E50();
  sub_94D78(a1, a3 & 2);
  sub_92E68((int)v6);
  if ( a1 )
  {
    v7 = sub_92E50();
    sub_213980(a1, a3);
    sub_92E68((int)v7);
  }
  sub_92648(v5);
}
