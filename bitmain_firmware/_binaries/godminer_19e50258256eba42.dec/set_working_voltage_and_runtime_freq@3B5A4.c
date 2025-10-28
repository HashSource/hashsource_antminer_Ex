int set_working_voltage_and_runtime_freq()
{
  int v0; // r3
  int v1; // r3
  int v2; // r0
  int v3; // r0
  signed int v4; // r2
  int v5; // r3
  _BYTE v7[44]; // [sp+10h] [bp-102Ch] BYREF
  int v8; // [sp+1010h] [bp-2Ch] BYREF
  int v9; // [sp+1014h] [bp-28h]
  int v10; // [sp+1018h] [bp-24h]
  _DWORD *all_created_runtime; // [sp+101Ch] [bp-20h]
  int working_voltage; // [sp+1020h] [bp-1Ch]
  int current_voltage; // [sp+1024h] [bp-18h]
  bool v14; // [sp+102Ah] [bp-12h]
  char v15; // [sp+102Bh] [bp-11h]
  int v16; // [sp+102Ch] [bp-10h]
  int i; // [sp+1030h] [bp-Ch]
  int j; // [sp+1034h] [bp-8h]

  working_voltage = get_working_voltage();
  current_voltage = get_current_voltage();
  v8 = 0;
  all_created_runtime = get_all_created_runtime(&v8);
  if ( (unsigned __int8)is_power_init() != 1 )
  {
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "%s, power has not init!", "set_working_voltage_and_runtime_freq");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "set_working_voltage_and_runtime_freq",
      36,
      1272,
      100,
      v7);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "Sweep error string = %s.", "V:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "set_working_voltage_and_runtime_freq",
      36,
      1273,
      100,
      v7);
    return -1;
  }
  else
  {
    v0 = opt_algo;
    if ( opt_algo == 8 )
    {
      v14 = 0;
      v15 = 0;
      if ( working_voltage >= current_voltage )
        v1 = 7;
      else
        v1 = -7;
      v10 = v1;
      v9 = 25;
      while ( 1 )
      {
        if ( v14 )
        {
          v0 = (unsigned __int8)v15 ^ 1;
          if ( v15 == 1 )
            break;
        }
        if ( !v14 )
        {
          v16 = 0;
          for ( i = 0; i < v8; ++i )
          {
            v2 = (*(int (__fastcall **)(_DWORD, int))(all_created_runtime[i] + 200))(all_created_runtime[i], v9);
            v16 |= v2;
          }
          v14 = v16 == 0;
          if ( v16 )
          {
            usleep(0x30D40u);
            for ( j = 0; j < v8; ++j )
            {
              v3 = (*(int (__fastcall **)(_DWORD, int))(all_created_runtime[j] + 200))(all_created_runtime[j], v9);
              v16 |= v3;
            }
            v14 = v16 == 0;
          }
        }
        v4 = abs32(current_voltage - working_voltage);
        v5 = v10;
        if ( v10 < 0 )
          v5 = -v10;
        if ( v4 <= v5 )
        {
          if ( current_voltage != working_voltage )
          {
            current_voltage = working_voltage;
            set_voltage(working_voltage, 1);
          }
        }
        else
        {
          current_voltage += v10;
          set_voltage(current_voltage, 1);
        }
        if ( current_voltage == working_voltage )
          v15 = 1;
        sub_3B520();
      }
    }
  }
  return v0;
}
