int __fastcall sub_20F21C(_DWORD *a1, void (__fastcall *a2)(int, int, int), int a3)
{
  int result; // r0
  int i; // r4
  int v8; // r0
  int v9; // r6
  int v10; // r0
  int v11; // [sp+0h] [bp-24h] BYREF
  _DWORD v12[7]; // [sp+8h] [bp-1Ch] BYREF

  result = sub_C28D0(a1, v12);
  for ( i = result; result; i = result )
  {
    while ( (*(_BYTE *)(i + 33) & 2) == 0 )
    {
      result = sub_C290C((int)v12);
      i = result;
      if ( !result )
        return result;
    }
    v8 = sub_21B804(i);
    sub_21D710(&v11, v8, a1, 1);
    v9 = v11;
    if ( dword_46D448 )
      v10 = sub_21B3EC(i);
    else
      v10 = *(_DWORD *)i;
    a2(v10, v9, a3);
    result = sub_C290C((int)v12);
  }
  return result;
}
