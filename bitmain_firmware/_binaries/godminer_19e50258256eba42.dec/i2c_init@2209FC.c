int i2c_init()
{
  char v2[2048]; // [sp+1Ch] [bp-1810h] BYREF
  _BYTE v3[16]; // [sp+81Ch] [bp-1010h] BYREF
  _DWORD v4[2]; // [sp+181Ch] [bp-10h] BYREF
  int v5; // [sp+1824h] [bp-8h] BYREF

  v5 = -1;
  if ( platform_inited )
  {
    if ( !dword_C26970 )
    {
      dword_C2696C = (int)new_c_map(2230724, 0, 0);
      pthread_mutex_init(&stru_C268DC, 0);
    }
    v5 = ++dword_C26970;
    v4[0] = 0;
    v4[1] = 0;
    insert_c_map((int *)dword_C2696C, &v5, 4u, v4, 8u);
    return v5;
  }
  else
  {
    strcpy(v2, "please init platform first!!");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
      177,
      "i2c_init",
      8,
      41,
      100,
      v3);
    return -2;
  }
}
