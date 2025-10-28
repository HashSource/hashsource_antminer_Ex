int __fastcall i2c_select(int a1, int a2)
{
  char v6[28]; // [sp+18h] [bp-181Ch] BYREF
  _BYTE v7[28]; // [sp+818h] [bp-101Ch] BYREF
  _DWORD v8[2]; // [sp+1818h] [bp-1Ch] BYREF
  void *ptr; // [sp+1820h] [bp-14h]
  int v10; // [sp+1824h] [bp-10h]
  int i; // [sp+1828h] [bp-Ch]
  _DWORD *v12; // [sp+182Ch] [bp-8h]

  if ( pthread_mutex_lock(&stru_C268DC) )
  {
    strcpy(v6, "failed to i2c lock");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
      177,
      "i2c_select",
      10,
      804,
      100,
      v7);
    return -4;
  }
  else
  {
    v12 = new_iterator_c_map(dword_C2696C);
    for ( i = ((int (__fastcall *)(_DWORD *))*v12)(v12); i; i = ((int (__fastcall *)(_DWORD *))*v12)(v12) )
    {
      v10 = v12[5];
      if ( ***(_DWORD ***)(v10 + 16) == a1 )
      {
        ptr = (void *)((int (__fastcall *)(int))v12[2])(i);
        v8[0] = a2;
        v8[1] = *((_DWORD *)ptr + 1);
        ((void (__fastcall *)(_DWORD *, _DWORD *, int))v12[1])(v12, v8, 8);
        snprintf(v6, 0x800u, "update the master address to %d", a2);
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
          177,
          "i2c_select",
          10,
          815,
          20,
          v7);
        free(ptr);
        break;
      }
    }
    delete_iterator_c_map(v12);
    pthread_mutex_unlock(&stru_C268DC);
    return 0;
  }
}
