int __fastcall iic_read_e11(int a1, int a2, unsigned int a3, int a4)
{
  int e11; // [sp+14h] [bp-1810h]
  char v11[2048]; // [sp+20h] [bp-1804h] BYREF
  int v12; // [sp+820h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_C25B00[a4]) )
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
      "iic_read_e11",
      12,
      95,
      100,
      &v12);
    return -4;
  }
  else
  {
    e11 = i2c_read_e11(a1, a2, a3, a4);
    pthread_mutex_unlock(&stru_C25B00[a4]);
    return e11;
  }
}
