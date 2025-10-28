int __fastcall sub_2B11D0(_DWORD *a1)
{
  int v2; // r5
  int result; // r0
  int v4; // r1
  bool v5; // zf
  _BYTE v6[8]; // [sp+Ch] [bp-8h] BYREF

  if ( !dword_48FC08 )
  {
    dword_48FC08 = 1;
    nullsub_126();
  }
  if ( sub_2A8A2C((int)a1, 0, 0) || sub_2A8800((int)v6, 2u, (int)a1) != 2 )
    return 0;
  if ( v6[0] != 36 || v6[1] != 36 )
  {
    ((void (__fastcall *)(int))loc_2A6C70)(3);
    return 0;
  }
  v2 = a1[40];
  if ( sub_2B0080((int)a1) && sub_2B0938(a1) )
  {
    result = a1[1];
    if ( a1[31] )
      a1[10] |= 0x200u;
  }
  else
  {
    v4 = a1[40];
    v5 = v2 == v4;
    if ( v2 != v4 )
      v5 = v4 == 0;
    if ( !v5 )
      sub_2AD218((int)a1);
    a1[40] = v2;
    return 0;
  }
  return result;
}
