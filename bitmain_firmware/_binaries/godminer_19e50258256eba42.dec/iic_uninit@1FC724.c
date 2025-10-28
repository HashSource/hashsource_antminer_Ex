int __fastcall iic_uninit(int a1)
{
  char v3[2048]; // [sp+1Ch] [bp-1808h] BYREF
  _DWORD v4[1025]; // [sp+81Ch] [bp-1008h] BYREF

  v4[1024] = 0;
  if ( pthread_mutex_lock(&stru_C25AE8) )
  {
    strcpy(v3, "failed to i2c lock");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_iic.c",
             177,
             "iic_uninit",
             10,
             65,
             100,
             v4);
  }
  else
  {
    i2c_uninit(a1);
    return pthread_mutex_unlock(&stru_C25AE8);
  }
}
