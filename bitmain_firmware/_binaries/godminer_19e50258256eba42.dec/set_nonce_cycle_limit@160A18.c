int __fastcall set_nonce_cycle_limit(int a1)
{
  _BYTE v3[52]; // [sp+30h] [bp-1034h] BYREF
  _DWORD v4[7]; // [sp+1030h] [bp-34h] BYREF
  int v5; // [sp+104Ch] [bp-18h]
  unsigned int v6; // [sp+1054h] [bp-10h]

  v6 = (unsigned int)(float)((float)(67109000.0 / *(float *)(a1 + 1020)) * 12.0);
  sub_15C594(a1, 14, HIWORD(v6));
  sub_15C594(a1, 15, (unsigned __int16)v6);
  V_LOCK();
  sub_151C00((int)v4, *(int *)(a1 + 272));
  logfmt_raw(
    v3,
    0x1000u,
    0,
    v5,
    v4[0],
    v4[1],
    v4[2],
    v4[3],
    v4[4],
    v4[5],
    v4[6],
    v5,
    "set nonce cycle limit value %08x",
    v6);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_hns_2130/backend_hns_2130.c",
    171,
    "set_nonce_cycle_limit",
    21,
    517,
    40,
    v3);
  return 0;
}
