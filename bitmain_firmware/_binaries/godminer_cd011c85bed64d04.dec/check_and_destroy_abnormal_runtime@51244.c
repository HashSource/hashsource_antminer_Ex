int check_and_destroy_abnormal_runtime()
{
  int v0; // r6
  int v1; // r5
  void **v2; // r4
  _DWORD *v3; // r3
  _DWORD *v4; // t1
  _DWORD *v5; // r0
  int v6; // r0
  int *v7; // r3
  _DWORD *v8; // r2
  int v9; // t1
  _DWORD s[256]; // [sp+10h] [bp-1404h] BYREF
  _DWORD v12[1025]; // [sp+410h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  pthread_mutex_lock(&stru_16B828);
  if ( dword_16B840 > 0 )
  {
    v1 = 0;
    v0 = 0;
    v2 = (void **)&dword_16B840;
    do
    {
      v4 = v2[1];
      ++v2;
      v3 = v4;
      v5 = &v12[v0];
      if ( v4[61] == v4[51] )
      {
        *(v5 - 256) = v3;
        ++v0;
      }
      else
      {
        V_LOCK(v5);
        v6 = logfmt_raw((int)v12, 0x1000u);
        V_UNLOCK(v6);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_interface.c",
          148,
          "check_and_destroy_abnormal_runtime",
          34,
          143,
          80,
          v12);
        (*((void (**)(void))*v2 + 2))();
        (*((void (**)(void))*v2 + 4))();
        free(*v2);
        *v2 = 0;
      }
      ++v1;
    }
    while ( dword_16B840 > v1 );
    if ( v0 )
    {
      v7 = s;
      v8 = &unk_16B844;
      do
      {
        v9 = *v7++;
        *v8++ = v9;
      }
      while ( v7 != &s[v0] );
    }
  }
  else
  {
    v0 = 0;
  }
  dword_16B840 = v0;
  return pthread_mutex_unlock(&stru_16B828);
}
