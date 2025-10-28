int fpga_chain_reset_all()
{
  int v0; // r0
  int v1; // r0
  unsigned int v3; // [sp+14h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  _BYTE v5[4100]; // [sp+818h] [bp-1004h] BYREF

  v3 = 0;
  fpga_read(52, &v3);
  fpga_write(52, ~(~HIWORD(v3) << 16));
  sleep(3u);
  fpga_read(52, &v3);
  fpga_write(52, HIWORD(v3) << 16);
  sleep(1u);
  v0 = snprintf(s, 0x800u, "fpga fpga_chain_reset_all success 0x%x", v3);
  V_LOCK(v0);
  v1 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v1);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/backend/device/hal/platform/zynqmp/zynqmp_common.c",
           171,
           "fpga_chain_reset_all",
           20,
           268,
           20,
           v5);
}
