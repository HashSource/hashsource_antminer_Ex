int __fastcall sub_1615C(int a1)
{
  char *v1; // r4
  bool v2; // cc
  int v3; // r5
  const char *v4; // r6
  int v5; // r0
  _DWORD v7[3]; // [sp+4h] [bp-Ch] BYREF

  v1 = (char *)&off_3C1CA4;
  sub_197B28(v7, a1);
  v2 = v7[0] != 0;
  if ( v7[0] )
    v2 = (unsigned int)(v7[0] - 2) > 1;
  v3 = 4 * v7[0];
  if ( !v2 )
  {
    v1 = (char *)&off_3C1CA4 + v3;
    v4 = (const char *)sub_19581C(v7[0], v7[1], v7[2]);
    sub_92564(1659928, v4);
    sub_92F8C(
      1,
      "malformed linespec error: unexpected %s, \"%s\"",
      *(const char **)((char *)&off_3C1CA4 + v3 + 840),
      v4);
  }
  v5 = sub_92F8C(1, "malformed linespec error: unexpected %s", *(const char **)&v1[v3 + 840]);
  return sub_161E4(v5);
}
