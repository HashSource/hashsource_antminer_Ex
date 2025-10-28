int api()
{
  int result; // r0
  int *v1; // r0
  char *v2; // r0
  size_t v3; // r0
  struct __jmp_buf_tag v4; // [sp+10h] [bp-B20Ch] BYREF
  _BYTE v5[244]; // [sp+128h] [bp-B0F4h] BYREF
  _BYTE v6[244]; // [sp+1128h] [bp-A0F4h] BYREF
  _BYTE v7[244]; // [sp+2128h] [bp-90F4h] BYREF
  _BYTE v8[244]; // [sp+3128h] [bp-80F4h] BYREF
  _BYTE v9[244]; // [sp+4128h] [bp-70F4h] BYREF
  _BYTE v10[244]; // [sp+5128h] [bp-60F4h] BYREF
  _BYTE v11[244]; // [sp+6128h] [bp-50F4h] BYREF
  _BYTE v12[244]; // [sp+7128h] [bp-40F4h] BYREF
  _DWORD v13[2]; // [sp+8128h] [bp-30F4h] BYREF
  int v14; // [sp+8130h] [bp-30ECh] BYREF
  int v15; // [sp+8134h] [bp-30E8h] BYREF
  int v16; // [sp+8138h] [bp-30E4h] BYREF
  unsigned int v17; // [sp+813Ch] [bp-30E0h] BYREF
  char v18[32]; // [sp+8140h] [bp-30DCh] BYREF
  char v19[16]; // [sp+8160h] [bp-30BCh] BYREF
  char v20[4096]; // [sp+8170h] [bp-30ACh] BYREF
  char v21[8192]; // [sp+9170h] [bp-20ACh] BYREF
  socklen_t addr_len; // [sp+B170h] [bp-ACh] BYREF
  struct sockaddr addr; // [sp+B174h] [bp-A8h] BYREF
  int v24; // [sp+B1F4h] [bp-28h] BYREF
  int fd; // [sp+B1F8h] [bp-24h] BYREF
  int v26; // [sp+B1FCh] [bp-20h]
  ssize_t v27; // [sp+B200h] [bp-1Ch]
  char *v28; // [sp+B204h] [bp-18h]
  void *ptr; // [sp+B208h] [bp-14h]
  int *p_fd; // [sp+B20Ch] [bp-10h]
  void (__fastcall *v31)(int *); // [sp+B210h] [bp-Ch]

  v26 = 0;
  fd = -1;
  v24 = -1;
  v27 = 0;
  memset(v21, 0, sizeof(v21));
  memset(v20, 0, sizeof(v20));
  memset(v19, 0, sizeof(v19));
  memset(v18, 0, sizeof(v18));
  v17 = 2;
  v28 = 0;
  ptr = 0;
  result = is_fixed_freq_mode();
  if ( !result )
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "Start api function");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "api",
      3,
      3246,
      60,
      v5);
    v31 = (void (__fastcall *)(int *))sub_366F4;
    p_fd = &fd;
    if ( _sigsetjmp(&v4, 0) )
    {
      v31(p_fd);
      _pthread_unwind_next((__pthread_unwind_buf_t *)&v4);
    }
    _pthread_register_cancel((__pthread_unwind_buf_t *)&v4);
    v26 = sub_35830();
    if ( v26 >= 0 )
    {
      fd = v26;
      sub_370CC(1);
      while ( byte_5AC202 != 1 )
      {
        addr_len = 128;
        v24 = accept(fd, &addr, &addr_len);
        if ( v24 < 0 )
        {
          V_LOCK();
          v1 = _errno_location();
          v2 = strerror(*v1);
          logfmt_raw(v7, 0x1000u, 0, "%s: exec accept failed (%s)", "api", v2);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/api_new.c",
            137,
            "api",
            3,
            3266,
            100,
            v7);
          break;
        }
        v16 = 1;
        v15 = 5;
        v14 = 2;
        setsockopt(v24, 1, 9, &v16, 4u);
        setsockopt(v24, 6, 1, &v16, 4u);
        setsockopt(v24, 6, 6, &v16, 4u);
        setsockopt(v24, 6, 4, &v15, 4u);
        setsockopt(v24, 6, 5, &v14, 4u);
        v13[0] = 10;
        v13[1] = 0;
        v26 = setsockopt(v24, 1, 21, v13, 8u);
        if ( v26 )
        {
          V_LOCK();
          logfmt_raw(v8, 0x1000u, 0, "%s:setsocket SO_SNDTIMEO failed\n", "api");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/api_new.c",
            137,
            "api",
            3,
            3285,
            100,
            v8);
          close(v24);
        }
        v26 = setsockopt(v24, 1, 20, v13, 8u);
        if ( v26 )
        {
          V_LOCK();
          logfmt_raw(v9, 0x1000u, 0, "%s:setsocket SO_RCVTIMEO failed\n", "api");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/api_new.c",
            137,
            "api",
            3,
            3291,
            100,
            v9);
          close(v24);
        }
        v27 = recv(v24, v21, 0xFFFu, 0);
        if ( v27 >= 0 )
        {
          v21[v27] = 0;
          memset(v19, 0, sizeof(v19));
          memset(v18, 0, sizeof(v18));
          memset(byte_5AC208, 0, sizeof(byte_5AC208));
          dword_5AC204 = time(0);
          getnameinfo(&addr, 0x80u, byte_5AC208, 0x10u, 0, 0, 1u);
          V_LOCK();
          logfmt_raw(v10, 0x1000u, 0, "connect_addr: %s", byte_5AC208);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/api_new.c",
            137,
            "api",
            3,
            3308,
            20,
            v10);
          strlen(v21);
          v26 = sub_36E00(&v24, (int)v21);
          if ( v26 )
          {
            v28 = json_object();
            v3 = strlen(v21);
            v26 = sub_35CEC(v21, v3 + 1, v19, v18, &v17);
            if ( v26 >= 0 )
            {
              sub_36438((json_t *)v28, v19, (int)v18, v17);
            }
            else
            {
              V_LOCK();
              logfmt_raw(v11, 0x1000u, 0, "%s: input invaild param format", "api");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/api_new.c",
                137,
                "api",
                3,
                3323,
                100,
                v11);
              sub_2DE54((json_t *)v28, 0, 24, "Missing JSON 'command'");
            }
            if ( v17 == 2 )
            {
              memset(v20, 0, sizeof(v20));
              sub_36C10((const json_t *)v28, v20);
              sub_35F68(&v24, v20);
              sub_28C60((int)v28);
            }
            else
            {
              ptr = json_dumps(v28, 24576);
              sub_35F68(&v24, (char *)ptr);
              sub_28C60((int)v28);
              free(ptr);
            }
          }
        }
        else
        {
          v21[0] = 0;
        }
        close(v24);
      }
      _pthread_unregister_cancel((__pthread_unwind_buf_t *)&v4);
      v31(p_fd);
      sub_370CC(0);
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "End api function !!!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/api_new.c",
        137,
        "api",
        3,
        3354,
        60,
        v12);
      return close(fd);
    }
    else
    {
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, "%s: init socket failed", "api");
      V_UNLOCK();
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmin"
               "er-origin_godminer-new/api_new.c",
               137,
               "api",
               3,
               3253,
               100,
               v6);
    }
  }
  return result;
}
