int __fastcall sub_2B1A8(int a1)
{
  int v1; // r2
  int result; // r0
  char v3[4096]; // [sp+10h] [bp-1000h] BYREF

  switch ( a1 )
  {
    case 2:
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "SIGINT received, exiting");
      V_UNLOCK();
      v1 = 614;
      goto LABEL_3;
    case 3:
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "SIGQUIT received, exiting");
      V_UNLOCK();
      v1 = 619;
      goto LABEL_3;
    case 10:
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "SIGUSR1 received, reload log");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "signal_handler",
        14,
        634,
        80,
        v3);
      return log_reload();
    case 11:
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "SIGSEGV received, exiting");
      V_UNLOCK();
      v1 = 629;
      goto LABEL_3;
    case 15:
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "SIGTERM received, exiting");
      V_UNLOCK();
      v1 = 624;
LABEL_3:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "signal_handler",
        14,
        v1,
        80,
        v3);
      print_summary();
      exit(0);
      return result;
    default:
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "catch signal %d, it should not be here");
      V_UNLOCK();
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/god-miner.c",
               132,
               "signal_handler",
               14,
               638,
               80,
               v3);
  }
}
