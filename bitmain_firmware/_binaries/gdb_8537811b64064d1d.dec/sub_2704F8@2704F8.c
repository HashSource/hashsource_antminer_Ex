int __fastcall sub_2704F8(int *a1, int a2)
{
  int v5; // r4
  _BYTE *v6; // r0
  int v7; // r3
  _BYTE *v8; // r7
  _BYTE *v9; // r6
  int v10; // [sp+0h] [bp-84h] BYREF
  void *s2[2]; // [sp+4h] [bp-80h] BYREF
  _BYTE v12[16]; // [sp+Ch] [bp-78h] BYREF
  void *s1; // [sp+1Ch] [bp-68h] BYREF
  size_t n; // [sp+20h] [bp-64h]
  _BYTE v15[16]; // [sp+24h] [bp-60h] BYREF
  _BYTE v16[24]; // [sp+34h] [bp-50h] BYREF
  int v17; // [sp+4Ch] [bp-38h]

  if ( !a2 )
    return 0;
  sub_266618(v16);
  if ( !v17 )
    return 0;
  v5 = sub_26EE10(a2, 0, 0);
  sub_255E0C(s2, v5);
  sub_26FD94((int)&s1, a1);
  if ( (void *)n == s2[1] )
  {
    v8 = s1;
    v9 = s2[0];
    if ( !n || !memcmp(s1, s2[0], n) )
    {
      if ( v8 != v15 )
      {
        sub_339E8C(v8);
        v9 = s2[0];
      }
      if ( v9 != v12 )
        sub_339E8C(v9);
      return 0;
    }
  }
  v10 = 0;
  a1[19] = v5;
  sub_270234(&v10, a1, 1, 1);
  v6 = s1;
  v7 = a1[23];
  a1[21] = -1;
  a1[24] = v7;
  if ( v6 != v15 )
    sub_339E8C(v6);
  if ( s2[0] != v12 )
    sub_339E8C(s2[0]);
  return 1;
}
