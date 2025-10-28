__int64 __fastcall sub_E813C(int a1, int a2, int a3)
{
  int v3; // r0
  int v4; // r0
  _BYTE v9[52]; // [sp+40h] [bp-2034h] BYREF
  _BYTE v10[52]; // [sp+1040h] [bp-1034h] BYREF
  _DWORD v11[7]; // [sp+2040h] [bp-34h] BYREF
  int v12; // [sp+205Ch] [bp-18h]
  unsigned int i; // [sp+2060h] [bp-14h]
  int v14; // [sp+2064h] [bp-10h]

  v14 = 0;
  for ( i = 0; i <= 3; ++i )
  {
    v3 = snprintf(&v10[v14], 4096 - v14, "%02x ", *(unsigned __int8 *)(a2 + i + 3));
    v14 += v3;
  }
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "work_id: %02x diff %02x", *(unsigned __int8 *)(a2 + 8), *(_BYTE *)(a2 + 7) & 0x7F);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_dash_1766/backend_dash_1766.c",
    173,
    "dump_nonce_dash",
    15,
    170,
    20,
    v9);
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "back nonce: %s", v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_dash_1766/backend_dash_1766.c",
    173,
    "dump_nonce_dash",
    15,
    171,
    20,
    v9);
  i = 0;
  v14 = 0;
  while ( i <= 3 )
  {
    v4 = snprintf(&v10[v14], 4096 - v14, "%02x ", *(unsigned __int8 *)(a3 + i + 48));
    v14 += v4;
    ++i;
  }
  V_LOCK();
  sub_DA978((int)v11, *(int *)(a1 + 272));
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
    "asic %d core %d addr_interval %d",
    *(_DWORD *)(a3 + 8),
    *(_DWORD *)(a3 + 12),
    *(_DWORD *)(a1 + 468));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_dash_1766/backend_dash_1766.c",
    173,
    "dump_nonce_dash",
    15,
    177,
    20,
    v9);
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "nonce: %s", v10);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
           173,
           "dump_nonce_dash",
           15,
           178,
           20,
           v9);
}
