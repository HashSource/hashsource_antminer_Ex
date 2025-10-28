int __fastcall workio_submit_work(int a1, pthread_mutex_t *a2)
{
  unsigned int v3; // r2
  _BYTE v7[28]; // [sp+38h] [bp-1C5Ch] BYREF
  _BYTE v8[12]; // [sp+1038h] [bp-C5Ch] BYREF
  _DWORD v9[7]; // [sp+1C38h] [bp-5Ch] BYREF
  int v10; // [sp+1C54h] [bp-40h]
  _DWORD v11[7]; // [sp+1C58h] [bp-3Ch] BYREF
  int v12; // [sp+1C74h] [bp-20h]
  unsigned __int8 v13; // [sp+1C7Fh] [bp-15h]
  int v14; // [sp+1C80h] [bp-14h]
  int v15; // [sp+1C84h] [bp-10h]

  v15 = 0;
  v14 = frontend_runtime_instance();
  if ( pool_tget(a2, (unsigned __int8 *)&a2[79].__size[8]) )
  {
    V_LOCK();
    sub_3FD9C((int)v9, a2->__lock);
    logfmt_raw(v7, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, "submit idle pool's nonce.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner.c",
      135,
      "workio_submit_work",
      18,
      21,
      20,
      v7);
    return 0;
  }
  else
  {
    update_pool_diff1_of_all_runtimes((int)a2);
    (*(void (__fastcall **)(int, pthread_mutex_t *, _BYTE *))(v14 + 32))(a1, a2, v8);
    do
    {
      v13 = (*(int (__fastcall **)(pthread_mutex_t *, _BYTE *))(v14 + 12))(a2, v8);
      if ( v13 != 1 )
      {
        ++total_ro;
        ++a2[81].__owner;
        v3 = dword_5AC450++;
        if ( !(v3 % 0x2710) )
        {
          V_LOCK();
          sub_3FD9C((int)v11, a2->__lock);
          logfmt_raw(
            v7,
            0x1000u,
            0,
            v12,
            v11[0],
            v11[1],
            v11[2],
            v11[3],
            v11[4],
            v11[5],
            v11[6],
            v12,
            "submit_upstream_work stratum_send_line failed %d count %d",
            v13,
            v15);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner.c",
            135,
            "workio_submit_work",
            18,
            37,
            100,
            v7);
        }
      }
      ++v15;
    }
    while ( v15 <= 3 && v13 != 1 );
    return v13;
  }
}
