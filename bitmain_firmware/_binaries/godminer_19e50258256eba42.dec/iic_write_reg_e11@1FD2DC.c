int __fastcall iic_write_reg_e11(int a1, unsigned __int8 *a2, int a3, int a4, unsigned int a5, int a6)
{
  char v12[2048]; // [sp+20h] [bp-1804h] BYREF
  int v13; // [sp+820h] [bp-1004h] BYREF
  int v14; // [sp+1828h] [bp+4h]

  if ( pthread_mutex_lock(&stru_C25B00[a6]) )
  {
    strcpy(v12, "failed to i2c lock");
    V_LOCK();
    logfmt_raw(&v13, 0x1000u, 0, v12);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_iic.c",
      177,
      "iic_write_reg_e11",
      17,
      190,
      100,
      &v13);
    return -4;
  }
  else
  {
    v14 = i2c_write_reg_e11(a1, a2, a3, a4, a5, a6);
    pthread_mutex_unlock(&stru_C25B00[a6]);
    return v14;
  }
}
