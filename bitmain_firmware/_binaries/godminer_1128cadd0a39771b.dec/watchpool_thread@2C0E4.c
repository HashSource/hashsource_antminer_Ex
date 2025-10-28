void __noreturn watchpool_thread()
{
  pthread_t v0; // r0
  char *v1; // r4
  int v2; // r0
  int v3; // r0
  int current_pool; // r0
  int v5; // r4
  int v6; // r5
  int v7; // r11
  int v8; // r1
  int v9; // r2
  int v10; // r3
  char *v11; // r11
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r0
  char v17; // [sp+20h] [bp-1084h] BYREF
  const char *v18; // [sp+40h] [bp-1064h]
  int v19; // [sp+44h] [bp-1060h]
  char *v20; // [sp+48h] [bp-105Ch]
  const char *v21; // [sp+4Ch] [bp-1058h]
  char *v22; // [sp+50h] [bp-1054h]
  char *s; // [sp+54h] [bp-1050h]
  int v24; // [sp+58h] [bp-104Ch] BYREF
  _BYTE v25[32]; // [sp+60h] [bp-1044h] BYREF
  _DWORD v26[8]; // [sp+80h] [bp-1024h] BYREF
  _BYTE v27[4100]; // [sp+A0h] [bp-1004h] BYREF

  v0 = pthread_self();
  pthread_detach(v0);
  pthread_setcanceltype(1, 0);
  sub_2C0C8();
  v1 = (char *)calloc(1u, 0x40u);
  v2 = snprintf(v1, 0x40u, "%.10s_%d", "watchpool_thread", 0);
  V_LOCK(v2);
  syscall(224);
  v3 = logfmt_raw((int)v27, 0x1000u);
  V_UNLOCK(v3);
  v22 = "poolno";
  v21 = "stable for >%d seconds";
  s = "pool";
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "watchpool_thread",
    16,
    376,
    60,
    v27);
  v20 = &v17;
  prctl(15, v1);
  while ( 1 )
  {
    current_pool = cgtime(&v24);
    if ( total_pools > 0 )
    {
      v5 = 0;
      do
      {
        while ( 1 )
        {
          v6 = *(_DWORD *)(pools + 4 * v5++);
          current_pool = pool_tget(v6, v6 + 2072);
          if ( !current_pool )
          {
            v7 = *(_DWORD *)(v6 + 4);
            current_pool = get_current_pool(0);
            if ( v7 < *(_DWORD *)(current_pool + 4) && v24 - *(_DWORD *)(v6 + 2076) > 120 )
              break;
          }
          if ( total_pools <= v5 )
            goto LABEL_9;
        }
        V_LOCK(current_pool);
        V_INT((int)v25, v22);
        V_STR((int)v26, s);
        v8 = v26[1];
        v9 = v26[2];
        v10 = v26[3];
        v11 = v20;
        v18 = v21;
        v19 = 120;
        *(_DWORD *)v20 = v26[0];
        *((_DWORD *)v11 + 1) = v8;
        *((_DWORD *)v11 + 2) = v9;
        *((_DWORD *)v11 + 3) = v10;
        v11 += 16;
        v12 = v26[5];
        v13 = v26[6];
        v14 = v26[7];
        *(_DWORD *)v11 = v26[4];
        *((_DWORD *)v11 + 1) = v12;
        *((_DWORD *)v11 + 2) = v13;
        *((_DWORD *)v11 + 3) = v14;
        v15 = logfmt_raw((int)v27, 0x1000u);
        V_UNLOCK(v15);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "watchpool_thread",
          16,
          395,
          80,
          v27);
        current_pool = switch_pools(0);
      }
      while ( total_pools > v5 );
    }
LABEL_9:
    v16 = get_current_pool(current_pool);
    if ( pool_tget(v16, v16 + 2072) )
      switch_pools(0);
    sleep(0x1Eu);
  }
}
