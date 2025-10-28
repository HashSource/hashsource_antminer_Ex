int __fastcall check_bist_rx_running_one_lane(int a1, int a2, int a3, __int16 a4)
{
  _QWORD *v8; // r4
  int v9; // r0
  int back; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r12
  int v14; // r2
  int v15; // r3
  int v16; // r0
  _QWORD *v18; // [sp+34h] [bp-1090h]
  _BYTE v19[32]; // [sp+40h] [bp-1084h] BYREF
  int v20; // [sp+60h] [bp-1064h] BYREF
  _QWORD v21[8]; // [sp+80h] [bp-1044h] BYREF
  _BYTE v22[4100]; // [sp+C0h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v19, "chain");
  v8 = v21;
  v9 = logfmt_raw((int)v22, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_bist_rx_running_one_lane",
    30,
    8899,
    60,
    v22);
  back = serdes_apb_read_back(a1, a2, a3, (unsigned __int16)(a4 << 12) | 0x11, (int)v21);
  if ( back > 0 )
  {
    v18 = &v21[back];
    do
    {
      v15 = *((_DWORD *)v8 + 1);
      if ( (v15 & 0x400) != 0 || (v15 & 0x8000000) == 0 )
      {
        V_LOCK(back);
        V_INT((int)&v20, "chain");
        v11 = logfmt_raw((int)v22, 0x1000u);
        V_UNLOCK(v11);
        v12 = g_zc;
        v13 = 100;
        v14 = 8908;
      }
      else
      {
        V_LOCK(back);
        v16 = logfmt_raw((int)v22, 0x1000u);
        V_UNLOCK(v16);
        v12 = g_zc;
        v13 = 60;
        v14 = 8905;
      }
      ++v8;
      back = zlog(
               v12,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/backend/backend_eth/backend_eth.c",
               154,
               "check_bist_rx_running_one_lane",
               30,
               v14,
               v13,
               v22);
    }
    while ( v8 != v18 );
  }
  return 0;
}
