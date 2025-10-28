int __fastcall iic_read_reg(int a1, int a2, int a3, int a4, int a5)
{
  int reg; // r4
  char v11[2048]; // [sp+10h] [bp-1804h] BYREF
  char v12[4080]; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_16C1F8) )
  {
    reg = -4;
    strcpy(v11, "failed to i2c lock");
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_iic.c",
      168,
      "iic_read_reg",
      12,
      162,
      100,
      v12);
  }
  else
  {
    reg = i2c_read_reg(a1, a2, a3, a4, a5);
    pthread_mutex_unlock(&stru_16C1F8);
  }
  return reg;
}
