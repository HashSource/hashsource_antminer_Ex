int __fastcall pool_died(pthread_mutex_t *a1)
{
  pthread_mutex_t *v1; // r5
  int v3; // r6
  int result; // r0
  int v5; // r7
  int v6; // r0
  int v7; // r0
  int v8; // r0
  _BYTE v9[32]; // [sp+28h] [bp-1044h] BYREF
  _BYTE v10[32]; // [sp+48h] [bp-1024h] BYREF
  _BYTE v11[4100]; // [sp+68h] [bp-1004h] BYREF

  v1 = a1 + 76;
  pthread_mutex_lock(a1 + 76);
  v3 = (unsigned __int8)a1[79].__size[8];
  a1[79].__size[8] = 1;
  result = pthread_mutex_unlock(v1);
  if ( !v3 )
  {
    cgtime(&a1[79].__align + 3);
    sub_2F5E4(&a1->__lock, 1);
    pthread_mutex_lock(&mutex);
    v5 = dword_17336C;
    v6 = pthread_mutex_unlock(&mutex);
    V_LOCK(v6);
    if ( a1 == (pthread_mutex_t *)v5 )
    {
      V_INT((int)v9, "poolno");
      v8 = logfmt_raw((int)v11, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/pool.c",
        137,
        "pool_died",
        9,
        402,
        80,
        v11);
      return switch_pools();
    }
    else
    {
      V_INT((int)v10, "poolno");
      v7 = logfmt_raw((int)v11, 0x1000u);
      V_UNLOCK(v7);
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/god"
               "miner-origin_godminer-new/pool.c",
               137,
               "pool_died",
               9,
               405,
               20,
               v11);
    }
  }
  return result;
}
