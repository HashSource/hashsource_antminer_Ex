__int64 __fastcall sub_D7B48(int a1, int a2, int a3)
{
  int v3; // r0
  int v4; // r0
  _BYTE v9[20]; // [sp+40h] [bp-2094h] BYREF
  _BYTE v10[20]; // [sp+1040h] [bp-1094h] BYREF
  _DWORD v11[7]; // [sp+2040h] [bp-94h] BYREF
  int v12; // [sp+205Ch] [bp-78h]
  _DWORD v13[7]; // [sp+2060h] [bp-74h] BYREF
  int v14; // [sp+207Ch] [bp-58h]
  _DWORD v15[7]; // [sp+2080h] [bp-54h] BYREF
  int v16; // [sp+209Ch] [bp-38h]
  _DWORD v17[7]; // [sp+20A0h] [bp-34h] BYREF
  int v18; // [sp+20BCh] [bp-18h]
  unsigned int i; // [sp+20C0h] [bp-14h]
  int v20; // [sp+20C4h] [bp-10h]

  v20 = 0;
  for ( i = 0; i <= 5; ++i )
  {
    v3 = snprintf(&v10[v20], 4096 - v20, "%02x ", *(unsigned __int8 *)(a2 + i + 3));
    v20 += v3;
  }
  V_LOCK();
  sub_CA5F0((int)v11, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v12,
    v11[0],
    v11[1],
    v11[2],
    v11[3],
    v11[4],
    v11[5],
    v11[6],
    v12,
    "work_id: %02x diff %02x",
    *(unsigned __int8 *)(a2 + 10),
    *(_BYTE *)(a2 + 9) & 0x7F);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
    171,
    "dump_nonce_ckb",
    14,
    154,
    20,
    v9);
  V_LOCK();
  sub_CA5F0((int)v13, *(int *)(a1 + 272));
  logfmt_raw(v9, 0x1000u, 0, v14, v13[0], v13[1], v13[2], v13[3], v13[4], v13[5], v13[6], v14, "back nonce: %s", v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
    171,
    "dump_nonce_ckb",
    14,
    155,
    20,
    v9);
  i = 0;
  v20 = 0;
  while ( i <= 0xF )
  {
    v4 = snprintf(&v10[v20], 4096 - v20, "%02x ", *(unsigned __int8 *)(a3 + i + 48));
    v20 += v4;
    ++i;
  }
  V_LOCK();
  sub_CA5F0((int)v15, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v16,
    v15[0],
    v15[1],
    v15[2],
    v15[3],
    v15[4],
    v15[5],
    v15[6],
    v16,
    "asic %d core %d addr_interval %d",
    *(_DWORD *)(a3 + 8),
    *(_DWORD *)(a3 + 12),
    *(_DWORD *)(a1 + 468));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
    171,
    "dump_nonce_ckb",
    14,
    161,
    20,
    v9);
  V_LOCK();
  sub_CA5F0((int)v17, *(int *)(a1 + 272));
  logfmt_raw(v9, 0x1000u, 0, v18, v17[0], v17[1], v17[2], v17[3], v17[4], v17[5], v17[6], v18, "nonce: %s", v10);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
           171,
           "dump_nonce_ckb",
           14,
           162,
           20,
           v9);
}
