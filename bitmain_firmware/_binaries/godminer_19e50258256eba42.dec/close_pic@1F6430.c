int __fastcall close_pic(int result)
{
  unsigned __int8 v1; // [sp+17h] [bp-1805h]
  char v2[4]; // [sp+18h] [bp-1804h] BYREF
  int v3; // [sp+818h] [bp-1004h] BYREF

  v1 = result;
  if ( (unsigned __int8)result <= 0xFu )
  {
    if ( g_bitmain_pic_state[2 * (unsigned __int8)result] || g_bitmain_pic_state[2 * (unsigned __int8)result + 1] )
    {
      pthread_mutex_lock(&i2c_mutex_all);
      iic_uninit(g_bitmain_pic_state[2 * v1]);
      g_bitmain_pic_state[2 * v1 + 1] = 0;
      return pthread_mutex_unlock(&i2c_mutex_all);
    }
  }
  else
  {
    snprintf(v2, 0x800u, "%s: Bad pic param, input chain is %d", "close_pic", (unsigned __int8)result);
    V_LOCK();
    logfmt_raw(&v3, 0x1000u, 0, v2);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
             165,
             "close_pic",
             9,
             808,
             100,
             &v3);
  }
  return result;
}
