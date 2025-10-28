int __fastcall sub_6E830(int a1, unsigned int a2)
{
  int v2; // r2
  _DWORD *v3; // r0
  int v5; // [sp+4h] [bp-8h] BYREF

  v2 = *(_DWORD *)(a1 + 56);
  v5 = 0;
  v3 = (_DWORD *)sub_6E7C0(a1, a2, v2);
  return sub_14E864(*v3, v3[7], &v5, 0);
}
