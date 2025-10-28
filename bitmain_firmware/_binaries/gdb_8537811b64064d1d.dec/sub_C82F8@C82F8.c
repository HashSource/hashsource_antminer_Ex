int __fastcall sub_C82F8(int a1)
{
  int v2; // r4
  _DWORD *v3; // r5
  int v4; // r2
  int v5; // r3
  int v6; // r2
  int v7; // r3
  int result; // r0
  int v9; // r0
  _BYTE v10[20]; // [sp+4h] [bp-50h] BYREF
  int v11; // [sp+18h] [bp-3Ch]

  v2 = *(_DWORD *)sub_243004(a1);
  sub_266618(v10);
  if ( v11 )
    sub_2575CC(v2, "addr");
  v3 = (_DWORD *)(a1 + 136);
  sub_B76BC(5);
  sub_2573A8(v2, "vfork", v4, v5);
  if ( !sub_98FA0(v3, &dword_475848) )
  {
    sub_2573A8(v2, ", process ", v6, v7);
    v9 = ps_getpid_0((int)v3);
    sub_25752C(v2, "what", v9);
    sub_25739C(v2, 1);
  }
  result = sub_257418(v2);
  if ( result )
    return sub_257610(v2, "catch-type", "vfork");
  return result;
}
