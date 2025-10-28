int __fastcall sub_32B3EC(int a1, char a2, int a3, int a4, unsigned int a5)
{
  int result; // r0
  unsigned int v8; // [sp+14h] [bp-20h]
  unsigned int v9; // [sp+18h] [bp-1Ch]
  unsigned int v10; // [sp+1Ch] [bp-18h]
  unsigned int v11; // [sp+20h] [bp-14h]
  unsigned int v12; // [sp+24h] [bp-10h]
  unsigned int i; // [sp+2Ch] [bp-8h]

  v12 = *(_DWORD *)(a1 + 128);
  *(_DWORD *)(a1 + 196) += 8 * v12 + a3;
  v11 = *(_DWORD *)(a1 + 196);
  v10 = *(_DWORD *)(a1 + 200);
  v9 = *(_DWORD *)(a1 + 204);
  v8 = *(_DWORD *)(a1 + 208);
  if ( v12 || a3 )
  {
    *(_BYTE *)(a1 + v12) = -(128 >> a3) & a2 | (128 >> a3);
    if ( v12 > 0x6D )
    {
      memset((void *)(a1 + v12 + 1), 0, 127 - v12);
      sub_320D00((_DWORD *)a1, a1);
      memset((void *)a1, 0, 0x6Eu);
      *(_DWORD *)(a1 + 208) = 0;
      *(_DWORD *)(a1 + 204) = *(_DWORD *)(a1 + 208);
      *(_DWORD *)(a1 + 200) = *(_DWORD *)(a1 + 204);
      *(_DWORD *)(a1 + 196) = *(_DWORD *)(a1 + 200);
    }
    else
    {
      memset((void *)(a1 + v12 + 1), 0, 109 - v12);
    }
  }
  else
  {
    *(_BYTE *)a1 = 0x80;
    memset((void *)(a1 + 1), 0, 0x6Du);
    *(_DWORD *)(a1 + 208) = 0;
    *(_DWORD *)(a1 + 204) = *(_DWORD *)(a1 + 208);
    *(_DWORD *)(a1 + 200) = *(_DWORD *)(a1 + 204);
    *(_DWORD *)(a1 + 196) = *(_DWORD *)(a1 + 200);
  }
  sub_3197F4(a1 + 110, v11);
  sub_3197F4(a1 + 114, v10);
  sub_3197F4(a1 + 118, v9);
  sub_3197F4(a1 + 122, v8);
  *(_WORD *)(a1 + 126) = __PAIR16__((32 * a5) >> 24, 32 * a5);
  result = sub_320D00((_DWORD *)a1, a1);
  for ( i = 0; i < a5; ++i )
    result = sub_3197F4(a4 + 4 * i, *(_DWORD *)(a1 + 4 * (i + 32) + 4));
  return result;
}
