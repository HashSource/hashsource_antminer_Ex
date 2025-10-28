int __fastcall iic_read_reg(int a1, unsigned __int8 *a2, int a3, int a4, unsigned int a5)
{
  char v11[2048]; // [sp+20h] [bp-1804h] BYREF
  int v12; // [sp+820h] [bp-1004h] BYREF
  int reg; // [sp+1828h] [bp+4h]

  if ( pthread_mutex_lock(&stru_C25AE8) )
  {
    strcpy(v11, "failed to i2c lock");
    V_LOCK();
    logfmt_raw(&v12, 0x1000u, 0, v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_iic.c",
      177,
      "iic_read_reg",
      12,
      147,
      100,
      &v12);
    return -4;
  }
  else
  {
    reg = i2c_read_reg(a1, a2, a3, a4, a5);
    pthread_mutex_unlock(&stru_C25AE8);
    return reg;
  }
}
