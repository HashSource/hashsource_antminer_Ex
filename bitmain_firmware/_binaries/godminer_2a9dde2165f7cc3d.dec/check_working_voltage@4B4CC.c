void __fastcall __noreturn check_working_voltage(int a1)
{
  unsigned int i; // r0
  int current_voltage; // r6
  int v4; // r0
  int v5; // r3
  int v6; // r4
  int v7; // r0
  int v8; // r0
  int v9; // [sp+1Ch] [bp-4h] BYREF
  _BYTE v10[4100]; // [sp+20h] [bp+0h] BYREF

  v9 = 0;
  for ( i = get_all_created_runtime(&v9); ; i = sleep(1u) )
  {
    current_voltage = get_current_voltage(i);
    v4 = (*(int (__fastcall **)(int))(a1 + 8))(a1);
    v5 = current_voltage - v4;
    v6 = v4;
    if ( current_voltage - v4 < 0 )
      v5 = v4 - current_voltage;
    if ( v5 > 9 )
    {
      V_LOCK(v4);
      v7 = logfmt_raw((int)v10, 0x1000u);
      V_UNLOCK(v7);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/machine_runtime/machine_runtime_base.c",
        169,
        "check_working_voltage",
        21,
        345,
        40,
        v10);
      if ( opt_algo == 9 )
      {
        (*(void (__fastcall **)(int, int))(a1 + 28))(a1, v6);
      }
      else
      {
        v8 = is_power_init(a1, v6);
        set_voltage_by_steps(v6, v8);
      }
    }
  }
}
