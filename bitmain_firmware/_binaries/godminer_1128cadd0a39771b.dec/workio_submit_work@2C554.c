int __fastcall workio_submit_work(int a1, int a2)
{
  int v4; // r6
  int v5; // r0
  int v6; // r7
  int v7; // r5
  int v9; // r0
  int v10; // r3
  int v11; // r0
  _BYTE v12[32]; // [sp+30h] [bp-1420h] BYREF
  _BYTE v13[1024]; // [sp+50h] [bp-1400h] BYREF
  _BYTE v14[4096]; // [sp+450h] [bp-1000h] BYREF

  v4 = frontend_runtime_instance();
  v5 = pool_tget(a2, a2 + 2072);
  v6 = v5;
  if ( v5 )
  {
    V_LOCK(v5);
    V_INT((int)v13, "poolno");
    v9 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "workio_submit_work",
      18,
      167,
      20,
      v14);
    return 0;
  }
  else
  {
    update_pool_diff1_of_all_runtimes(a2);
    (*(void (__fastcall **)(int, int, _BYTE *))(v4 + 36))(a1, a2, v13);
    do
    {
      v7 = (*(int (__fastcall **)(int, _BYTE *))(v4 + 16))(a2, v13);
      if ( v7 )
        break;
      v10 = total_ro + 1;
      ++*(_DWORD *)(a2 + 2120);
      total_ro = v10;
      V_LOCK(0);
      V_INT((int)v12, "poolno");
      ++v6;
      v11 = logfmt_raw((int)v14, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "workio_submit_work",
        18,
        181,
        100,
        v14);
    }
    while ( v6 != 4 );
    return v7;
  }
}
