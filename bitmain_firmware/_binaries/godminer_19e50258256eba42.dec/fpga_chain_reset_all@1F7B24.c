__int64 fpga_chain_reset_all()
{
  char v1[8]; // [sp+14h] [bp-1808h] BYREF
  _BYTE v2[8]; // [sp+814h] [bp-1008h] BYREF
  unsigned int v3; // [sp+1814h] [bp-8h] BYREF

  v3 = 0;
  fpga_read(52, &v3);
  fpga_write(52, HIWORD(v3) << 16);
  sleep(3u);
  fpga_read(52, &v3);
  fpga_write(52, ~(~HIWORD(v3) << 16));
  sleep(1u);
  snprintf(v1, 0x800u, "fpga fpga_chain_reset_all success 0x%x", v3);
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, v1);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/device/hal/platform/7007e11/7007e11_common.c",
           180,
           "fpga_chain_reset_all",
           20,
           370,
           20,
           v2);
}
