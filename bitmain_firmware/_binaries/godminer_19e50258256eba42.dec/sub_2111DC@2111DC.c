int __fastcall sub_2111DC(int a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  int v5; // r2
  unsigned __int64 v6; // r0
  unsigned int v9; // [sp+8h] [bp-5Ch]
  _DWORD v11[17]; // [sp+14h] [bp-50h] BYREF
  unsigned int j; // [sp+58h] [bp-Ch]
  unsigned int i; // [sp+5Ch] [bp-8h]

  v9 = a2;
  memset(v11, 0, 65);
  if ( (int)a4 <= 1 || a4 > 0x24 || !a2 )
    return 0;
  if ( a2 > 0x41 )
    v9 = 65;
  for ( i = 0; i < v9 - 1; ++i )
  {
    sub_34579C(a3, (int)a4);
    *((_BYTE *)v11 + i) = a0123456789abcd[v5];
    LODWORD(v6) = sub_34579C(a3, (int)a4);
    a3 = v6;
  }
  if ( a3 )
    return 0;
  for ( j = 0; j < v9 - 1; ++j )
    *(_BYTE *)(a1 + j) = *((_BYTE *)v11 + v9 - j - 2);
  *(_BYTE *)(a1 + v9 - 1) = 0;
  return 1;
}
