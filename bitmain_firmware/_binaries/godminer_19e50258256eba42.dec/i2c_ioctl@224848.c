int __fastcall i2c_ioctl(int a1, __int16 a2, int a3)
{
  char v8[28]; // [sp+20h] [bp-181Ch] BYREF
  _BYTE v9[28]; // [sp+820h] [bp-101Ch] BYREF
  _DWORD v10[2]; // [sp+1820h] [bp-1Ch] BYREF
  void *ptr; // [sp+1828h] [bp-14h]
  int v12; // [sp+182Ch] [bp-10h]
  int i; // [sp+1830h] [bp-Ch]
  _DWORD *v14; // [sp+1834h] [bp-8h]

  if ( pthread_mutex_lock(&stru_C268DC) )
  {
    strcpy(v8, "failed to i2c lock");
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
      177,
      "i2c_ioctl",
      9,
      771,
      100,
      v9);
    return -4;
  }
  else
  {
    v14 = new_iterator_c_map(dword_C2696C);
    for ( i = ((int (__fastcall *)(_DWORD *))*v14)(v14); i; i = ((int (__fastcall *)(_DWORD *))*v14)(v14) )
    {
      v12 = v14[5];
      if ( ***(_DWORD ***)(v12 + 16) == a1 )
      {
        ptr = (void *)((int (__fastcall *)(int))v14[2])(i);
        if ( a2 == 1795 )
        {
          v10[0] = *(_DWORD *)ptr;
          v10[1] = a3;
          ((void (__fastcall *)(_DWORD *, _DWORD *, int))v14[1])(v14, v10, 8);
          snprintf(v8, 0x800u, "update the slave address to %d", a3);
          V_LOCK();
          logfmt_raw(v9, 0x1000u, 0, v8);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
            177,
            "i2c_ioctl",
            9,
            785,
            20,
            v9);
          free(ptr);
        }
        break;
      }
    }
    delete_iterator_c_map(v14);
    pthread_mutex_unlock(&stru_C268DC);
    return 0;
  }
}
