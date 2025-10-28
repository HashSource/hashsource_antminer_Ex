int __fastcall sub_246BB0(int a1, unsigned int a2, int a3, unsigned int a4, unsigned int a5, char a6)
{
  unsigned int v8; // [sp+0h] [bp-DCh]
  int v9; // [sp+4h] [bp-D8h]
  int v11; // [sp+Ch] [bp-D0h]
  _QWORD s[26]; // [sp+10h] [bp-CCh] BYREF

  v11 = a1;
  v9 = a3;
  v8 = a4;
  if ( !a1 || !a3 && a4 || a5 > 0xC7 )
    return -1;
  memset(s, 0, 0xC8u);
  while ( v8 >= a5 )
  {
    sub_246AB8((int)s, v9, a5);
    sub_2464A8(s);
    v9 += a5;
    v8 -= a5;
  }
  *((_BYTE *)s + v8) ^= a6;
  *((_BYTE *)s + a5 - 1) = ~(*((_BYTE *)s + a5 - 1) ^ 0x7F);
  sub_246AB8((int)s, v9, v8);
  sub_2464A8(s);
  while ( a2 >= a5 )
  {
    sub_246B40((int)s, v11, a5);
    sub_2464A8(s);
    v11 += a5;
    a2 -= a5;
  }
  sub_246B40((int)s, v11, a2);
  memset(s, 0, 0xC8u);
  return 0;
}
