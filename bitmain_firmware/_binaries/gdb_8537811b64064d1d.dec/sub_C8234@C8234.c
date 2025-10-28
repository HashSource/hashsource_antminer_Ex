int __fastcall sub_C8234(int a1)
{
  int v2; // r4
  int v3; // r2
  int v4; // r3
  int v5; // r2
  int v6; // r3
  int v7; // r2
  int v8; // r3
  int result; // r0
  _BYTE v10[20]; // [sp+4h] [bp-50h] BYREF
  int v11; // [sp+18h] [bp-3Ch]

  v2 = *(_DWORD *)sub_243004(a1);
  sub_266618(v10);
  if ( v11 )
    sub_2575CC(v2, "addr");
  sub_B76BC(5);
  sub_2573A8(v2, "exec", v3, v4);
  v6 = *(_DWORD *)(a1 + 136);
  if ( v6 )
  {
    sub_2573A8(v2, ", program \"", v5, v6);
    sub_257610(v2, "what", *(_DWORD *)(a1 + 136));
    sub_2573A8(v2, "\" ", v7, v8);
  }
  result = sub_257418(v2);
  if ( result )
    return sub_257610(v2, "catch-type", "exec");
  return result;
}
