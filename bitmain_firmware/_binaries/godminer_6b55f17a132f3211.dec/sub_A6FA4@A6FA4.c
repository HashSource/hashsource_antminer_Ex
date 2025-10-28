int sub_A6FA4()
{
  int v0; // r0
  _BYTE v2[4096]; // [sp+810h] [bp-1000h] BYREF

  V_LOCK(*(_DWORD *)"n N failed");
  v0 = logfmt_raw((int)v2, 0x1000u);
  V_UNLOCK(v0);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/device/hal/power/bitmain_power_APW9.c",
    172,
    "_bitmain_set_DA_conversion_N",
    28,
    376,
    100,
    v2);
  return -2147482880;
}
