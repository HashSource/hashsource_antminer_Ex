int __fastcall sub_2102CC(_BYTE *a1)
{
  int v2; // r4
  char *v3; // r0
  int v4; // r0
  _DWORD *v6; // r0

  v2 = sub_15D5B4();
  v3 = sub_20F57C(a1, 0);
  sub_15E134((int)v3);
  v4 = sub_15D5B4();
  if ( v2 != v4 )
    return sub_1BABDC(8);
  v6 = (_DWORD *)sub_243004(v4);
  return sub_240510(*v6, 8);
}
