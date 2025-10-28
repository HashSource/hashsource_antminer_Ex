int __fastcall reload_pool(int a1)
{
  int result; // r0
  int v2; // r0
  int v3; // r2
  int v4; // r0
  int v5; // r1
  int v6; // r0
  _BYTE v7[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( newthread )
  {
    V_LOCK(a1);
    v2 = logfmt_raw((int)v7, 0x1000u);
    V_UNLOCK(v2);
    v3 = 870;
    v4 = g_zc;
    LOWORD(v5) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp"
                                   "/debug/build/godminer-origin_godminer-new/pool.c";
LABEL_5:
    HIWORD(v5) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/deb"
                               "ug/build/godminer-origin_godminer-new/pool.c" >> 16;
    return zlog(v4, v5, 133, "reload_pool", 11, v3, 100, v7);
  }
  result = pthread_create(&newthread, 0, (void *(*)(void *))sub_2F76C, 0);
  if ( result )
  {
    V_LOCK(result);
    v6 = logfmt_raw((int)v7, 0x1000u);
    V_UNLOCK(v6);
    v3 = 868;
    v4 = g_zc;
    LOWORD(v5) = 19816;
    goto LABEL_5;
  }
  return result;
}
