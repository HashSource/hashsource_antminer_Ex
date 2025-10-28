void __noreturn sub_B0380()
{
  _DWORD *v0; // r5
  void (__fastcall *v1)(_DWORD *, _DWORD *, int); // r3
  int v2; // r8
  _DWORD *v3; // r6
  int v4; // r7
  unsigned __int8 v5; // [sp+1Fh] [bp-1805h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  _DWORD v7[1025]; // [sp+820h] [bp-1004h] BYREF

  if ( !pthread_mutex_lock(&stru_16C1C0) )
  {
    v0 = new_iterator_c_map(dword_16C1D8);
    if ( ((int (*)(void))*v0)() )
    {
      while ( 1 )
      {
        v2 = v0[5];
        v3 = (_DWORD *)((int (*)(void))v0[2])();
        v4 = ***(_DWORD ***)(v2 + 16);
        v5 = 0;
        if ( gpio_read(v4, &v5) )
          break;
        if ( v3[1] != v5 )
        {
          snprintf(s, 0x800u, "gpio port %d, last val = %d, new val = %d", ***(_DWORD ***)(v2 + 16), v3[1], v5);
          V_LOCK();
          logfmt_raw((char *)v7, 0x1000u, 0, s);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/zynqmp/zynqmp_gpio.c",
            169,
            "gpio_thread_function",
            20,
            72,
            20,
            v7);
          ((void (__fastcall *)(int, _DWORD))*v3)(v4, v5);
          v1 = (void (__fastcall *)(_DWORD *, _DWORD *, int))v0[1];
          v7[0] = *v3;
          v7[1] = v5;
          v1(v0, v7, 8);
        }
        free(v3);
        if ( !((int (__fastcall *)(_DWORD *))*v0)(v0) )
          goto LABEL_10;
      }
      snprintf(s, 0x800u, "failed to read gpio port %d", v4);
      V_LOCK();
      logfmt_raw((char *)v7, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_gpio.c",
        169,
        "gpio_thread_function",
        20,
        65,
        20,
        v7);
      free(v3);
    }
LABEL_10:
    delete_iterator_c_map(v0);
    pthread_mutex_unlock(&stru_16C1C0);
  }
  usleep(0x30D40u);
  pthread_exit(0);
}
