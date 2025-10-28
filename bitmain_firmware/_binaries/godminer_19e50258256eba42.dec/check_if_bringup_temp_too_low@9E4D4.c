int __fastcall check_if_bringup_temp_too_low(int a1)
{
  int (**v1)(); // r0
  _BYTE v4[20]; // [sp+18h] [bp-1014h] BYREF
  int v5; // [sp+1018h] [bp-14h] BYREF
  _DWORD *all_created_runtime; // [sp+101Ch] [bp-10h]
  int i; // [sp+1020h] [bp-Ch]
  int j; // [sp+1024h] [bp-8h]

  all_created_runtime = get_all_created_runtime(&v5);
  for ( i = 0; i < v5; ++i )
  {
    if ( *(_DWORD *)(all_created_runtime[i] + 444) > *(_DWORD *)(a1 + 92) )
    {
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, "bringup temperature too low! refuse to start mining");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_base.c",
        166,
        "check_if_bringup_temp_too_low",
        29,
        1370,
        100,
        v4);
      for ( j = 0; j < i; ++j )
      {
        (*(void (__fastcall **)(_DWORD))(all_created_runtime[j] + 24))(all_created_runtime[j]);
        v1 = dev_ctrl();
        ((void (__fastcall *)(_DWORD))v1[8])(*(_DWORD *)(all_created_runtime[j] + 264));
      }
      power_off();
      while ( 1 )
        sleep(1u);
    }
  }
  return 0;
}
