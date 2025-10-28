int __fastcall iic_init(int a1)
{
  char v4[2048]; // [sp+18h] [bp-180Ch] BYREF
  _BYTE v5[12]; // [sp+818h] [bp-100Ch] BYREF
  int v6; // [sp+1818h] [bp-Ch]
  int v7; // [sp+181Ch] [bp-8h]

  v6 = -1;
  v7 = 0;
  if ( pthread_mutex_lock(&stru_C25AE8) )
  {
    strcpy(v4, "failed to iic lock");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_iic.c",
      177,
      "iic_init",
      8,
      21,
      100,
      v5);
    return -4;
  }
  else
  {
    if ( a1 )
    {
      v7 = i2c_init();
      if ( v7 >= 0 )
      {
        snprintf(
          v4,
          0x800u,
          "i2c chain = %d, master = 0x%x, slave high= 0x%x, slave low = 0x%x",
          *(_DWORD *)a1,
          *(unsigned __int16 *)(a1 + 4),
          *(unsigned __int8 *)(a1 + 6),
          *(unsigned __int8 *)(a1 + 7));
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, v4);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007e11/7007e11_iic.c",
          177,
          "iic_init",
          8,
          37,
          20,
          v5);
        if ( i2c_select(v7, *(unsigned __int16 *)(a1 + 4)) )
        {
          strcpy(v4, "failed to i2c_select");
          V_LOCK();
          logfmt_raw(v5, 0x1000u, 0, v4);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_iic.c",
            177,
            "iic_init",
            8,
            39,
            100,
            v5);
          v6 = -1;
        }
        else
        {
          if ( !i2c_ioctl(v7, 1795, (16 * *(unsigned __int8 *)(a1 + 6)) | (2 * *(unsigned __int8 *)(a1 + 7))) )
          {
            pthread_mutex_unlock(&stru_C25AE8);
            return v7;
          }
          strcpy(v4, "failed to i2c_ioctl");
          V_LOCK();
          logfmt_raw(v5, 0x1000u, 0, v4);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_iic.c",
            177,
            "iic_init",
            8,
            44,
            100,
            v5);
          v6 = -1;
        }
      }
      else
      {
        strcpy(v4, "failed to i2c_init");
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, v4);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007e11/7007e11_iic.c",
          177,
          "iic_init",
          8,
          33,
          100,
          v5);
        v6 = -1;
      }
    }
    else
    {
      strcpy(v4, "bad param");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_iic.c",
        177,
        "iic_init",
        8,
        27,
        100,
        v5);
      v6 = -3;
    }
    if ( v7 > 0 )
      i2c_uninit(v7);
    pthread_mutex_unlock(&stru_C25AE8);
    return v6;
  }
}
