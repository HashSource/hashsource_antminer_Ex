int __fastcall gpio_unreg_callback(int a1, int a2)
{
  int v3; // r2
  int v4; // [sp+14h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  char v6[4100]; // [sp+818h] [bp-1004h] BYREF

  v4 = a1;
  if ( !a2 )
  {
    strcpy(s, "bad param");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    v3 = 182;
    goto LABEL_9;
  }
  if ( pthread_mutex_lock(&stru_16C1C0) )
  {
    strcpy(s, "fail to lock gpio ctrl mutex");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    v3 = 188;
LABEL_9:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_gpio.c",
      169,
      "gpio_unreg_callback",
      19,
      v3,
      100,
      v6);
    return -1;
  }
  if ( exists_c_map((int *)dword_16C1D8, (int)&v4) == (int *)1 )
  {
    snprintf(s, 0x800u, "remove %d from callback list", v4);
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_gpio.c",
      169,
      "gpio_unreg_callback",
      19,
      194,
      20,
      v6);
    remove_c_map((int *)dword_16C1D8, (int)&v4);
  }
  else
  {
    strcpy(s, "callback function not registered before");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_gpio.c",
      169,
      "gpio_unreg_callback",
      19,
      199,
      80,
      v6);
  }
  pthread_mutex_unlock(&stru_16C1C0);
  return 0;
}
