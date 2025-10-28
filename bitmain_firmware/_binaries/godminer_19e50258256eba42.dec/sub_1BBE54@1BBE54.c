__int64 __fastcall sub_1BBE54(int a1, int a2, _DWORD *a3)
{
  int v4; // [sp+24h] [bp-1130h]
  _BYTE v8[52]; // [sp+60h] [bp-10F4h] BYREF
  char v9[68]; // [sp+1060h] [bp-F4h] BYREF
  char v10[68]; // [sp+10A4h] [bp-B0h] BYREF
  _DWORD v11[7]; // [sp+10E8h] [bp-6Ch] BYREF
  int v12; // [sp+1104h] [bp-50h]
  _DWORD v13[7]; // [sp+1108h] [bp-4Ch] BYREF
  int v14; // [sp+1124h] [bp-30h]
  int i; // [sp+112Ch] [bp-28h]
  unsigned int j; // [sp+1130h] [bp-24h]
  int v17; // [sp+1134h] [bp-20h]
  int v18; // [sp+1138h] [bp-1Ch]
  unsigned __int8 v19; // [sp+113Fh] [bp-15h]

  v18 = a2 + 34;
  v17 = a2 + 98;
  v19 = (*(__int64 *)(a2 + 26) >> 9) & 7;
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "wc %d diff: %d", *(unsigned __int8 *)(a2 + 16), *(unsigned __int8 *)(a2 + 17));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "dump_nonce",
    10,
    1200,
    60,
    v8);
  V_LOCK();
  sub_1A9DE8((int)v11, *(int *)(a1 + 272));
  logfmt_raw(
    v8,
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
    "asic %d core %d pe %d addr_interval %d",
    *(_DWORD *)(a2 + 8),
    *(_DWORD *)(a2 + 12),
    v19,
    *(_DWORD *)(a1 + 468));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "dump_nonce",
    10,
    1202,
    60,
    v8);
  for ( i = 0; i <= 31; ++i )
    sprintf(&v10[2 * i], "%02x", *(unsigned __int8 *)(v18 + i));
  for ( j = 0; j <= 0x1F; ++j )
    sprintf(&v9[2 * j], "%02x", *(unsigned __int8 *)(v17 + j));
  V_LOCK();
  sub_1A9DE8((int)v13, *(int *)(a1 + 272));
  ++*(_QWORD *)a3;
  logfmt_raw(
    v8,
    0x1000u,
    0,
    v14,
    v13[0],
    v13[1],
    v13[2],
    v13[3],
    v13[4],
    v13[5],
    v13[6],
    v14,
    "nonce %d asic %02d core %02d pe %02d header %s nonce %016llx mixhash %s",
    v4,
    *a3,
    a3[1],
    *(_DWORD *)(a2 + 8),
    *(_DWORD *)(a2 + 12),
    v19,
    v10,
    *(_DWORD *)(a2 + 26),
    *(_DWORD *)(a2 + 30),
    v9);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
           171,
           "dump_nonce",
           10,
           1211,
           60,
           v8);
}
