int __fastcall gpio_reg_callback(int a1, int a2)
{
  int v3; // r0
  int v4; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r2
  int v10; // r0
  int v11; // [sp+14h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  _DWORD v13[1025]; // [sp+818h] [bp-1004h] BYREF

  v11 = a1;
  if ( !a2 )
  {
    strcpy(s, "bad param");
    V_LOCK(*(_DWORD *)"bad param");
    v10 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v10);
    v9 = 146;
    goto LABEL_9;
  }
  if ( pthread_mutex_lock(&stru_1770D0) )
  {
    strcpy(s, "fail to lock gpio ctrl mutex");
    V_LOCK(*(_DWORD *)"o ctrl mutex");
    v8 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v8);
    v9 = 151;
LABEL_9:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7020/7020_gpio.c",
      171,
      "gpio_reg_callback",
      17,
      v9,
      100,
      v13);
    return -1;
  }
  if ( exists_c_map(dword_1770E8, &v11) )
  {
    v3 = snprintf(s, 0x800u, "port %d already exist in callback map ", v11);
    V_LOCK(v3);
    v4 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7020/7020_gpio.c",
      171,
      "gpio_reg_callback",
      17,
      164,
      20,
      v13);
  }
  else
  {
    v6 = snprintf(s, 0x800u, "add %d to callback map", v11);
    V_LOCK(v6);
    v7 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v7);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7020/7020_gpio.c",
      171,
      "gpio_reg_callback",
      17,
      157,
      20,
      v13);
    v13[0] = a2;
    v13[1] = -1;
    insert_c_map(dword_1770E8, &v11, 4, v13, 8);
  }
  pthread_mutex_unlock(&stru_1770D0);
  return 0;
}
