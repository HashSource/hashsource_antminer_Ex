int __fastcall check_nonce_dash(int a1, int a2)
{
  char *v4; // r1
  int v5; // r1
  int v6; // r10
  int v7; // r4
  unsigned int v8; // r9
  int v9; // r3
  char *v10; // r2
  char *v11; // r3
  char v12; // r1
  unsigned int v13; // r0
  unsigned int v14; // r4
  unsigned int v15; // r3
  _DWORD *v16; // r3
  int v17; // r10
  int v18; // r2
  unsigned int v19; // r0
  unsigned int v20; // t1
  unsigned int v21; // t1
  bool v22; // cc
  int v24; // r3
  int v25; // r1
  int v26; // r3
  int v27; // r1
  int v28; // r3
  int v29; // r1
  _DWORD v30[7]; // [sp+30h] [bp-1094h] BYREF
  int v31; // [sp+4Ch] [bp-1078h]
  _BYTE v32[32]; // [sp+50h] [bp-1074h] BYREF
  _DWORD v33[20]; // [sp+70h] [bp-1054h] BYREF
  char v34[4100]; // [sp+C0h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v4) = -7948;
  HIWORD(v4) = (unsigned int)&loc_12D594 >> 16;
  V_INT((int)v30, v4, *(int *)(a1 + 140));
  logfmt_raw(
    v34,
    0x1000u,
    0,
    v31,
    v30[0],
    v30[1],
    v30[2],
    v30[3],
    v30[4],
    v30[5],
    v30[6],
    v31,
    "nonce %llx back wc %d",
    *(_DWORD *)(a2 + 48),
    *(unsigned __int8 *)(a2 + 53));
  V_UNLOCK();
  LOWORD(v5) = 30144;
  HIWORD(v5) = (unsigned int)&sensors_ckb >> 16;
  zlog(g_zc, v5, 156, "check_nonce_dash", 16, 617, 20, v34);
  v6 = *(_DWORD *)(a1 + 624);
  v7 = *(unsigned __int8 *)(a2 + 53);
  v8 = *(_DWORD *)(v6 + 4 * (v7 + 3840));
  v9 = *(_DWORD *)(v6 + 12 * v7 + 19972);
  *(_DWORD *)(a2 + 54) = *(_DWORD *)(v6 + 12 * v7 + 19968);
  *(_DWORD *)(a2 + 58) = v9;
  memcpy(v33, (const void *)(v6 + 80 * v7 + 5120), sizeof(v33));
  v10 = (char *)v33;
  v11 = (char *)(v6 + 80 * v7 + 5120);
  do
  {
    v12 = *v11;
    v11 += 4;
    v10[3] = v12;
    v10[2] = *(v11 - 3);
    v10[1] = *(v11 - 2);
    *v10 = *(v11 - 1);
    v10 += 4;
  }
  while ( v10 != v34 );
  v33[19] = *(_DWORD *)(a2 + 48);
  Xhash(v32, v33);
  v13 = target_to_diff_dash((int)v32);
  v14 = v13;
  if ( v13 <= 0x22 )
  {
    V_LOCK();
    LOWORD(v26) = 30328;
    HIWORD(v26) = (unsigned int)"ease/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/backend_ckb/backend_ckb.c" >> 16;
    logfmt_raw(v34, 0x1000u, 0, v26, v14, *(unsigned __int8 *)(a2 + 52), 35);
    V_UNLOCK();
    LOWORD(v27) = 30144;
    HIWORD(v27) = (unsigned int)&sensors_ckb >> 16;
    zlog(g_zc, v27, 156, "check_nonce_dash", 16, 638, 20, v34);
    v28 = (unsigned __int8)(*(_BYTE *)(a1 + 308) + 1);
    *(_BYTE *)(a1 + 308) = v28;
    if ( v28 )
      return 6;
    else
      return 2;
  }
  else
  {
    v15 = *(unsigned __int8 *)(a2 + 52);
    if ( v15 == v13 )
    {
      if ( v8 > v15 )
      {
LABEL_16:
        V_LOCK();
        logfmt_raw(v34, 0x1000u, 0, "hw diff (%d<%d) not reach pool", *(unsigned __int8 *)(a2 + 52), v8);
        V_UNLOCK();
        LOWORD(v29) = 30144;
        HIWORD(v29) = (unsigned int)&sensors_ckb >> 16;
        zlog(g_zc, v29, 156, "check_nonce_dash", 16, 661, 20, v34);
        return 1;
      }
      else
      {
        v16 = v33;
        v17 = v6 + 32 * (*(unsigned __int8 *)(a2 + 53) + 496);
        v18 = v17 + 32;
        do
        {
          v20 = *--v16;
          v19 = v20;
          v21 = *(_DWORD *)(v18 - 4);
          v18 -= 4;
          v22 = v19 > v21;
          if ( v19 < v21 )
            break;
          if ( v22 )
            goto LABEL_16;
        }
        while ( v18 != v17 );
        return 0;
      }
    }
    else
    {
      V_LOCK();
      LOWORD(v24) = 27268;
      HIWORD(v24) = (unsigned int)&unk_135DB4 >> 16;
      logfmt_raw(v34, 0x1000u, 0, v24, v14, *(unsigned __int8 *)(a2 + 52), v8);
      V_UNLOCK();
      LOWORD(v25) = 30144;
      HIWORD(v25) = (unsigned int)&sensors_ckb >> 16;
      zlog(g_zc, v25, 156, "check_nonce_dash", 16, 647, 20, v34);
      return 3;
    }
  }
}
