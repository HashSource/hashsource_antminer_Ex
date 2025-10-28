int __fastcall check_bist_tx_running_one_lane(int a1, int a2, int a3, __int16 a4)
{
  _QWORD *v8; // r4
  int v9; // r0
  int back; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r12
  int v14; // r2
  int v15; // r0
  _QWORD *v17; // [sp+38h] [bp-1094h]
  _BYTE v18[32]; // [sp+48h] [bp-1084h] BYREF
  int v19; // [sp+68h] [bp-1064h] BYREF
  _QWORD v20[8]; // [sp+88h] [bp-1044h] BYREF
  _BYTE v21[4100]; // [sp+C8h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v18, "chain");
  v8 = v20;
  v9 = logfmt_raw((int)v21, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_bist_tx_running_one_lane",
    30,
    8853,
    60,
    v21);
  back = serdes_apb_read_back(a1, a2, a3, (unsigned __int16)(a4 << 12) | 0x4A, (int)v20);
  if ( back > 0 )
  {
    v17 = &v20[back];
    do
    {
      if ( (*((_DWORD *)v8 + 1) & 0x200) != 0 )
      {
        V_LOCK(back);
        v11 = logfmt_raw((int)v21, 0x1000u);
        V_UNLOCK(v11);
        v12 = g_zc;
        v13 = 60;
        v14 = 8859;
      }
      else
      {
        V_LOCK(back);
        V_INT((int)&v19, "chain");
        v15 = logfmt_raw((int)v21, 0x1000u);
        V_UNLOCK(v15);
        v12 = g_zc;
        v13 = 100;
        v14 = 8862;
      }
      back = zlog(
               v12,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/backend/backend_eth/backend_eth.c",
               154,
               "check_bist_tx_running_one_lane",
               30,
               v14,
               v13,
               v21);
      ++v8;
    }
    while ( v8 != v17 );
  }
  return 0;
}
