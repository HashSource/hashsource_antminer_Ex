int __fastcall get_all_chip_temp_kas(int a1)
{
  __int16 v1; // r0
  int v2; // r0
  int v4; // [sp+4h] [bp-BA8h]
  _BYTE v6[2788]; // [sp+18h] [bp-B94h] BYREF
  _BYTE s[92]; // [sp+AFCh] [bp-B0h] BYREF
  int v8; // [sp+B58h] [bp-54h] BYREF
  _WORD v9[8]; // [sp+B5Ch] [bp-50h] BYREF
  _DWORD v10[4]; // [sp+B6Ch] [bp-40h] BYREF
  _BYTE *v12; // [sp+B80h] [bp-2Ch]
  int v13; // [sp+B84h] [bp-28h]
  int k; // [sp+B88h] [bp-24h]
  FILE *stream; // [sp+B8Ch] [bp-20h]
  int j; // [sp+B90h] [bp-1Ch]
  int i; // [sp+B94h] [bp-18h]
  int v18; // [sp+B98h] [bp-14h]
  int v19; // [sp+B9Ch] [bp-10h]

  memset(s, 0, sizeof(s));
  memset(v10, 0, sizeof(v10));
  v10[2] = 7077889;
  v10[0] = -2147424757;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 296))(a1, v10);
  v13 = *(_DWORD *)(a1 + 372);
  v12 = malloc(12 * v13);
  memset(v9, 0, sizeof(v9));
  LOBYTE(v9[4]) = 1;
  v9[5] = 112;
  (*(void (__fastcall **)(int, _WORD *, int, _BYTE *, int *))(a1 + 316))(a1, v9, v13, v12, &v8);
  usleep((__useconds_t)&stru_186A0);
  (*(void (__fastcall **)(int, _WORD *, int, _BYTE *, int *, int, int, _DWORD))(a1 + 316))(
    a1,
    v9,
    v13,
    v12,
    &v8,
    v4,
    2000,
    0);
  for ( i = 0; i < v8; ++i )
  {
    v19 = v12[12 * i + 4] >> 1;
    if ( v19 >= v13 )
      v19 = 0;
    if ( (sub_162700(*(_DWORD *)&v12[12 * i]) & 0x4000) != 0 )
    {
      s[v19] = 1;
      v1 = sub_162700(*(_DWORD *)&v12[12 * i]);
      *(double *)&v6[8 * v19 + 2048] = ((double)(v1 & 0x1FFF) - 369.43) / 1.3506;
    }
  }
  v18 = 0;
  for ( j = 0; j < v13; ++j )
  {
    if ( s[j] )
      v2 = snprintf(&v6[v18], 2048 - v18, "%5.2f", *(double *)&v6[8 * j + 2048]);
    else
      v2 = snprintf(&v6[v18], 2048 - v18, "  XXX");
    v18 += v2;
  }
  stream = 0;
  stream = fopen("/tmp/temp.txt", "a+");
  for ( k = 0; k < v13; ++k )
  {
    if ( s[k] )
      fprintf(stream, "%5.2f ", *(double *)&v6[8 * k + 2048]);
    else
      fwrite("XXX  ", 1u, 5u, stream);
  }
  fputc(10, stream);
  fflush(stream);
  return 0;
}
