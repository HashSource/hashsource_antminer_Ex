void *__fastcall sub_30D118(int a1, char a2, unsigned int a3, void *a4, int a5, const void *a6)
{
  char v10[128]; // [sp+10h] [bp-B4h] BYREF
  __int64 v11; // [sp+90h] [bp-34h]
  __int64 v12; // [sp+98h] [bp-2Ch]
  int v13; // [sp+A4h] [bp-20h]
  unsigned int i; // [sp+A8h] [bp-1Ch]
  size_t n; // [sp+ACh] [bp-18h]

  v13 = 128 >> a3;
  v10[0] = a2 & -(128 >> a3) | (128 >> a3);
  if ( *(_DWORD *)(a1 + 64) || a3 )
    n = 111 - *(_DWORD *)(a1 + 64);
  else
    n = 47;
  memset(&v10[1], 0, n);
  v12 = (*(_QWORD *)(a1 + 200) << 9) + (unsigned int)(8 * *(_DWORD *)(a1 + 64)) + a3;
  v11 = *(_DWORD *)(a1 + 204) >> 23;
  sub_30652C(&v10[n + 1], (int)&v10[n + 1], v11, SHIDWORD(v11));
  sub_30652C(&v10[n + 9], (int)&v10[n + 9], v12, SHIDWORD(v12));
  sub_3066B8(a1, v10, n + 17);
  for ( i = 0; i <= 0xF; ++i )
    sub_306488((int)&v10[4 * i], *(_DWORD *)(a1 + 4 * (i + 34)));
  memcpy(a4, &v10[4 * (16 - a5)], 4 * a5);
  return sub_306664(a1, a6);
}
