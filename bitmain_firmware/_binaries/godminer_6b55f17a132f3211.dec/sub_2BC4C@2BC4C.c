int __fastcall sub_2BC4C(int a1)
{
  int v1; // r0
  int v2; // r0
  int v3; // r2
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int result; // r0
  int v9; // r0
  int v10; // r0
  _BYTE v11[4096]; // [sp+10h] [bp-1000h] BYREF

  v1 = a1 - 2;
  switch ( v1 )
  {
    case 0:
      V_LOCK(v1);
      v4 = logfmt_raw((int)v11, 0x1000u);
      V_UNLOCK(v4);
      v3 = 565;
      goto LABEL_3;
    case 1:
      V_LOCK(v1);
      v5 = logfmt_raw((int)v11, 0x1000u);
      V_UNLOCK(v5);
      v3 = 570;
      goto LABEL_3;
    case 8:
      V_LOCK(v1);
      v6 = logfmt_raw((int)v11, 0x1000u);
      V_UNLOCK(v6);
      v7 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-"
             "origin_godminer-new/god-miner.c",
             138,
             "signal_handler",
             14,
             585,
             80,
             v11);
      return log_reload(v7);
    case 9:
      V_LOCK(v1);
      v9 = logfmt_raw((int)v11, 0x1000u);
      V_UNLOCK(v9);
      v3 = 580;
      goto LABEL_3;
    case 13:
      V_LOCK(v1);
      v2 = logfmt_raw((int)v11, 0x1000u);
      V_UNLOCK(v2);
      v3 = 575;
LABEL_3:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/god-miner.c",
        138,
        "signal_handler",
        14,
        v3,
        80,
        v11);
      print_summary();
      exit(0);
      return result;
    default:
      V_LOCK(v1);
      v10 = logfmt_raw((int)v11, 0x1000u);
      V_UNLOCK(v10);
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmine"
               "r-origin_godminer-new/god-miner.c",
               138,
               "signal_handler",
               14,
               589,
               80,
               v11);
  }
}
