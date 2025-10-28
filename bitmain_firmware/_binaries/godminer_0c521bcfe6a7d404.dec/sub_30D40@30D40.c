// positive sp value has been detected, the output may be wrong!
void __fastcall sub_30D40(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  int v13; // r7
  int v14; // r3
  int *v15; // r0
  int v16; // r7
  int v17; // r7
  int v18; // r0
  void **v19; // r6
  void *v20; // r0
  void *v21; // t1
  int v22; // r4
  int v23; // r5
  _DWORD *v24; // r6
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // [sp-1094h] [bp-1094h]
  int v30; // [sp-1090h] [bp-1090h]
  int v31; // [sp-108Ch] [bp-108Ch]
  _DWORD v32[1057]; // [sp-1084h] [bp-1084h] BYREF

  create_pool_stratum_threads();
  v13 = 0;
  do
  {
    ++v13;
    sleep(1u);
    if ( v13 == 8 )
      v14 = 0;
    else
      v14 = (*(_BYTE *)(v22 + 385) ^ 1) & 1;
  }
  while ( v14 );
  set_miner_start_time();
  v15 = api_flush();
  v16 = *(unsigned __int8 *)(v22 + 385);
  if ( !*(_BYTE *)(v22 + 385) )
  {
    V_LOCK(v15);
    v25 = logfmt_raw(v23, 0x1000u);
    V_UNLOCK(v25);
    v26 = zlog(
            *v24,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/pool.c",
            137,
            "pool_change_function",
            20,
            862,
            100,
            v23);
    if ( *(int *)(v22 + 80) > 0 )
    {
      do
      {
        ++v16;
        V_LOCK(v26);
        v27 = logfmt_raw(v23, 0x1000u);
        V_UNLOCK(v27);
        v26 = zlog(
                *v24,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/pool.c",
                137,
                "pool_change_function",
                20,
                865,
                100,
                v23);
      }
      while ( *(_DWORD *)(v22 + 80) > v16 );
    }
  }
  if ( !v30
    || (*(_DWORD *)(v31 + 96) = 2,
        pthread_attr_init(&attr),
        v17 = pthread_create((pthread_t *)&dword_18EA84, &attr, (void *(*)(void *))watchpool_thread, &dword_18EA80),
        v18 = pthread_attr_destroy(&attr),
        !v17) )
  {
    sleep(0xAu);
    if ( v29 > 0 )
    {
      v19 = (void **)v32;
      do
      {
        v21 = *v19++;
        v20 = v21;
        if ( v21 )
          free(v20);
      }
      while ( &v32[v29] != v19 );
    }
    *(_DWORD *)(v22 + 2696) = 0;
    __asm { POP             {R4-R11,PC} }
  }
  V_LOCK(v18);
  v28 = logfmt_raw(v23, 0x1000u);
  V_UNLOCK(v28);
  zlog(
    *v24,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/pool.c",
    137,
    "pool_change_function",
    20,
    875,
    100,
    v23);
  exit(1);
}
