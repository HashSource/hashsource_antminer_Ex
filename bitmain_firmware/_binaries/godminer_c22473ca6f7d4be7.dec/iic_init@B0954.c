int __fastcall iic_init(int a1)
{
  int v2; // r9
  int v3; // r3
  bool v4; // zf
  int v5; // r8
  int v7; // r0
  int v8; // lr
  int v9; // r12
  int *v10; // r0
  int v11; // r0
  char v12[2048]; // [sp+10h] [bp-1800h] BYREF
  char v13[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_16C1F8) )
  {
    v5 = -4;
    strcpy(v12, "failed to iic lock");
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, v12);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_iic.c",
      168,
      "iic_init",
      8,
      21,
      100,
      v13);
    return v5;
  }
  if ( !a1 )
  {
    pthread_mutex_unlock(&stru_16C1F8);
    strcpy(v12, "bad param");
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, v12);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_iic.c",
      168,
      "iic_init",
      8,
      28,
      100,
      v13);
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
    v10 = hal_chain_i2c_dev(*(unsigned __int8 *)(a1 + 7));
    v11 = i2c_init((const char *)v10);
    v5 = v11;
    if ( v11 < 0 )
    {
      v5 = -1;
      strcpy(v12, "failed to i2c_init");
      V_LOCK();
      logfmt_raw(v13, 0x1000u, v2, v12);
      V_UNLOCK();
      v7 = g_zc;
      v8 = 100;
      v9 = 42;
    }
    else if ( i2c_ioctl(v11, 1795, 16 * *(unsigned __int8 *)(a1 + 6)) )
    {
      v5 = -1;
      strcpy(v12, "failed to i2c_ioctl");
      V_LOCK();
      logfmt_raw(v13, 0x1000u, v2, v12);
      V_UNLOCK();
      v7 = g_zc;
      v8 = 100;
      v9 = 50;
    }
    else
    {
      snprintf(
        v12,
        0x800u,
        "init i2c chain = %d, master = 0x%x, slave = 0x%x",
        *(_DWORD *)a1,
        *(unsigned __int16 *)(a1 + 4),
        *(unsigned __int8 *)(a1 + 7) | (8 * *(unsigned __int8 *)(a1 + 6)));
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, v12);
      V_UNLOCK();
      v7 = g_zc;
      v8 = 20;
      v9 = 57;
    }
  }
  else
  {
LABEL_8:
    v5 = i2c_init("power-api");
    if ( v5 < 0 )
    {
      strcpy(v12, "failed to i2c_init");
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, v12);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_iic.c",
        168,
        "iic_init",
        8,
        66,
        100,
        v13);
    }
    snprintf(
      v12,
      0x800u,
      "i2c chain = %d, master = 0x%x, slave_h = 0x%x, slave_l = 0x%x",
      *(_DWORD *)a1,
      *(unsigned __int16 *)(a1 + 4),
      *(unsigned __int8 *)(a1 + 6),
      *(unsigned __int8 *)(a1 + 7));
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, v12);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_iic.c",
      168,
      "iic_init",
      8,
      70,
      20,
      v13);
    if ( i2c_select(v5, *(unsigned __int16 *)(a1 + 4)) )
    {
      strcpy(v12, "failed to i2c_select");
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, v12);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_iic.c",
        168,
        "iic_init",
        8,
        73,
        100,
        v13);
    }
    if ( !i2c_ioctl(v5, 1795, (2 * *(unsigned __int8 *)(a1 + 7)) | (16 * *(unsigned __int8 *)(a1 + 6))) )
      goto LABEL_13;
    strcpy(v12, "failed to i2c_ioctl");
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, v12);
    V_UNLOCK();
    v7 = g_zc;
    v8 = 100;
    v9 = 78;
  }
  zlog(
    v7,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_iic.c",
    168,
    "iic_init",
    8,
    v9,
    v8,
    v13);
LABEL_13:
  pthread_mutex_unlock(&stru_16C1F8);
  return v5;
}
