int __fastcall sub_39E20(int a1)
{
  int result; // r0
  int v2; // [sp+18h] [bp-1004h] BYREF

  switch ( a1 )
  {
    case 2:
      V_LOCK();
      logfmt_raw(&v2, 0x1000u, 0, "SIGINT received, exiting");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "signal_handler",
        14,
        458,
        80,
        &v2);
      print_summary();
      exit(0);
      return result;
    case 3:
      V_LOCK();
      logfmt_raw(&v2, 0x1000u, 0, "SIGQUIT received, exiting");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "signal_handler",
        14,
        463,
        80,
        &v2);
      print_summary();
      exit(0);
      return result;
    case 10:
      V_LOCK();
      logfmt_raw(&v2, 0x1000u, 0, "SIGUSR1 received, reload log");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "signal_handler",
        14,
        478,
        80,
        &v2);
      result = log_reload();
      break;
    case 11:
      V_LOCK();
      logfmt_raw(&v2, 0x1000u, 0, "SIGSEGV received, exiting");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "signal_handler",
        14,
        473,
        80,
        &v2);
      print_summary();
      exit(0);
      return result;
    case 15:
      V_LOCK();
      logfmt_raw(&v2, 0x1000u, 0, "SIGTERM received, exiting");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "signal_handler",
        14,
        468,
        80,
        &v2);
      print_summary();
      exit(0);
      return result;
    default:
      V_LOCK();
      logfmt_raw(&v2, 0x1000u, 0, "catch signal %d, it should not be here");
      V_UNLOCK();
      result = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godm"
                 "iner-origin_godminer-new/god-miner.c",
                 139,
                 "signal_handler",
                 14,
                 482,
                 80,
                 &v2);
      break;
  }
  return result;
}
