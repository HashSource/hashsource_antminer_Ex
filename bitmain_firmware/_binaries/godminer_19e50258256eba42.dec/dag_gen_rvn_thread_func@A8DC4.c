void __noreturn dag_gen_rvn_thread_func()
{
  __int64 v0; // r0
  void (__fastcall *v1)(int, _DWORD, _DWORD, _DWORD); // r4
  int v2; // r5
  unsigned __int64 v3; // r0
  _DWORD v4[8]; // [sp+18h] [bp-1114h] BYREF
  _DWORD v5[27]; // [sp+38h] [bp-10F4h] BYREF
  _DWORD v6[27]; // [sp+A4h] [bp-1088h] BYREF
  _BYTE v7[28]; // [sp+110h] [bp-101Ch] BYREF
  unsigned int v8; // [sp+1110h] [bp-1Ch] BYREF
  unsigned int j; // [sp+1114h] [bp-18h]
  unsigned int i; // [sp+1118h] [bp-14h]
  _DWORD *all_created_runtime; // [sp+111Ch] [bp-10h]

  while ( 1 )
  {
    do
    {
      memset(v4, 0, sizeof(v4));
      get_cur_seed_rvn(v4);
      v8 = 0;
      all_created_runtime = get_all_created_runtime(&v8);
    }
    while ( !qword_5AD5B0 );
    if ( qword_5AD5B0 != qword_5AD5B8 )
    {
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, "cur_block_num enter: %llu", qword_5AD5B0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/dhash_content/rvn/rvn_dhash_common.c",
        164,
        "dag_gen_rvn_thread_func",
        23,
        353,
        60,
        v7);
      memset(v5, 0, sizeof(v5));
      memset(v6, 0, sizeof(v6));
      LODWORD(v0) = sub_34579C(qword_5AD5B0, 3u);
      sub_A8088(v0, v5);
      memcpy(v6, v5, sizeof(v6));
      qword_5AD5B8 = qword_5AD5B0;
      for ( i = 0; i < v8; ++i )
      {
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, "kiss99 change begin...");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/dhash_content/rvn/rvn_dhash_common.c",
          164,
          "dag_gen_rvn_thread_func",
          23,
          362,
          40,
          v7);
        v1 = *(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD))(all_created_runtime[i] + 12);
        v2 = all_created_runtime[i];
        v3 = sub_A8D40(qword_5AD5B0);
        v1(v2, HIDWORD(v3), v3, HIDWORD(v3));
        for ( j = 0; j <= 0x1A; ++j )
          (*(void (__fastcall **)(_DWORD, unsigned int, _DWORD))(all_created_runtime[i] + 8))(
            all_created_runtime[i],
            j,
            v6[j]);
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, "kiss99 change end...");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/dhash_content/rvn/rvn_dhash_common.c",
          164,
          "dag_gen_rvn_thread_func",
          23,
          368,
          40,
          v7);
        *(_BYTE *)(all_created_runtime[i] + 280) = 1;
      }
    }
  }
}
