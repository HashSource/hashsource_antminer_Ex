void sub_4E990()
{
  int v0; // r6
  int v1; // r4
  char **v2; // r5
  int v3; // r10
  const char *i; // r0
  const char *v5; // t1
  int v6; // r0
  char s[64]; // [sp+18h] [bp-1044h] BYREF
  _BYTE v8[4100]; // [sp+58h] [bp-1004h] BYREF

  if ( total_pools > 0 )
  {
    v0 = 0;
    while ( 2 )
    {
      while ( 2 )
      {
        v1 = 0;
        v2 = off_13A588;
        v3 = *(_DWORD *)(pools + 4 * v0);
        memset(s, 0, sizeof(s));
        get_currentalgo(s, 0x40u);
        for ( i = "ckb_2040"; strcmp(i, s); i = v5 )
        {
          if ( ++v1 == 11 )
            goto LABEL_7;
          v5 = v2[1];
          ++v2;
        }
        if ( v1 != 6 )
        {
LABEL_7:
          if ( total_pools > ++v0 )
            continue;
          return;
        }
        break;
      }
      V_LOCK(0);
      ++v0;
      v6 = logfmt_raw((int)v8, 0x1000u);
      V_UNLOCK(v6);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/miner_util/check_pool.c",
        150,
        "set_pool_rpc_enable",
        19,
        115,
        40,
        v8);
      *(_BYTE *)(v3 + 1648) = 1;
      if ( total_pools > v0 )
        continue;
      break;
    }
  }
}
