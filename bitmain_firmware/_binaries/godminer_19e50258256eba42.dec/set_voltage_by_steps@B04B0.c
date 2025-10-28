int __fastcall set_voltage_by_steps(int a1, char a2, unsigned int a3)
{
  signed int v4; // r2
  int v5; // r3
  _BYTE v9[20]; // [sp+20h] [bp-1014h] BYREF
  int v10; // [sp+1020h] [bp-14h]
  int current_voltage; // [sp+1024h] [bp-10h]
  int v12; // [sp+1028h] [bp-Ch]
  signed int v13; // [sp+102Ch] [bp-8h]

  if ( a2 != 1 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "Sweep error string = %s.", "V:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "set_voltage_by_steps",
      20,
      464,
      100,
      v9);
    return -1;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "set_voltage_by_steps to %d", a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "set_voltage_by_steps",
      20,
      468,
      40,
      v9);
    v10 = 0;
    if ( a3 > 0x64 )
      a3 = 100;
    v13 = a3 / 0xA;
    current_voltage = get_current_voltage();
    v12 = a1 - current_voltage;
    if ( a1 == current_voltage )
    {
      return 0;
    }
    else
    {
      if ( v12 < 0 )
        v13 = -v13;
      while ( 1 )
      {
        v4 = abs32(v12);
        v5 = v13;
        if ( v13 < 0 )
          v5 = -v13;
        if ( v4 <= v5 )
          break;
        current_voltage += v13;
        v12 -= v13;
        sub_AEE50(current_voltage, (int)&byte_5AD5F0);
      }
      if ( a1 != current_voltage )
        sub_AEE50(a1, (int)&byte_5AD5F0);
      return v10;
    }
  }
}
