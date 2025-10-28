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
  int v11; // r0
  int v12; // r12
  int v13; // r0
  int v14; // r3
  int v15; // r1
  int v16; // r0
  int v17; // r0
  int v18; // r0
  char v19[2048]; // [sp+10h] [bp-1800h] BYREF
  _DWORD s[1024]; // [sp+810h] [bp-1000h] BYREF

  if ( !platform_inited[0] )
  {
    v9 = -2;
    strcpy(v19, "please init platform first!");
    V_LOCK(*(_DWORD *)"form first!");
    v11 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v11);
    v12 = 73;
    v13 = g_zc;
    LOWORD(v14) = (unsigned __int16)"i2c_init";
    LOWORD(v15) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/"
                                    "tmp/release/build/godminer-origin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c";
LABEL_21:
    HIWORD(v14) = (unsigned int)"i2c_init" >> 16;
    HIWORD(v15) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/"
                                "release/build/godminer-origin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c" >> 16;
    zlog(v13, v15, 174, v14, 8, v12, 100, s);
    return v9;
  }
  if ( pthread_mutex_lock(&stru_18E280) )
  {
    v9 = -4;
    strcpy(v19, "failed to get i2c lock");
    V_LOCK(*(_DWORD *)"c lock");
    v16 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v16);
    v12 = 79;
    v13 = g_zc;
    LOWORD(v14) = 28648;
    LOWORD(v15) = 28800;
    goto LABEL_21;
  }
  if ( dword_18E298 )
  {
    v2 = (_DWORD *)dword_18E29C;
  }
  else
  {
    v2 = new_c_map((int)sub_BB52C, 0, 0);
    dword_18E29C = (int)v2;
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
      s[2] = ++dword_18E298;
      s[3] = 255;
      memset((char *)&s[6] + 2, 0, 0x76u);
      insert_c_map((_DWORD *)dword_18E29C);
      v9 = dword_18E298;
      goto LABEL_14;
    }
    v7 = open64(a1);
LABEL_12:
    if ( v7 < 0 )
    {
      v17 = snprintf(v19, 0x800u, "failed to open %s", a1);
      V_LOCK(v17);
      v18 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v18);
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
      pthread_mutex_unlock(&stru_18E280);
      return v9;
    }
    memset(s, 0, 0x90u);
    s[3] = v7;
    s[2] = ++dword_18E298;
    strncpy((char *)&s[4], a1, 0x80u);
    insert_c_map((_DWORD *)dword_18E29C);
    v9 = dword_18E298;
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
  pthread_mutex_unlock(&stru_18E280);
  return v9;
}
