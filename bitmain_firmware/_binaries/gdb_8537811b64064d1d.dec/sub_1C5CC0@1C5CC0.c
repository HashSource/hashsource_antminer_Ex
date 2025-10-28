int __fastcall sub_1C5CC0(int a1, const char *a2, int a3)
{
  int v5; // r4
  int v6; // r0
  unsigned int v7; // r5
  _BYTE v9[7]; // [sp+0h] [bp-24h] BYREF
  char v10; // [sp+7h] [bp-1Dh] BYREF

  v5 = 0;
  v6 = sub_26EBD0(a3);
  v7 = v6;
  while ( 1 )
  {
    sub_258BFC(v6);
    v6 = sub_FA86C(v5 + v7, (int)&v10, 1);
    if ( !v10 )
      break;
    ++v5;
  }
  if ( v5 )
    sub_FA86C(v7, (int)v9, v5);
  v9[v5] = 0;
  return sub_25A440(a1, a2, v9);
}
