int __fastcall i2c_ioctl(int a1, int a2, int a3)
{
  _DWORD *v6; // r4
  int v7; // r0
  void *v8; // r5
  char v10[2048]; // [sp+10h] [bp-1804h] BYREF
  char v11[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_16C6C0) )
  {
    strcpy(v10, "failed to get i2c lock");
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_i2c.c",
      168,
      "i2c_ioctl",
      9,
      206,
      100,
      v11);
    return -4;
  }
  else
  {
    v6 = new_iterator_c_map(dword_16C6DC);
    if ( ((int (*)(void))*v6)() )
    {
      while ( ***(_DWORD ***)(v6[5] + 16) != a1 )
      {
        if ( !((int (__fastcall *)(_DWORD *))*v6)(v6) )
          goto LABEL_8;
      }
      v7 = ((int (*)(void))v6[2])();
      v8 = (void *)v7;
      if ( a2 == 1795 )
      {
        *(_DWORD *)(v7 + 4) = a3;
        ((void (__fastcall *)(_DWORD *, int, int))v6[1])(v6, v7, 144);
        free(v8);
      }
    }
LABEL_8:
    delete_iterator_c_map(v6);
    pthread_mutex_unlock(&stru_16C6C0);
    return 0;
  }
}
