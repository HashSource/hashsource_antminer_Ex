int __fastcall i2c_select(int a1, int a2)
{
  _DWORD *v4; // r4
  _DWORD *v5; // r5
  void (__fastcall *v6)(_DWORD *, _DWORD *, int); // r3
  int v8; // r0
  _BYTE v9[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_18E280) )
  {
    V_LOCK(*(_DWORD *)"c lock");
    v8 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      174,
      "i2c_select",
      10,
      244,
      100,
      v9);
    return -4;
  }
  else
  {
    v4 = new_iterator_c_map(dword_18E29C);
    if ( ((int (*)(void))*v4)() )
    {
      while ( ***(_DWORD ***)(v4[5] + 16) != a1 )
      {
        if ( !((int (__fastcall *)(_DWORD *))*v4)(v4) )
          goto LABEL_7;
      }
      v5 = (_DWORD *)((int (*)(void))v4[2])();
      v6 = (void (__fastcall *)(_DWORD *, _DWORD *, int))v4[1];
      *v5 = a2;
      v6(v4, v5, 144);
      free(v5);
    }
LABEL_7:
    delete_iterator_c_map(v4);
    pthread_mutex_unlock(&stru_18E280);
    return 0;
  }
}
