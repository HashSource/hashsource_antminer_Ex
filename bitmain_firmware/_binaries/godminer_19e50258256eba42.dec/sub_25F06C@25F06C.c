const void *__fastcall sub_25F06C(_DWORD *a1, int a2, _DWORD *a3)
{
  int src[32]; // [sp+10h] [bp-ACh] BYREF
  unsigned int v7; // [sp+90h] [bp-2Ch]
  int v8; // [sp+94h] [bp-28h]
  unsigned int v9; // [sp+98h] [bp-24h]
  int *v10; // [sp+9Ch] [bp-20h]
  unsigned int j; // [sp+A0h] [bp-1Ch]
  unsigned int i; // [sp+A4h] [bp-18h]

  v10 = src;
  v9 = (a2 + 63) & 0xFFFFFFC0;
  sub_25E1F0(a1, (int)src);
  for ( i = 0; i < 0x400; i += 2 )
  {
    memcpy((void *)(v9 + (i << 7)), src, 0x80u);
    sub_25E7B4(src, &src[16]);
    sub_25E7B4(&src[16], src);
    memcpy((void *)(v9 + ((i + 1) << 7)), src, 0x80u);
    sub_25E7B4(src, &src[16]);
    sub_25E7B4(&src[16], src);
  }
  for ( i = 0; i < 0x400; i += 2 )
  {
    v8 = src[16] & 0x3FF;
    v7 = v9 + (v8 << 7);
    for ( j = 0; j <= 0xF; ++j )
      *(_QWORD *)&v10[2 * j] ^= *(_QWORD *)(v7 + 8 * j);
    sub_25E7B4(src, &src[16]);
    sub_25E7B4(&src[16], src);
    v8 = src[16] & 0x3FF;
    v7 = v9 + (v8 << 7);
    for ( j = 0; j <= 0xF; ++j )
      *(_QWORD *)&v10[2 * j] ^= *(_QWORD *)(v7 + 8 * j);
    sub_25E7B4(src, &src[16]);
    sub_25E7B4(&src[16], src);
  }
  return sub_25E528(a1, src, a3);
}
