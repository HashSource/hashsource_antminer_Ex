int __fastcall get_chip_freq(int a1)
{
  _BYTE v4[16]; // [sp+1Ch] [bp-1010h] BYREF
  __int16 v5; // [sp+101Eh] [bp-Eh] BYREF
  int v6; // [sp+1020h] [bp-Ch]
  FILE *stream; // [sp+1024h] [bp-8h]

  v6 = 0;
  stream = fopen("/nvdata/sweep_result_v2.txt", "r");
  if ( stream )
  {
    while ( _isoc99_fscanf(stream, "%hu", &v5) == 1 && v6 <= 19 )
      *(_WORD *)(a1 + 2 * v6++) = v5;
    fclose(stream);
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "Error opening /nvdata/sweep_result_v2.txt");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
      193,
      "get_chip_freq",
      13,
      218,
      60,
      v4);
    return -1;
  }
}
