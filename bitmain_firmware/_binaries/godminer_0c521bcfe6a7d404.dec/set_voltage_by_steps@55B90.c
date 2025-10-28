int __fastcall set_voltage_by_steps(int a1, int a2)
{
  int v3; // r0
  int v4; // r0
  int v5; // r4
  int v6; // r5
  int v7; // r6
  int v9; // r0
  _BYTE v10[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( !a2 )
  {
    V_LOCK(a1);
    v9 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/miner_util/power_api.c",
      153,
      "set_voltage_by_steps",
      20,
      460,
      100,
      v10);
    return -1;
  }
  V_LOCK(a1);
  v3 = logfmt_raw((int)v10, 0x1000u);
  V_UNLOCK(v3);
  v4 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-"
         "origin_godminer-new/miner_util/power_api.c",
         153,
         "set_voltage_by_steps",
         20,
         464,
         40,
         v10);
  if ( byte_174348 )
    v5 = dword_174364;
  else
    v5 = sub_55688(v4);
  v6 = a1 - v5;
  if ( a1 != v5 )
  {
    if ( a1 - v5 < 0 )
    {
      v7 = -10;
      if ( (int)abs32(v6) <= 10 )
      {
LABEL_11:
        if ( a1 != v5 )
          sub_5578C(a1);
        return 0;
      }
    }
    else
    {
      v7 = 10;
      if ( (int)abs32(v6) <= 10 )
        goto LABEL_11;
    }
    do
    {
      v5 += v7;
      v6 -= v7;
      sub_5578C(v5);
    }
    while ( (int)abs32(v6) > 10 );
    goto LABEL_11;
  }
  return 0;
}
