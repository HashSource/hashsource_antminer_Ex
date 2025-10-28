int __fastcall chip_setting_check_bist_ltc(int a1, int a2, int a3, char a4, int *a5)
{
  size_t v5; // r4
  size_t v6; // r11
  int *v8; // r6
  int v9; // r3
  int v11; // r0
  int v12; // r3
  int v13; // lr
  int v14; // r0
  char *v15; // r4
  char *v16; // r11
  int v17; // r9
  int v18; // r8
  int v20; // r0
  int v21; // r0
  int v22; // r4
  int v24; // r0
  int v25; // [sp+4h] [bp-1080h]
  int v27; // [sp+34h] [bp-1050h]
  char *ptr; // [sp+3Ch] [bp-1048h]
  int v30; // [sp+44h] [bp-1040h]
  int v31; // [sp+4Ch] [bp-1038h] BYREF
  _DWORD v32[2]; // [sp+50h] [bp-1034h] BYREF
  int v33; // [sp+58h] [bp-102Ch]
  int v34; // [sp+5Ch] [bp-1028h]
  int v35; // [sp+60h] [bp-1024h] BYREF
  _BYTE v36[4096]; // [sp+80h] [bp-1004h] BYREF

  v8 = a5;
  if ( a2 )
  {
    v9 = *(_DWORD *)(a1 + 196);
  }
  else
  {
    v9 = 1;
    v5 = 4;
    v6 = 12;
    v27 = 1;
  }
  if ( a2 )
  {
    v27 = v9;
    v6 = 3 * v9;
    v5 = 4 * v9;
  }
  if ( a2 )
    v6 *= 4;
  v31 = 0;
  V_LOCK(a1);
  v11 = logfmt_raw((int)v36, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/chip_setting_ltc.c",
    159,
    "chip_setting_check_bist_ltc",
    27,
    186,
    20,
    v36);
  ptr = (char *)calloc(v6, 1u);
  memset(a5, 0, v5);
  v12 = 0;
  v33 = 0;
  v32[0] = 0;
  v32[1] = 0;
  v34 = 0;
  if ( !a2 )
    v12 = *(_DWORD *)(a1 + 296);
  LOBYTE(v33) = a2;
  v13 = *(_DWORD *)(a1 + 200);
  if ( !a2 )
    LOBYTE(v12) = *(_BYTE *)(v12 + a3);
  BYTE1(v33) = v12;
  HIBYTE(v34) = a4;
  LOBYTE(v34) = a4;
  HIWORD(v33) = 6;
  BYTE1(v34) = v13;
  v14 = (*(int (__fastcall **)(int, _DWORD *, int, char *, int *, int, int, _DWORD))(a1 + 184))(
          a1,
          v32,
          v27,
          ptr,
          &v31,
          v25,
          2000,
          0);
  v30 = v31;
  if ( v31 > 0 )
  {
    v15 = ptr;
    v16 = &ptr[12 * v31];
    do
    {
      v17 = 0;
      if ( *((_WORD *)v15 + 3) == 6 )
        v17 = v15[3] & 1;
      if ( a2 )
      {
        v14 = sub_12C9E0((unsigned __int8)v15[4]);
        a5[v14] = v17;
      }
      else
      {
        *a5 = v17;
      }
      v15 += 12;
    }
    while ( v15 != v16 );
  }
  if ( v27 <= v30
    || (V_LOCK(v14),
        V_INT((int)&v35, "chain"),
        v20 = logfmt_raw((int)v36, 0x1000u),
        V_UNLOCK(v20),
        v21 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/backend_ltc/chip_setting_ltc.c",
                159,
                "chip_setting_check_bist_ltc",
                27,
                220,
                80,
                v36),
        v27 <= 0) )
  {
    v18 = 0;
  }
  else
  {
    v18 = 0;
    v22 = 0;
    do
    {
      if ( !*v8++ )
      {
        V_LOCK(v21);
        v18 = -1;
        v24 = logfmt_raw((int)v36, 0x1000u);
        V_UNLOCK(v24);
        v21 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/backend_ltc/chip_setting_ltc.c",
                159,
                "chip_setting_check_bist_ltc",
                27,
                225,
                80,
                v36);
      }
      ++v22;
    }
    while ( &a5[v27] != v8 );
  }
  free(ptr);
  return v18;
}
