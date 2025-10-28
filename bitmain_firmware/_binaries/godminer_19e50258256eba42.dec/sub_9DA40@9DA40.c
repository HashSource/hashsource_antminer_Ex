int __fastcall sub_9DA40(const char *a1, _DWORD *a2, _DWORD *a3)
{
  _BYTE v8[20]; // [sp+20h] [bp-1014h] BYREF
  int v9; // [sp+1020h] [bp-14h] BYREF
  int v10; // [sp+1024h] [bp-10h] BYREF
  _DWORD *v11; // [sp+1028h] [bp-Ch]
  int i; // [sp+102Ch] [bp-8h]

  v10 = 0;
  v11 = &v10;
  *a2 = 0;
  *a3 = 0;
  v9 = 0;
  get_chip_ft_correspond(v11, &v9);
  for ( i = 0; i < v9; ++i )
  {
    if ( *(_DWORD *)(*v11 + 12 * i) && strstr(*(const char **)(*v11 + 12 * i), a1) )
    {
      *a2 = *(_DWORD *)(*v11 + 12 * i + 4);
      *a3 = *(_DWORD *)(*v11 + 12 * i + 8);
      return 0;
    }
  }
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "chip_ft %s not in lists", a1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "get_voltage_and_freq_by_chip_ft",
    31,
    1061,
    100,
    v8);
  return 33;
}
