int sub_AEC88()
{
  double v0; // d0
  double v1; // r2
  _BYTE v4[44]; // [sp+10h] [bp-102Ch] BYREF
  double v5; // [sp+1010h] [bp-2Ch]
  int chain_num; // [sp+101Ch] [bp-20h]
  double v7; // [sp+1020h] [bp-1Ch]
  int v8; // [sp+1028h] [bp-14h]
  int v9; // [sp+102Ch] [bp-10h]
  int i; // [sp+1030h] [bp-Ch]
  int v11; // [sp+1034h] [bp-8h]

  v7 = 0.0;
  v11 = 0;
  v9 = 100;
  v8 = 0;
  chain_num = platform_get_chain_num();
  while ( ++v11 < v9 )
  {
    for ( i = 0; i < chain_num; ++i )
    {
      read_feedback_voltage(i);
      v5 = v0;
      if ( v7 >= v0 )
        v1 = v7;
      else
        v1 = v5;
      v7 = v1;
    }
    if ( v7 <= 10.0 )
    {
      if ( v7 <= 4.0 )
        return 0;
      if ( v9 > 2 )
        v11 = 0;
      v9 = 2;
    }
    else
    {
      if ( v9 > 20 )
        v11 = 0;
      v9 = 20;
    }
    ++v8;
    sleep(1u);
    if ( v8 > 20 )
    {
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, "APW discharge too slow OR pic adc wrong");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/power_api.c",
        150,
        "wait_for_psu_discharge",
        22,
        187,
        100,
        v4);
      return -1;
    }
  }
  return 0;
}
