int __fastcall gpio_reg_callback(int a1, int a2)
{
  int v4; // r2
  int v5; // [sp+14h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  _DWORD v7[1025]; // [sp+818h] [bp-1004h] BYREF

  v5 = a1;
  if ( !a2 )
  {
    strcpy(s, "bad param");
    V_LOCK();
    logfmt_raw((char *)v7, 0x1000u, 0, s);
    V_UNLOCK();
    v4 = 146;
    goto LABEL_9;
  }
  if ( pthread_mutex_lock(&stru_1B3288) )
  {
    strcpy(s, "fail to lock gpio ctrl mutex");
    V_LOCK();
    logfmt_raw((char *)v7, 0x1000u, 0, s);
    V_UNLOCK();
    v4 = 151;
LABEL_9:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_gpio.c",
      175,
      "gpio_reg_callback",
      17,
      v4,
      100,
      v7);
    return -1;
  }
  if ( exists_c_map((int *)dword_1B32A0, (int)&v5) )
  {
    snprintf(s, 0x800u, "port %d already exist in callback map ", v5);
    V_LOCK();
    logfmt_raw((char *)v7, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_gpio.c",
      175,
      "gpio_reg_callback",
      17,
      164,
      20,
      v7);
  }
  else
  {
    snprintf(s, 0x800u, "add %d to callback map", v5);
    V_LOCK();
    logfmt_raw((char *)v7, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_gpio.c",
      175,
      "gpio_reg_callback",
      17,
      157,
      20,
      v7);
    v7[0] = a2;
    v7[1] = -1;
    insert_c_map((int *)dword_1B32A0, &v5, 4u, v7, 8u);
  }
  pthread_mutex_unlock(&stru_1B3288);
  return 0;
}
