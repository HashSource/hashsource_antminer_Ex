int __fastcall i2c_init(const char *a1)
{
  _DWORD *v2; // r0
  int (**v3)(void); // r4
  int v4; // r5
  bool v5; // zf
  void *v6; // r0
  int v7; // r8
  int v8; // r5
  int v9; // r4
  int v11; // r12
  int v12; // r0
  int v13; // r3
  int v14; // r1
  char v15[2048]; // [sp+10h] [bp-1800h] BYREF
  _DWORD s[1024]; // [sp+810h] [bp-1000h] BYREF

  if ( !platform_inited[0] )
  {
    v9 = -2;
    strcpy(v15, "please init platform first!");
    V_LOCK();
    logfmt_raw((char *)s, 0x1000u, 0, v15);
    V_UNLOCK();
    v11 = 73;
    v12 = g_zc;
    LOWORD(v13) = (unsigned __int16)"i2c_init";
    LOWORD(v14) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/"
                                    "tmp/release/build/godminer-origin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c";
LABEL_21:
    HIWORD(v13) = (unsigned int)"i2c_init" >> 16;
    HIWORD(v14) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/"
                                "release/build/godminer-origin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c" >> 16;
    zlog(v12, v14, 174, v13, 8, v11, 100, s);
    return v9;
  }
  if ( pthread_mutex_lock(&stru_1B402C) )
  {
    v9 = -4;
    strcpy(v15, "failed to get i2c lock");
    V_LOCK();
    logfmt_raw((char *)s, 0x1000u, 0, v15);
    V_UNLOCK();
    v11 = 79;
    v12 = g_zc;
    LOWORD(v13) = 30980;
    LOWORD(v14) = 31132;
    goto LABEL_21;
  }
  if ( dword_1B4044 )
  {
    v2 = (_DWORD *)dword_1B4048;
  }
  else
  {
    v2 = new_c_map((int)sub_D1924, 0, 0);
    dword_1B4048 = (int)v2;
  }
  v3 = (int (**)(void))new_iterator_c_map((int)v2);
  if ( !(*v3)() )
  {
LABEL_16:
    delete_iterator_c_map(v3);
    if ( !strcmp("power-api", a1) )
    {
      s[0] = 0;
      strcpy((char *)&s[4], "power-api");
      s[1] = 0;
      s[2] = ++dword_1B4044;
      s[3] = 255;
      memset((char *)&s[6] + 2, 0, 0x76u);
      insert_c_map((int *)dword_1B4048, &dword_1B4044, 4u, s, 0x90u);
      v9 = dword_1B4044;
      goto LABEL_14;
    }
    v7 = open64(a1);
LABEL_12:
    if ( v7 < 0 )
    {
      snprintf(v15, 0x800u, "failed to open %s", a1);
      V_LOCK();
      logfmt_raw((char *)s, 0x1000u, 0, v15);
      V_UNLOCK();
      v9 = -1;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
        174,
        "i2c_init",
        8,
        126,
        100,
        s);
      pthread_mutex_unlock(&stru_1B402C);
      return v9;
    }
    memset(s, 0, 0x90u);
    s[3] = v7;
    s[2] = ++dword_1B4044;
    strncpy((char *)&s[4], a1, 0x80u);
    insert_c_map((int *)dword_1B4048, &dword_1B4044, 4u, s, 0x90u);
    v9 = dword_1B4044;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v4 = v3[2]();
    v5 = strcmp((const char *)(v4 + 16), a1) == 0;
    v6 = (void *)v4;
    if ( v5 )
      break;
    free((void *)v4);
    if ( !((int (__fastcall *)(int (**)(void)))*v3)(v3) )
      goto LABEL_16;
  }
  v7 = *(_DWORD *)(v4 + 12);
  v8 = *(_DWORD *)(v4 + 8);
  free(v6);
  delete_iterator_c_map(v3);
  if ( strcmp("power-api", a1) )
    goto LABEL_12;
  v9 = v8;
LABEL_14:
  pthread_mutex_unlock(&stru_1B402C);
  return v9;
}
