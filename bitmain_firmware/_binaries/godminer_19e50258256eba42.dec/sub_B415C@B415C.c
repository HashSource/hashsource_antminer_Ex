int __fastcall sub_B415C(char a1, _BYTE *a2)
{
  int v2; // r2
  _BYTE v6[60]; // [sp+30h] [bp-107Ch] BYREF
  const char *v7[7]; // [sp+1030h] [bp-7Ch] BYREF
  int v8; // [sp+104Ch] [bp-60h]
  const char *v9[7]; // [sp+1050h] [bp-5Ch] BYREF
  int v10; // [sp+106Ch] [bp-40h]
  int *v11; // [sp+1074h] [bp-38h]
  struct timespec *v12; // [sp+1078h] [bp-34h]
  struct timespec *tp; // [sp+107Ch] [bp-30h]
  pthread_mutex_t *v14; // [sp+1080h] [bp-2Ch]
  unsigned int seconds; // [sp+1084h] [bp-28h]
  __int64 v16; // [sp+1088h] [bp-24h]
  unsigned __int8 v17; // [sp+1093h] [bp-19h]
  int i; // [sp+1094h] [bp-18h]

  v17 = 0;
  if ( byte_5AD684 != 1 )
  {
    tp = (struct timespec *)&dword_5AD688;
    clock_gettime(1, (struct timespec *)&dword_5AD688);
    byte_5AD684 = 1;
  }
  for ( i = 0; i < total_pools; ++i )
  {
    v14 = *(pthread_mutex_t **)(pools + 4 * i);
    if ( (unsigned __int8)pool_tget(v14, (unsigned __int8 *)&v14[79].__size[8]) != 1 && pools_active )
    {
      v12 = (struct timespec *)&dword_5AD688;
      clock_gettime(1, (struct timespec *)&dword_5AD688);
      set_miner_6060info_network_lost_err(0);
    }
  }
  v11 = &dword_5AD688;
  clock_gettime(1, (struct timespec *)&dword_5AD690);
  v16 = 1000LL * (dword_5AD690 - dword_5AD688) + (dword_5AD694 - dword_5AD68C) / 1000000;
  if ( byte_5AD698 && v16 <= 59999 )
  {
    seconds = rand() % 120 + 60;
    V_LOCK();
    logfmt_raw(
      v6,
      0x1000u,
      0,
      "The pool connection recovered after the system poweroff. Exit and restart mining(%d)!",
      seconds);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      173,
      "check_lost_connection_to_pool",
      29,
      150,
      80,
      v6);
    sleep(seconds);
    exit(1);
  }
  if ( a1 )
  {
    if ( v16 <= 60000 )
    {
      dword_5AD69C = 0;
    }
    else
    {
      v2 = dword_5AD69C++;
      if ( !(v2 % 60) )
      {
        V_LOCK();
        sub_B27A4(v7, "net lost");
        logfmt_raw(
          v6,
          0x1000u,
          0,
          v8,
          v7[0],
          v7[1],
          v7[2],
          v7[3],
          v7[4],
          v7[5],
          v7[6],
          v8,
          "lost internet for %d seconds",
          (int)v16 / 1000);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
          173,
          "check_lost_connection_to_pool",
          29,
          158,
          100,
          v6);
        set_miner_6060info_network_lost_err(1);
      }
      v17 = 1;
    }
    if ( v16 > 1200000 && byte_5AD698 != 1 )
    {
      V_LOCK();
      sub_B27A4(v9, "net lost");
      logfmt_raw(
        v6,
        0x1000u,
        0,
        v10,
        v9[0],
        v9[1],
        v9[2],
        v9[3],
        v9[4],
        v9[5],
        v9[6],
        v10,
        "lost internet %d seconds > 20 minutes, poweroff.",
        (int)v16 / 1000);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        173,
        "check_lost_connection_to_pool",
        29,
        169,
        120,
        v6);
      *a2 = 1;
      byte_5AD698 = 1;
    }
  }
  return v17;
}
