int __fastcall set_voltage_by_steps(int a1, int a2)
{
  int v3; // r0
  int v4; // r5
  int v5; // r4
  int v6; // r6
  _BYTE v8[4120]; // [sp+10h] [bp-1018h] BYREF

  if ( a2 )
  {
    V_LOCK(a1);
    v3 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/power_api.c",
      143,
      "set_voltage_by_steps",
      20,
      293,
      60,
      v8);
    if ( byte_16734C )
      v4 = dword_167370;
    else
      v4 = -1;
    v5 = a1 - v4;
    if ( a1 == v4 )
      return 0;
    if ( a1 - v4 < 0 )
    {
      v6 = -10;
      if ( (int)abs32(v5) <= 10 )
      {
LABEL_11:
        if ( a1 != v4 )
          sub_4B500(a1);
        return 0;
      }
    }
    else
    {
      v6 = 10;
      if ( (int)abs32(v5) <= 10 )
        goto LABEL_11;
    }
    do
    {
      v4 += v6;
      v5 -= v6;
      sub_4B500(v4);
    }
    while ( (int)abs32(v5) > 10 );
    goto LABEL_11;
  }
  return -1;
}
