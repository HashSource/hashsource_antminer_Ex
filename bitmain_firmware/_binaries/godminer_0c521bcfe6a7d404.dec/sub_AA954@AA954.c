void __noreturn sub_AA954()
{
  _DWORD *v0; // r5
  int v1; // r0
  int v2; // r0
  void (__fastcall *v3)(_DWORD *, _DWORD *, int); // r3
  int v4; // r8
  _DWORD *v5; // r6
  int v6; // r7
  int v7; // r0
  int v8; // r0
  unsigned __int8 v9; // [sp+1Fh] [bp-1805h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  _DWORD v11[1025]; // [sp+820h] [bp-1004h] BYREF

  if ( !pthread_mutex_lock(&stru_18D4E0) )
  {
    v0 = (_DWORD *)new_iterator_c_map(dword_18D4F8);
    if ( ((int (*)(void))*v0)() )
    {
      while ( 1 )
      {
        v4 = v0[5];
        v5 = (_DWORD *)((int (*)(void))v0[2])();
        v6 = ***(_DWORD ***)(v4 + 16);
        v9 = 0;
        if ( gpio_read(v6, &v9) )
          break;
        if ( v5[1] != v9 )
        {
          v1 = snprintf(s, 0x800u, "gpio port %d, last val = %d, new val = %d", ***(_DWORD ***)(v4 + 16), v5[1], v9);
          V_LOCK(v1);
          v2 = logfmt_raw((int)v11, 0x1000u);
          V_UNLOCK(v2);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/backend/device/hal/platform/7020/7020_gpio.c",
            175,
            "gpio_thread_function",
            20,
            72,
            20,
            v11);
          ((void (__fastcall *)(int, _DWORD))*v5)(v6, v9);
          v3 = (void (__fastcall *)(_DWORD *, _DWORD *, int))v0[1];
          v11[0] = *v5;
          v11[1] = v9;
          v3(v0, v11, 8);
        }
        free(v5);
        if ( !((int (__fastcall *)(_DWORD *))*v0)(v0) )
          goto LABEL_10;
      }
      v7 = snprintf(s, 0x800u, "failed to read gpio port %d", v6);
      V_LOCK(v7);
      v8 = logfmt_raw((int)v11, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/platform/7020/7020_gpio.c",
        175,
        "gpio_thread_function",
        20,
        65,
        20,
        v11);
      free(v5);
    }
LABEL_10:
    delete_iterator_c_map(v0);
    pthread_mutex_unlock(&stru_18D4E0);
  }
  usleep((__useconds_t)sub_30D40);
  pthread_exit(0);
}
