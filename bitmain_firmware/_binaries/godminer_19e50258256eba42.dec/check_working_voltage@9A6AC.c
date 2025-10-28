void __fastcall __noreturn check_working_voltage(int a1)
{
  int v1; // r0
  int v2; // r3
  char v3; // r0
  char v4; // r0
  _BYTE v5[24]; // [sp+1Ch] [bp-1018h] BYREF
  int v6; // [sp+101Ch] [bp-18h] BYREF
  int v7; // [sp+1020h] [bp-14h]
  int current_voltage; // [sp+1024h] [bp-10h]
  void *all_created_runtime; // [sp+1028h] [bp-Ch]
  int v10; // [sp+102Ch] [bp-8h]

  v6 = 0;
  v10 = a1;
  all_created_runtime = get_all_created_runtime(&v6);
  while ( 1 )
  {
    current_voltage = get_current_voltage();
    v1 = (*(int (__fastcall **)(int))(v10 + 8))(v10);
    v7 = v1;
    v2 = current_voltage - v1;
    if ( current_voltage - v1 < 0 )
      v2 = v1 - current_voltage;
    if ( v2 > 9 )
    {
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "cur_voltage:%d, set voltage to %d", current_voltage, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_base.c",
        166,
        "check_working_voltage",
        21,
        396,
        40,
        v5);
      if ( opt_algo == 9 )
      {
        (*(void (__fastcall **)(int, int))(v10 + 28))(v10, v7);
      }
      else if ( opt_algo == 11 )
      {
        v3 = is_power_init();
        set_voltage_by_steps(v7, v3, 0x14u);
      }
      else
      {
        v4 = is_power_init();
        set_voltage_by_steps(v7, v4, 0x64u);
      }
    }
    sleep(1u);
  }
}
