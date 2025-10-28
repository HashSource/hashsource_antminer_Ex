int __fastcall chip_speed_test(_DWORD *a1, int a2)
{
  int *v2; // r4
  int (__fastcall *v4)(_DWORD *, float *); // r2
  int v6; // r0
  int v7; // r0
  int miner_working_status; // r0
  int v9; // r3
  int v10; // r1
  int v11; // r12
  _DWORD *v12; // r2
  unsigned int v13; // r7
  unsigned int v14; // r0
  unsigned int v15; // t1
  int v16; // lr
  int v17; // r3
  int v18; // t1
  int v20; // r0
  float v21; // [sp+10h] [bp-1014h] BYREF
  int v22; // [sp+14h] [bp-1010h] BYREF
  unsigned __int8 v23; // [sp+1Ah] [bp-100Ah]
  _DWORD v24[1025]; // [sp+20h] [bp-1004h] BYREF

  v2 = v24;
  v4 = (int (__fastcall *)(_DWORD *, float *))a1[36];
  v21 = 0.0;
  v6 = v4(a1, &v21);
  v21 = v21 * 120.0;
  V_LOCK(v6);
  v7 = logfmt_raw((int)v24, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
    192,
    "chip_speed_test",
    15,
    34,
    20,
    v24);
  miner_working_status = get_miner_working_status((int)&v22);
  v9 = v23;
  if ( v23 )
  {
    V_LOCK(miner_working_status);
    v20 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v20);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
      192,
      "chip_speed_test",
      15,
      42,
      20,
      v24);
    return 0;
  }
  else
  {
    if ( (int)a1[73] > 0 )
    {
      v10 = v23;
      v11 = v23;
      v12 = (_DWORD *)(a1[110] - 4);
      v13 = (unsigned int)v21;
      do
      {
        v15 = v12[1];
        ++v12;
        v14 = v15;
        v16 = v10 & 0xF;
        if ( v15 < v13 )
        {
          ++v10;
          v24[v16] = v9;
          if ( v14 )
            *(_DWORD *)(a2 + 4 * v9) = 3;
          else
            *(_DWORD *)(a2 + 4 * v9) = 2;
        }
        else
        {
          *(_DWORD *)(a2 + 4 * v9) = v11;
        }
        *v12 = v11;
        ++v9;
      }
      while ( a1[73] > v9 );
      if ( v10 && v10 <= a1[121] )
      {
        v17 = 0;
        if ( v10 >= 16 )
          v10 = 16;
        do
        {
          ++v17;
          v18 = *v2++;
          *(_DWORD *)(a2 + 4 * v18) = 0;
        }
        while ( v17 < v10 );
      }
    }
    return 0;
  }
}
