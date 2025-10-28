int __fastcall Sha256_Final(int a1, _BYTE *a2)
{
  int v2; // r3
  int v3; // r3
  int v4; // r1
  _BYTE *v5; // r3
  unsigned int i; // [sp+8h] [bp-14h]
  unsigned int j; // [sp+8h] [bp-14h]
  int v11; // [sp+Ch] [bp-10h]
  int v12; // [sp+Ch] [bp-10h]
  __int64 v13; // [sp+10h] [bp-Ch]

  v13 = 8LL * *(_QWORD *)(a1 + 32);
  v2 = *(_QWORD *)(a1 + 32) & 0x3F;
  v11 = v2 + 1;
  *(_BYTE *)(a1 + v2 + 40) = 0x80;
  while ( v11 != 56 )
  {
    v12 = v11 & 0x3F;
    if ( !v12 )
      sub_243DB8(a1);
    v3 = v12;
    v11 = v12 + 1;
    *(_BYTE *)(a1 + v3 + 40) = 0;
  }
  for ( i = 0; i <= 7; ++i )
  {
    v4 = v11++;
    *(_BYTE *)(a1 + v4 + 40) = HIBYTE(v13);
    v13 <<= 8;
  }
  sub_243DB8(a1);
  for ( j = 0; j <= 7; ++j )
  {
    *a2 = HIBYTE(*(_DWORD *)(a1 + 4 * j));
    a2[1] = BYTE2(*(_DWORD *)(a1 + 4 * j));
    a2[2] = BYTE1(*(_DWORD *)(a1 + 4 * j));
    v5 = a2 + 3;
    a2 += 4;
    *v5 = *(_DWORD *)(a1 + 4 * j);
  }
  return Sha256_Init(a1);
}
