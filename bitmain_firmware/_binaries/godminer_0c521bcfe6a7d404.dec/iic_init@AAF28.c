int __fastcall iic_init(int a1)
{
  int v2; // r3
  bool v3; // zf
  int v4; // r5
  int v6; // r0
  int v7; // r12
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  _BYTE v15[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_18D518) )
  {
    v4 = -4;
    V_LOCK(*(_DWORD *)"failed to iic lock");
    v14 = logfmt_raw((int)v15, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_iic.c",
      174,
      "iic_init",
      8,
      21,
      100,
      v15);
    return v4;
  }
  if ( !a1 )
  {
    pthread_mutex_unlock(&stru_18D518);
    V_LOCK(*(_DWORD *)"bad param");
    v12 = logfmt_raw((int)v15, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_iic.c",
      174,
      "iic_init",
      8,
      28,
      100,
      v15);
  }
  if ( *(_WORD *)(a1 + 4) )
    goto LABEL_8;
  v2 = *(unsigned __int8 *)(a1 + 6);
  v3 = v2 == 4;
  if ( v2 != 4 )
    v3 = v2 == 10;
  if ( v3 )
  {
    v8 = hal_chain_i2c_dev(*(unsigned __int8 *)(a1 + 7));
    v4 = i2c_init(v8);
    if ( v4 < 0 )
    {
      v4 = -1;
      V_LOCK(*(_DWORD *)"failed to i2c_init");
      v11 = logfmt_raw((int)v15, 0x1000u);
      V_UNLOCK(v11);
      v7 = 47;
    }
    else
    {
      if ( !((int (*)(void))i2c_ioctl)() )
        goto LABEL_13;
      v4 = -1;
      V_LOCK(*(_DWORD *)"failed to i2c_ioctl");
      v9 = logfmt_raw((int)v15, 0x1000u);
      V_UNLOCK(v9);
      v7 = 55;
    }
  }
  else
  {
LABEL_8:
    v4 = i2c_init("power-api");
    if ( v4 < 0 )
    {
      V_LOCK(*(_DWORD *)"failed to i2c_init");
      v13 = logfmt_raw((int)v15, 0x1000u);
      V_UNLOCK(v13);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/platform/7020/7020_iic.c",
        174,
        "iic_init",
        8,
        73,
        100,
        v15);
    }
    if ( i2c_select(v4, *(unsigned __int16 *)(a1 + 4)) )
    {
      V_LOCK(*(_DWORD *)"lect");
      v10 = logfmt_raw((int)v15, 0x1000u);
      V_UNLOCK(v10);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/platform/7020/7020_iic.c",
        174,
        "iic_init",
        8,
        82,
        100,
        v15);
    }
    if ( !i2c_ioctl(v4, 1795, (2 * *(unsigned __int8 *)(a1 + 7)) | (16 * *(unsigned __int8 *)(a1 + 6))) )
      goto LABEL_13;
    V_LOCK(*(_DWORD *)"failed to i2c_ioctl");
    v6 = logfmt_raw((int)v15, 0x1000u);
    V_UNLOCK(v6);
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
    v15);
LABEL_13:
  pthread_mutex_unlock(&stru_18D518);
  return v4;
}
