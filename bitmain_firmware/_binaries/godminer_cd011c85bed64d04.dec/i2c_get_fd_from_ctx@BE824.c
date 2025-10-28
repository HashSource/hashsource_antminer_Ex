int __fastcall i2c_get_fd_from_ctx(int a1)
{
  int v1; // r0
  int v2; // r0
  int v3; // r4
  int v5; // r0
  int v6; // [sp+14h] [bp-1810h] BYREF
  void *ptr; // [sp+1Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  _BYTE v9[4100]; // [sp+820h] [bp-1004h] BYREF

  v6 = a1;
  if ( pthread_mutex_lock(&stru_16D6D8) )
  {
    v3 = -4;
    strcpy(s, "failed to get i2c lock");
    V_LOCK(*(_DWORD *)"c lock");
    v5 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_i2c.c",
      168,
      "i2c_get_fd_from_ctx",
      19,
      654,
      100,
      v9);
  }
  else if ( find_c_map((_DWORD *)dword_16D6F4, (int)&v6, (int)&ptr) )
  {
    v1 = snprintf(
           s,
           0x800u,
           "i2c dev = %s, addr = 0x%x, fd = %d",
           (const char *)ptr + 16,
           *((_DWORD *)ptr + 1),
           *((_DWORD *)ptr + 3));
    V_LOCK(v1);
    v2 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v2);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_i2c.c",
      168,
      "i2c_get_fd_from_ctx",
      19,
      665,
      60,
      v9);
    pthread_mutex_unlock(&stru_16D6D8);
    v3 = *((_DWORD *)ptr + 3);
    free(ptr);
  }
  else
  {
    v3 = -2;
    pthread_mutex_unlock(&stru_16D6D8);
  }
  return v3;
}
