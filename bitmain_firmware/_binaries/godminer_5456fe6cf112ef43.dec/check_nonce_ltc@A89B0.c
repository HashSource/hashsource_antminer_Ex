int __fastcall check_nonce_ltc(int a1, int a2)
{
  int v3; // r1
  int v4; // r4
  unsigned int v5; // r6
  unsigned int v6; // r0
  int v7; // r3
  _DWORD *v8; // r3
  int v9; // r4
  int v10; // r2
  unsigned int v11; // t1
  unsigned int v12; // t1
  bool v13; // cf
  int v15; // r0
  int v16; // r2
  int v17; // r0
  int v18; // r0
  int v19; // r0
  _BYTE v20[32]; // [sp+10h] [bp-1070h] BYREF
  _DWORD dest[20]; // [sp+30h] [bp-1050h] BYREF
  _BYTE v22[4096]; // [sp+80h] [bp-1000h] BYREF

  v3 = *(unsigned __int8 *)(a2 + 85);
  v4 = *(_DWORD *)(a1 + 624);
  v5 = *(_DWORD *)(v4 + 4 * (v3 + 4864));
  memcpy(dest, (const void *)(v4 + 80 * v3 + 9216), sizeof(dest));
  dest[19] = bswap32(*(_DWORD *)(a2 + 80));
  scrypt_regenhash(v20, dest, 80);
  v6 = target_to_diff_ltc(v20);
  if ( v6 <= 0x1A )
  {
    V_LOCK(v6);
    v18 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v18);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ltc/backend_ltc.c",
      154,
      "check_nonce_ltc",
      15,
      461,
      20,
      v22);
    return 2;
  }
  v7 = *(unsigned __int8 *)(a2 + 84);
  if ( (v7 & 0x20) != 0 )
  {
    if ( v6 > 0x2F )
      goto LABEL_4;
    V_LOCK(v6);
    v15 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v15);
    v16 = 467;
LABEL_13:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ltc/backend_ltc.c",
      154,
      "check_nonce_ltc",
      15,
      v16,
      20,
      v22);
    return 3;
  }
  if ( v6 != v7 + 16 )
  {
    V_LOCK(v6);
    v19 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v19);
    v16 = 472;
    goto LABEL_13;
  }
LABEL_4:
  if ( v5 <= v6 )
  {
    v8 = dest;
    v9 = v4 + 32 * (*(unsigned __int8 *)(a2 + 85) + 624);
    v10 = v9 + 32;
    while ( 1 )
    {
      v11 = *--v8;
      v6 = v11;
      v12 = *(_DWORD *)(v10 - 4);
      v10 -= 4;
      v13 = v6 >= v12;
      if ( v6 > v12 )
        break;
      if ( !v13 || v9 == v10 )
        return 0;
    }
  }
  V_LOCK(v6);
  v17 = logfmt_raw((int)v22, 0x1000u);
  V_UNLOCK(v17);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/backend_ltc.c",
    154,
    "check_nonce_ltc",
    15,
    478,
    20,
    v22);
  return 1;
}
