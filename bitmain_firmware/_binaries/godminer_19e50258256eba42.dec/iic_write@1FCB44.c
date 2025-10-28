int __fastcall iic_write(int a1, int a2, unsigned int a3)
{
  int v6; // [sp+14h] [bp-1810h]
  char v9[2048]; // [sp+20h] [bp-1804h] BYREF
  int v10; // [sp+820h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_C25AE8) )
  {
    strcpy(v9, "failed to i2c lock");
    V_LOCK();
    logfmt_raw(&v10, 0x1000u, 0, v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_iic.c",
      177,
      "iic_write",
      9,
      115,
      100,
      &v10);
    return -4;
  }
  else
  {
    v6 = i2c_write(a1, a2, a3);
    pthread_mutex_unlock(&stru_C25AE8);
    return v6;
  }
}
