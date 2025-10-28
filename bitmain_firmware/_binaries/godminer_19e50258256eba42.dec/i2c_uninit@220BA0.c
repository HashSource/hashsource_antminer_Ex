int __fastcall i2c_uninit(int a1)
{
  int result; // r0
  _DWORD v2[2]; // [sp+14h] [bp-1818h] BYREF
  char v3[2048]; // [sp+1Ch] [bp-1810h] BYREF
  _BYTE v4[16]; // [sp+81Ch] [bp-1010h] BYREF
  _DWORD *v5; // [sp+181Ch] [bp-10h]
  int i; // [sp+1820h] [bp-Ch]
  int v7; // [sp+1824h] [bp-8h]

  v2[0] = a1;
  v7 = 0;
  if ( pthread_mutex_lock(&stru_C268DC) )
  {
    strcpy(v3, "failed to i2c lock");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
             177,
             "i2c_uninit",
             10,
             62,
             100,
             v4);
  }
  else
  {
    if ( exists_c_map((int *)dword_C2696C, (int)v2) )
    {
      snprintf(v3, 0x800u, "remove %d from callback list", v2[0]);
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
        177,
        "i2c_uninit",
        10,
        66,
        20,
        v4);
      remove_c_map((int *)dword_C2696C, (int)v2);
    }
    else
    {
      snprintf(v3, 0x800u, "ctx(%d) is not inited", v2[0]);
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
        177,
        "i2c_uninit",
        10,
        69,
        80,
        v4);
    }
    v5 = new_iterator_c_map(dword_C2696C);
    for ( i = ((int (__fastcall *)(_DWORD *))*v5)(v5); i; i = ((int (__fastcall *)(_DWORD *))*v5)(v5) )
      ++v7;
    delete_iterator_c_map(v5);
    pthread_mutex_unlock(&stru_C268DC);
    if ( v7 )
    {
      snprintf(v3, 0x800u, "still have %d nodes", v7);
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, v3);
      V_UNLOCK();
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmin"
               "er-origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
               177,
               "i2c_uninit",
               10,
               85,
               20,
               v4);
    }
    else
    {
      strcpy(v3, "all i2c uninited");
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
        177,
        "i2c_uninit",
        10,
        80,
        20,
        v4);
      dword_C26970 = 0;
      result = delete_c_map((void ***)dword_C2696C);
      dword_C2696C = 0;
    }
  }
  return result;
}
