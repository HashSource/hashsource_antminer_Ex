int __fastcall pool_died(int a1)
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

  v1 = (pthread_mutex_t *)(a1 + 1816);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 1816));
  v3 = *(unsigned __int8 *)(a1 + 1896);
  *(_BYTE *)(a1 + 1896) = 1;
  result = pthread_mutex_unlock(v1);
  if ( !v3 )
  {
    cgtime(a1 + 1900);
    sub_2E41C((int *)a1, 1);
    pthread_mutex_lock(&mutex);
    v5 = dword_1650A4;
    v6 = pthread_mutex_unlock(&mutex);
    V_LOCK(v6);
    if ( a1 == v5 )
    {
      V_INT((int)v9, "poolno");
      v8 = logfmt_raw((int)v11, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/pool.c",
        133,
        "pool_died",
        9,
        401,
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
               "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmine"
               "r-origin_godminer-new/pool.c",
               133,
               "pool_died",
               9,
               404,
               20,
               v11);
    }
  }
  return result;
}
