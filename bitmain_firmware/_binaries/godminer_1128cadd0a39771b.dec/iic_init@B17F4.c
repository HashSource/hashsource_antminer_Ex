int __fastcall iic_init(int a1)
{
  int v2; // r3
  bool v3; // zf
  int v4; // r8
  int v5; // r0
  int v6; // r0
  int v8; // r0
  int v9; // r0
  int v10; // lr
  int v11; // r12
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  char v21[2048]; // [sp+10h] [bp-1800h] BYREF
  _BYTE v22[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_16D214) )
  {
    v4 = -4;
    strcpy(v21, "failed to iic lock");
    V_LOCK(*(_DWORD *)"failed to iic lock");
    v20 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v20);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_iic.c",
      168,
      "iic_init",
      8,
      21,
      100,
      v22);
    return v4;
  }
  if ( !a1 )
  {
    pthread_mutex_unlock(&stru_16D214);
    strcpy(v21, "bad param");
    V_LOCK(*(_DWORD *)"bad param");
    v16 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v16);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_iic.c",
      168,
      "iic_init",
      8,
      28,
      100,
      v22);
  }
  if ( *(_WORD *)(a1 + 4) )
    goto LABEL_8;
  v2 = *(unsigned __int8 *)(a1 + 6);
  v3 = v2 == 4;
  if ( v2 != 4 )
    v3 = v2 == 10;
  if ( v3 )
  {
    v12 = hal_chain_i2c_dev(*(unsigned __int8 *)(a1 + 7));
    v4 = i2c_init(v12);
    if ( v4 < 0 )
    {
      v4 = -1;
      strcpy(v21, "failed to i2c_init");
      V_LOCK(*(_DWORD *)"failed to i2c_init");
      v15 = logfmt_raw((int)v22, 0x1000u);
      V_UNLOCK(v15);
      v9 = g_zc;
      v10 = 100;
      v11 = 42;
    }
    else if ( ((int (*)(void))i2c_ioctl)() )
    {
      v4 = -1;
      strcpy(v21, "failed to i2c_ioctl");
      V_LOCK(*(_DWORD *)"failed to i2c_ioctl");
      v13 = logfmt_raw((int)v22, 0x1000u);
      V_UNLOCK(v13);
      v9 = g_zc;
      v10 = 100;
      v11 = 50;
    }
    else
    {
      v18 = snprintf(
              v21,
              0x800u,
              "init i2c chain = %d, master = 0x%x, slave = 0x%x",
              *(_DWORD *)a1,
              *(unsigned __int16 *)(a1 + 4),
              *(unsigned __int8 *)(a1 + 7) | (8 * *(unsigned __int8 *)(a1 + 6)));
      V_LOCK(v18);
      v19 = logfmt_raw((int)v22, 0x1000u);
      V_UNLOCK(v19);
      v9 = g_zc;
      v10 = 20;
      v11 = 57;
    }
  }
  else
  {
LABEL_8:
    v4 = i2c_init("power-api");
    if ( v4 < 0 )
    {
      strcpy(v21, "failed to i2c_init");
      V_LOCK(*(_DWORD *)"failed to i2c_init");
      v17 = logfmt_raw((int)v22, 0x1000u);
      V_UNLOCK(v17);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_iic.c",
        168,
        "iic_init",
        8,
        66,
        100,
        v22);
    }
    v5 = snprintf(
           v21,
           0x800u,
           "i2c chain = %d, master = 0x%x, slave_h = 0x%x, slave_l = 0x%x",
           *(_DWORD *)a1,
           *(unsigned __int16 *)(a1 + 4),
           *(unsigned __int8 *)(a1 + 6),
           *(unsigned __int8 *)(a1 + 7));
    V_LOCK(v5);
    v6 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_iic.c",
      168,
      "iic_init",
      8,
      70,
      20,
      v22);
    if ( i2c_select(v4, *(unsigned __int16 *)(a1 + 4)) )
    {
      strcpy(v21, "failed to i2c_select");
      V_LOCK(*(_DWORD *)"lect");
      v14 = logfmt_raw((int)v22, 0x1000u);
      V_UNLOCK(v14);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_iic.c",
        168,
        "iic_init",
        8,
        73,
        100,
        v22);
    }
    if ( !i2c_ioctl(v4, 1795, (2 * *(unsigned __int8 *)(a1 + 7)) | (16 * *(unsigned __int8 *)(a1 + 6))) )
      goto LABEL_13;
    strcpy(v21, "failed to i2c_ioctl");
    V_LOCK(*(_DWORD *)"failed to i2c_ioctl");
    v8 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v8);
    v9 = g_zc;
    v10 = 100;
    v11 = 78;
  }
  zlog(
    v9,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_iic.c",
    168,
    "iic_init",
    8,
    v11,
    v10,
    v22);
LABEL_13:
  pthread_mutex_unlock(&stru_16D214);
  return v4;
}
