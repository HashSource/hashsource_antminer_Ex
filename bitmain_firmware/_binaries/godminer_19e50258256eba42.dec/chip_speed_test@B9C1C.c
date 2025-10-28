int __fastcall chip_speed_test(int a1)
{
  int v1; // r3
  bool v2; // nf
  int v3; // r2
  int v4; // r3
  int v5; // r2
  int v6; // r3
  int v7; // r2
  int v8; // r3
  int v9; // r2
  int v10; // r3
  int v11; // r3
  _BYTE v14[44]; // [sp+18h] [bp-146Ch] BYREF
  _BYTE v15[12]; // [sp+1018h] [bp-46Ch] BYREF
  char v16[16]; // [sp+1024h] [bp-460h] BYREF
  float v17[17]; // [sp+1424h] [bp-60h] BYREF
  int v18; // [sp+1468h] [bp-1Ch]
  float i; // [sp+146Ch] [bp-18h]
  int v20; // [sp+1470h] [bp-14h]
  int k; // [sp+1474h] [bp-10h]
  int j; // [sp+1478h] [bp-Ch]
  int v23; // [sp+147Ch] [bp-8h]

  v23 = 0;
  v17[0] = 0.0;
  (*(void (__fastcall **)(int, float *))(a1 + 160))(a1, v17);
  v17[0] = v17[0] * 120.0;
  V_LOCK();
  logfmt_raw(v14, 0x1000u, 0, "qualify nonce count %f", v17[0]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
    193,
    "chip_speed_test",
    15,
    47,
    20,
    v14);
  get_miner_working_status((int)v15);
  if ( v15[6] )
  {
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "check lost connection to pool, keep the state of all chips!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
      193,
      "chip_speed_test",
      15,
      55,
      20,
      v14);
  }
  else
  {
    for ( i = 0.0; SLODWORD(i) < *(_DWORD *)(a1 + 372); ++LODWORD(i) )
    {
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 520) + 4 * LODWORD(i)) < (unsigned int)v17[0] )
      {
        if ( *(_DWORD *)(*(_DWORD *)(a1 + 520) + 4 * LODWORD(i)) )
        {
          v6 = v23++;
          v7 = -v6;
          v2 = -v6 < 0;
          v8 = v6 & 0xF;
          v9 = v7 & 0xF;
          if ( !v2 )
            v8 = -v9;
          v17[v8 + 1] = i;
          *(_DWORD *)(*(_DWORD *)(a1 + 568) + 44 * LODWORD(i) + 16) = 3;
        }
        else
        {
          v1 = v23++;
          v3 = -v1;
          v2 = -v1 < 0;
          v4 = v1 & 0xF;
          v5 = v3 & 0xF;
          if ( !v2 )
            v4 = -v5;
          v17[v4 + 1] = i;
          *(_DWORD *)(*(_DWORD *)(a1 + 568) + 44 * LODWORD(i) + 16) = 2;
        }
      }
      else
      {
        *(_DWORD *)(*(_DWORD *)(a1 + 568) + 44 * LODWORD(i) + 16) = 0;
      }
      *(_DWORD *)(*(_DWORD *)(a1 + 520) + 4 * LODWORD(i)) = 0;
    }
    if ( v23 > *(_DWORD *)(a1 + 564) )
    {
      v20 = 0;
      v18 = snprintf(v16, 0x400u, "bad asic id:");
      v20 += v18;
      for ( j = 0; ; ++j )
      {
        v11 = v23;
        if ( v23 >= 16 )
          v11 = 16;
        if ( j >= v11 )
          break;
        v18 = snprintf(&v16[v20], 1024 - v20, "%03d ", v17[j + 1]);
        v20 += v18;
      }
      V_LOCK();
      logfmt_raw(v14, 0x1000u, 0, "%s", v16);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
        193,
        "chip_speed_test",
        15,
        123,
        40,
        v14);
    }
    else
    {
      for ( k = 0; ; ++k )
      {
        v10 = v23;
        if ( v23 >= 16 )
          v10 = 16;
        if ( k >= v10 )
          break;
        *(_DWORD *)(*(_DWORD *)(a1 + 568) + 44 * LODWORD(v17[k + 1]) + 16) = 0;
      }
    }
  }
  return 0;
}
