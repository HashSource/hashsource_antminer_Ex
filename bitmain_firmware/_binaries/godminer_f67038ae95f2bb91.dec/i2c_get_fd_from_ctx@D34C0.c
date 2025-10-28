int __fastcall i2c_get_fd_from_ctx(int a1)
{
  int v1; // r4
  int v3; // [sp+14h] [bp-1810h] BYREF
  void *ptr; // [sp+1Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v6[4100]; // [sp+820h] [bp-1004h] BYREF

  v3 = a1;
  if ( pthread_mutex_lock(&stru_1B402C) )
  {
    v1 = -4;
    strcpy(s, "failed to get i2c lock");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      174,
      "i2c_get_fd_from_ctx",
      19,
      667,
      100,
      v6);
  }
  else if ( find_c_map((int *)dword_1B4048, (int)&v3, &ptr) )
  {
    snprintf(
      s,
      0x800u,
      "i2c dev = %s, addr = 0x%x, fd = %d",
      (const char *)ptr + 16,
      *((_DWORD *)ptr + 1),
      *((_DWORD *)ptr + 3));
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      174,
      "i2c_get_fd_from_ctx",
      19,
      678,
      60,
      v6);
    pthread_mutex_unlock(&stru_1B402C);
    v1 = *((_DWORD *)ptr + 3);
    free(ptr);
  }
  else
  {
    v1 = -2;
    pthread_mutex_unlock(&stru_1B402C);
  }
  return v1;
}
