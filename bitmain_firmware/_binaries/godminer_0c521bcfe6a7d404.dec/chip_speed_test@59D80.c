int __fastcall chip_speed_test(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int miner_working_status; // r0
  int v7; // r3
  int v8; // r0
  int v9; // lr
  _DWORD *v10; // r2
  unsigned int v11; // r8
  unsigned int v12; // r12
  unsigned int v13; // t1
  int v14; // r1
  int v15; // r8
  int v16; // r3
  int *v17; // r2
  int v18; // t1
  int v20; // r0
  bool v21; // cc
  int v22; // r0
  int *v23; // r5
  int v24; // r6
  int v25; // r9
  int v26; // t1
  int v27; // r0
  float v28; // [sp+10h] [bp-1454h] BYREF
  int v29; // [sp+14h] [bp-1450h] BYREF
  unsigned __int8 v30; // [sp+1Ah] [bp-144Ah]
  _DWORD v31[16]; // [sp+20h] [bp-1444h] BYREF
  char v32[1024]; // [sp+60h] [bp-1404h] BYREF
  _BYTE v33[4100]; // [sp+460h] [bp-1004h] BYREF

  v28 = 0.0;
  v4 = (*(int (__fastcall **)(int, float *))(a1 + 144))(a1, &v28);
  v28 = v28 * 120.0;
  V_LOCK(v4);
  v5 = logfmt_raw((int)v33, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
    196,
    "chip_speed_test",
    15,
    35,
    20,
    v33);
  miner_working_status = get_miner_working_status((int)&v29);
  v7 = v30;
  if ( v30 )
  {
    V_LOCK(miner_working_status);
    v20 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v20);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
      196,
      "chip_speed_test",
      15,
      43,
      20,
      v33);
    return 0;
  }
  else
  {
    if ( *(int *)(a1 + 304) <= 0 )
    {
      if ( *(int *)(a1 + 492) >= 0 )
        return 0;
      v22 = *(_DWORD *)"bad asic id:";
      strcpy(v32, "bad asic id:");
    }
    else
    {
      v8 = v30;
      v9 = v30;
      v10 = (_DWORD *)(*(_DWORD *)(a1 + 448) - 4);
      v11 = (unsigned int)v28;
      do
      {
        v13 = v10[1];
        ++v10;
        v12 = v13;
        v14 = v8 & 0xF;
        if ( v13 < v11 )
        {
          ++v8;
          if ( v12 )
            *(_DWORD *)(a2 + 4 * v7) = 3;
          else
            *(_DWORD *)(a2 + 4 * v7) = 2;
          v31[v14] = v7;
        }
        else
        {
          *(_DWORD *)(a2 + 4 * v7) = v9;
        }
        *v10 = v9;
        ++v7;
      }
      while ( *(_DWORD *)(a1 + 304) > v7 );
      if ( v8 >= 16 )
        v15 = 16;
      else
        v15 = v8;
      if ( *(_DWORD *)(a1 + 492) >= v8 )
      {
        if ( v8 > 0 )
        {
          v16 = 0;
          v17 = v31;
          do
          {
            ++v16;
            v18 = *v17++;
            *(_DWORD *)(a2 + 4 * v18) = 0;
          }
          while ( v15 > v16 );
        }
        return 0;
      }
      v21 = v8 <= 0;
      v22 = *(_DWORD *)"bad asic id:";
      strcpy(v32, "bad asic id:");
      if ( !v21 )
      {
        v23 = v31;
        v24 = 12;
        v25 = 0;
        do
        {
          ++v25;
          v26 = *v23++;
          v22 = snprintf(&v32[v24], 1024 - v24, "%03d ", v26);
          v24 += v22;
        }
        while ( v15 > v25 );
      }
    }
    V_LOCK(v22);
    v27 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v27);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
      196,
      "chip_speed_test",
      15,
      103,
      40,
      v33);
    return 0;
  }
}
