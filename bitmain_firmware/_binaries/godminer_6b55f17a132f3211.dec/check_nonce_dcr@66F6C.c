int __fastcall check_nonce_dcr(int a1, int a2)
{
  int v2; // r5
  int v4; // r4
  unsigned int v5; // r3
  int v6; // r0
  _DWORD *v7; // r12
  int v8; // r1
  int v9; // r2
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  unsigned int v14; // r0
  unsigned int v15; // r3
  _BYTE *v16; // r5
  unsigned __int8 *v17; // r4
  int v18; // r0
  unsigned int v19; // r2
  unsigned int v20; // r3
  int v22; // r0
  int v23; // r0
  int v24; // r0
  unsigned int v25; // [sp+14h] [bp-10E0h]
  _BYTE v26[32]; // [sp+1Ch] [bp-10D8h] BYREF
  _DWORD s[45]; // [sp+3Ch] [bp-10B8h] BYREF
  _BYTE v28[4100]; // [sp+F0h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 65);
  v4 = *(_DWORD *)(a1 + 776);
  v5 = *(_DWORD *)(v4 + 4 * (v2 + 7040));
  v2 *= 180;
  v25 = v5;
  memset(s, 0, sizeof(s));
  memcpy(s, (const void *)(v4 + v2 + 5120), 0x8Cu);
  v6 = *(_DWORD *)(a2 + 52);
  v7 = (_DWORD *)(v4 + v2 + 5271);
  v8 = *(_DWORD *)(a2 + 56);
  v9 = *(_DWORD *)(a2 + 60);
  s[35] = *(_DWORD *)(a2 + 48);
  s[36] = v6;
  s[37] = v8;
  s[38] = v9;
  v10 = v7[1];
  v11 = v7[2];
  v12 = v7[3];
  s[39] = *v7;
  s[40] = v10;
  s[41] = v11;
  s[42] = v12;
  v13 = v7[5];
  s[43] = v7[4];
  s[44] = v13;
  decred_hash(v26, s);
  v14 = target_to_diff_dcr((int)v26);
  if ( v14 <= 0x26 )
  {
    V_LOCK(v14);
    v24 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
      170,
      "check_nonce_dcr",
      15,
      531,
      20,
      v28);
    return 2;
  }
  else
  {
    v15 = *(unsigned __int8 *)(a2 + 64);
    if ( v15 == v14 )
    {
      if ( v25 > v15 )
      {
LABEL_11:
        V_LOCK(v14);
        v22 = logfmt_raw((int)v28, 0x1000u);
        V_UNLOCK(v22);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
          170,
          "check_nonce_dcr",
          15,
          549,
          20,
          v28);
        return 1;
      }
    }
    else if ( v25 > v14 )
    {
      V_LOCK(v14);
      v23 = logfmt_raw((int)v28, 0x1000u);
      V_UNLOCK(v23);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
        170,
        "check_nonce_dcr",
        15,
        536,
        40,
        v28);
      return 3;
    }
    v16 = s;
    v17 = (unsigned __int8 *)(v4 + 32 * *(unsigned __int8 *)(a2 + 65) + 28704);
    do
    {
      V_LOCK(v14);
      --v16;
      --v17;
      v18 = logfmt_raw((int)v28, 0x1000u);
      V_UNLOCK(v18);
      v14 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer"
              "-origin_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
              170,
              "fulltest_dcr",
              12,
              446,
              20,
              v28);
      v19 = (unsigned __int8)*v16;
      v20 = *v17;
      if ( v19 < v20 )
        break;
      if ( v19 > v20 )
        goto LABEL_11;
    }
    while ( v26 != v16 );
    return 0;
  }
}
