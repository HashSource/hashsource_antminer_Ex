int __fastcall sub_B3B28(int a1)
{
  int v1; // r0
  int v2; // r0
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  _BYTE v5[4096]; // [sp+810h] [bp-1000h] BYREF

  v1 = snprintf(s, 0x800u, "gpio port %d is not a supported key", a1);
  V_LOCK(v1);
  v2 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v2);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/backend/device/hal/platform/zynqmp/zynqmp_ui.c",
           167,
           "gpio_key_callback",
           17,
           138,
           80,
           v5);
}
