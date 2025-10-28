int __fastcall hs_blake2b_init_key(_DWORD *a1, int a2, const void *a3, size_t a4)
{
  unsigned int v4; // r5
  unsigned int v5; // r6
  int v6; // r7
  void (__fastcall **v11)(void *, int, size_t); // r3
  unsigned __int8 v13[4]; // [sp+0h] [bp-D8h] BYREF
  int v14; // [sp+4h] [bp-D4h]
  int v15; // [sp+8h] [bp-D0h]
  int v16; // [sp+Ch] [bp-CCh]
  char v17; // [sp+10h] [bp-C8h]
  char v18; // [sp+11h] [bp-C7h]
  int v19; // [sp+12h] [bp-C6h]
  int v20; // [sp+16h] [bp-C2h]
  int v21; // [sp+1Ah] [bp-BEh]
  __int16 v22; // [sp+1Eh] [bp-BAh]
  int v23; // [sp+20h] [bp-B8h]
  int v24; // [sp+24h] [bp-B4h]
  int v25; // [sp+28h] [bp-B0h]
  int v26; // [sp+2Ch] [bp-ACh]
  int v27; // [sp+30h] [bp-A8h]
  int v28; // [sp+34h] [bp-A4h]
  int v29; // [sp+38h] [bp-A0h]
  int v30; // [sp+3Ch] [bp-9Ch]
  unsigned __int64 s[19]; // [sp+40h] [bp-98h] BYREF

  if ( (unsigned int)(a2 - 1) > 0x3F )
    return -1;
  s[17] = __PAIR64__(v5, v4);
  LODWORD(s[18]) = v6;
  if ( a4 - 1 > 0x3F || a3 == 0 )
    return -1;
  v13[0] = a2;
  v13[1] = a4;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v23 = 0;
  v27 = 0;
  v13[2] = 1;
  v13[3] = 1;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  if ( hs_blake2b_init_param(a1, v13) < 0 )
    return -1;
  memset(s, 0, 0x80u);
  memcpy(s, a3, a4);
  sub_CBDC8((int)a1, s, 0x80u);
  LOWORD(v11) = 19608;
  HIWORD(v11) = (unsigned int)&unk_163B78 >> 16;
  (*v11)(s, 0, 0x80u);
  return 0;
}
