int __fastcall iic_init(int a1)
{
  int v2; // r6
  int v3; // r3
  bool v4; // zf
  int v5; // r5
  int v7; // r12
  int *v8; // r0
  int v9; // r0
  char v10[2048]; // [sp+10h] [bp-1800h] BYREF
  char v11[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_1B32C0) )
  {
    v5 = -4;
    strcpy(v10, "failed to iic lock");
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_iic.c",
      174,
      "iic_init",
      8,
      21,
      100,
      v11);
    return v5;
  }
  if ( !a1 )
  {
    pthread_mutex_unlock(&stru_1B32C0);
    strcpy(v10, "bad param");
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_iic.c",
      174,
      "iic_init",
      8,
      28,
      100,
      v11);
  }
  v2 = *(unsigned __int16 *)(a1 + 4);
  if ( *(_WORD *)(a1 + 4) )
    goto LABEL_8;
  v3 = *(unsigned __int8 *)(a1 + 6);
  v4 = v3 == 4;
  if ( v3 != 4 )
    v4 = v3 == 10;
  if ( v4 )
  {
    v8 = hal_chain_i2c_dev(*(unsigned __int8 *)(a1 + 7));
    v9 = i2c_init((const char *)v8);
    v5 = v9;
    if ( v9 < 0 )
    {
      v5 = -1;
      strcpy(v10, "failed to i2c_init");
      V_LOCK();
      logfmt_raw(v11, 0x1000u, v2, v10);
      V_UNLOCK();
      v7 = 47;
    }
    else
    {
      if ( !i2c_ioctl(v9, 1795, 16 * *(unsigned __int8 *)(a1 + 6)) )
        goto LABEL_13;
      v5 = -1;
      strcpy(v10, "failed to i2c_ioctl");
      V_LOCK();
      logfmt_raw(v11, 0x1000u, v2, v10);
      V_UNLOCK();
      v7 = 55;
    }
  }
  else
  {
LABEL_8:
    v5 = i2c_init("power-api");
    if ( v5 < 0 )
    {
      strcpy(v10, "failed to i2c_init");
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/platform/7020/7020_iic.c",
        174,
        "iic_init",
        8,
        73,
        100,
        v11);
    }
    if ( i2c_select(v5, *(unsigned __int16 *)(a1 + 4)) )
    {
      strcpy(v10, "failed to i2c_select");
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/platform/7020/7020_iic.c",
        174,
        "iic_init",
        8,
        82,
        100,
        v11);
    }
    if ( !i2c_ioctl(v5, 1795, (2 * *(unsigned __int8 *)(a1 + 7)) | (16 * *(unsigned __int8 *)(a1 + 6))) )
      goto LABEL_13;
    strcpy(v10, "failed to i2c_ioctl");
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    v7 = 87;
  }
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/device/hal/platform/7020/7020_iic.c",
    174,
    "iic_init",
    8,
    v7,
    100,
    v11);
LABEL_13:
  pthread_mutex_unlock(&stru_1B32C0);
  return v5;
}
