int __fastcall update_temperature(int a1, _DWORD *a2, int a3)
{
  int v3; // r12
  int v4; // r7
  int v8; // r0
  int v9; // r4
  int v10; // r1
  int v11; // r3
  int v12; // r0
  int v13; // r2
  bool v14; // nf
  int v15; // r0
  _DWORD *v16; // r2
  int v17; // r0
  int v18; // r0
  int v19; // r3
  int v20; // r2
  int v21; // r0
  int v23; // r12
  bool v24; // zf
  int v25; // r2
  int v26; // r0
  int v27; // r0
  int v28; // r1
  int v29; // r0
  int v30; // r1
  int v31; // r0
  int v32; // r0
  int v33; // [sp+34h] [bp-10E0h] BYREF
  int v34; // [sp+38h] [bp-10DCh] BYREF
  int v35; // [sp+3Ch] [bp-10D8h] BYREF
  int v36; // [sp+40h] [bp-10D4h] BYREF
  int v37; // [sp+44h] [bp-10D0h] BYREF
  int v38; // [sp+48h] [bp-10CCh] BYREF
  unsigned int v39; // [sp+4Ch] [bp-10C8h] BYREF
  _BYTE v40[32]; // [sp+50h] [bp-10C4h] BYREF
  _BYTE v41[32]; // [sp+70h] [bp-10A4h] BYREF
  _BYTE v42[32]; // [sp+90h] [bp-1084h] BYREF
  _BYTE v43[32]; // [sp+B0h] [bp-1064h] BYREF
  _BYTE v44[32]; // [sp+D0h] [bp-1044h] BYREF
  _BYTE v45[32]; // [sp+F0h] [bp-1024h] BYREF
  _BYTE v46[4100]; // [sp+110h] [bp-1004h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 154);
  v4 = a3 + 16;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  if ( !v3 )
    return v4;
  v8 = read_temperature(a1, a2, &v33, &v34, &v35, &v36, &v37, &v38, &v39);
  if ( v8 )
  {
    V_LOCK(v8);
    V_INT((int)v40, "chain");
    v27 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v27);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      186,
      "update_temperature",
      18,
      269,
      100,
      v46);
    *(_DWORD *)(a3 + 16) |= 1u;
  }
  LOWORD(v9) = (unsigned __int16)&unk_16B7C8;
  v10 = *(_DWORD *)(a1 + 144);
  if ( v37 )
  {
    v11 = 4 * v10;
    HIWORD(v9) = (unsigned int)&unk_16B7C8 >> 16;
    v23 = v34;
    v24 = v38 == 0;
    *(_DWORD *)(v9 + 4 * v10) = v33;
    a2[5] = v23;
    *(_DWORD *)(v9 + 4 * v10 + 16) = 0;
    if ( !v24 )
    {
LABEL_8:
      v15 = v35;
      *(_DWORD *)(v9 + v11 + 32) = 0;
      a2[4] = v15;
      goto LABEL_9;
    }
  }
  else
  {
    v11 = 4 * v10;
    HIWORD(v9) = (unsigned int)&unk_16B7C8 >> 16;
    v12 = v9 + 4 * v10;
    v13 = *(_DWORD *)(v12 + 16) + 1;
    v14 = *(_DWORD *)(v12 + 16) - 1 < 0;
    *(_DWORD *)(v12 + 16) = v13;
    if ( !(v14 ^ __OFSUB__(v13, 2) | (v13 == 2)) )
    {
      V_LOCK(v12);
      V_INT((int)v41, "chain");
      v32 = logfmt_raw((int)v46, 0x1000u);
      V_UNLOCK(v32);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        186,
        "update_temperature",
        18,
        281,
        100,
        v46);
      v10 = *(_DWORD *)(a1 + 144);
      v11 = 4 * v10;
      *(_DWORD *)(a3 + 16) |= 8u;
    }
    if ( v38 )
      goto LABEL_8;
  }
  v25 = *(_DWORD *)(v9 + v11 + 32) + 1;
  v14 = *(_DWORD *)(v9 + v11 + 32) - 1 < 0;
  *(_DWORD *)(v9 + v11 + 32) = v25;
  if ( !(v14 ^ __OFSUB__(v25, 2) | (v25 == 2)) )
  {
    V_LOCK(v9 + v11);
    V_INT((int)v42, "chain");
    v26 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v26);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      186,
      "update_temperature",
      18,
      294,
      100,
      v46);
    v10 = *(_DWORD *)(a1 + 144);
    v11 = 4 * v10;
    *(_DWORD *)(a3 + 16) |= 8u;
  }
LABEL_9:
  v16 = *(_DWORD **)(a1 + 220);
  if ( v16[5] >= v39 )
  {
    *(_DWORD *)(v9 + v11 + 48) = 0;
  }
  else
  {
    v17 = *(_DWORD *)(v9 + v11 + 48) + 1;
    v14 = *(_DWORD *)(v9 + v11 + 48) - 5 < 0;
    *(_DWORD *)(v9 + v11 + 48) = v17;
    if ( !(v14 ^ __OFSUB__(v17, 6) | (v17 == 6)) )
    {
      V_LOCK(v17);
      V_INT((int)v43, "chain");
      v31 = logfmt_raw((int)v46, 0x1000u);
      V_UNLOCK(v31);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        186,
        "update_temperature",
        18,
        303,
        100,
        v46);
      v10 = *(_DWORD *)(a1 + 144);
      v16 = *(_DWORD **)(a1 + 220);
      *(_DWORD *)(a3 + 16) |= 0x10u;
      v11 = 4 * v10;
    }
  }
  if ( a2[4] > v16[2] || *(_DWORD *)(v9 + 4 * v10) > v16[3] )
  {
    v18 = v9 + v11;
    v28 = *(_DWORD *)(v9 + v11 + 64) + 1;
    v14 = *(_DWORD *)(v9 + v11 + 64) - 1 < 0;
    *(_DWORD *)(v9 + v11 + 64) = v28;
    if ( !(v14 ^ __OFSUB__(v28, 2) | (v28 == 2)) )
    {
      V_LOCK(v18);
      V_INT((int)v44, "chain");
      v29 = logfmt_raw((int)v46, 0x1000u);
      V_UNLOCK(v29);
      v18 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
              186,
              "update_temperature",
              18,
              314,
              100,
              v46);
      v30 = *(_DWORD *)(a1 + 144);
      v16 = *(_DWORD **)(a1 + 220);
      *(_DWORD *)(a3 + 16) |= 2u;
      v11 = 4 * v30;
    }
  }
  else
  {
    v18 = 0;
    *(_DWORD *)(v9 + v11 + 64) = 0;
  }
  if ( a2[5] <= v16[4] )
  {
    v19 = v9 + v11;
    v20 = *(_DWORD *)(v19 + 80) + 1;
    v14 = *(_DWORD *)(v19 + 80) - 1 < 0;
    *(_DWORD *)(v19 + 80) = v20;
    if ( !(v14 ^ __OFSUB__(v20, 2) | (v20 == 2)) )
    {
      V_LOCK(v18);
      V_INT((int)v45, "chain");
      v21 = logfmt_raw((int)v46, 0x1000u);
      V_UNLOCK(v21);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        186,
        "update_temperature",
        18,
        325,
        100,
        v46);
      *(_DWORD *)(a3 + 16) |= 4u;
    }
    return v4;
  }
  *(_DWORD *)(v9 + v11 + 80) = 0;
  return v4;
}
