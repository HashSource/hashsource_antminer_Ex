int __fastcall i2c_ioctl(int a1, int a2, int a3)
{
  _DWORD *v6; // r4
  int v7; // r0
  void *v8; // r5
  int v10; // r0
  _BYTE v11[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_18E280) )
  {
    V_LOCK(*(_DWORD *)"c lock");
    v10 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v10);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      174,
      "i2c_ioctl",
      9,
      207,
      100,
      v11);
    return -4;
  }
  else
  {
    v6 = new_iterator_c_map(dword_18E29C);
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
    pthread_mutex_unlock(&stru_18E280);
    return 0;
  }
}
