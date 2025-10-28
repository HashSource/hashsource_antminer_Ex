_DWORD *__fastcall sub_2E369C(_DWORD *a1, char a2, int a3, void *a4, unsigned int a5)
{
  unsigned int v5; // r3
  char v8; // [sp+4h] [bp-48h]
  _DWORD src[8]; // [sp+10h] [bp-3Ch] BYREF
  _DWORD *v12; // [sp+30h] [bp-1Ch]
  int v13; // [sp+34h] [bp-18h]
  unsigned int v14; // [sp+38h] [bp-14h]
  unsigned int v15; // [sp+3Ch] [bp-10h]
  void *s; // [sp+40h] [bp-Ch]
  unsigned int i; // [sp+44h] [bp-8h]

  v8 = a3;
  s = a1;
  v15 = a1[48];
  v14 = a3 + 8 * v15;
  a1[66] += v14;
  if ( v14 > a1[66] && !++a1[67] && !++a1[68] )
    ++a1[69];
  sub_2D7E6C(src, a1[66]);
  sub_2D7E6C(&src[1], a1[67]);
  sub_2D7E6C(&src[2], a1[68]);
  sub_2D7E6C(&src[3], a1[69]);
  if ( !v14 )
  {
    a1[69] = 0;
    a1[68] = a1[69];
    a1[67] = a1[68];
    a1[66] = a1[67];
  }
  v13 = 128 >> v8;
  v5 = v15++;
  *((_BYTE *)s + v5) = a2 & -(128 >> v8) | (128 >> v8);
  memset((char *)s + v15, 0, 192 - v15);
  if ( v15 > 0xAE )
  {
    sub_2D823C(a1);
    a1[69] = 0;
    a1[68] = a1[69];
    a1[67] = a1[68];
    a1[66] = a1[67];
    memset(s, 0, 0xC0u);
  }
  sub_2D7E20((_WORD *)s + 87, 32 * a5);
  memcpy((char *)s + 176, src, 0x10u);
  sub_2D823C(a1);
  v12 = a1 + 50;
  for ( i = 0; i < a5; ++i )
    sub_2D7E6C(&src[i], v12[i]);
  memcpy(a4, src, 4 * a5);
  return sub_2D7EC4(a1, 32 * a5);
}
