int __fastcall init_chip_freq(int a1)
{
  int result; // r0
  _BYTE v3[64]; // [sp+1Ch] [bp-1040h] BYREF
  _WORD v4[20]; // [sp+101Ch] [bp-40h] BYREF
  int v5; // [sp+1044h] [bp-18h]
  int m; // [sp+1048h] [bp-14h]
  int k; // [sp+104Ch] [bp-10h]
  int j; // [sp+1050h] [bp-Ch]
  int i; // [sp+1054h] [bp-8h]

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "init chip freq, freq_select %d", (unsigned __int16)freq_select);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
    193,
    "init_chip_freq",
    14,
    393,
    20,
    v3);
  result = get_chip_freq((int)v4);
  v5 = result;
  if ( result == -1 )
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "init chip freq failed, PT test not finish!");
    V_UNLOCK();
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmin"
               "er-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
               193,
               "init_chip_freq",
               14,
               398,
               100,
               v3);
  }
  if ( !v5 )
  {
    for ( i = 0; i <= 2; ++i )
    {
      for ( j = 0; j <= 5; ++j )
      {
        if ( v4[6 * i + j] )
        {
          target_freq_array_f[6 * i + j] = (float)((float)((unsigned __int16)v4[6 * i + j] - 1) * 12.5) + 400.0;
          if ( target_freq_array_f[6 * i + j] > 675.0 )
            target_freq_array_f[6 * i + j] = 675.0;
        }
        else
        {
          target_freq_array_f[6 * i + j] = (float)(unsigned __int16)freq_select;
        }
        V_LOCK();
        logfmt_raw(v3, 0x1000u, 0, "target_freq_array_f[%d][%d]: %f", i, j, target_freq_array_f[6 * i + j]);
        V_UNLOCK();
        result = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/go"
                   "dminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
                   193,
                   "init_chip_freq",
                   14,
                   412,
                   20,
                   v3);
      }
    }
  }
  for ( k = 0; k <= 2; ++k )
  {
    for ( m = 0; m <= 5; ++m )
      freq_array_f[6 * k + m] = (float)(unsigned __int16)freq_select;
  }
  dword_5AEF94[*(_DWORD *)(a1 + 272)] = 1;
  return result;
}
