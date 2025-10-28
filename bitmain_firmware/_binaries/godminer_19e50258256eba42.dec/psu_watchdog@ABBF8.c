int psu_watchdog()
{
  double v0; // d0
  int v1; // r3
  const char *v2; // r3
  int v4; // [sp+4h] [bp-1028h]
  _BYTE v5[28]; // [sp+10h] [bp-101Ch] BYREF
  int v6; // [sp+1010h] [bp-1Ch]
  int power_status; // [sp+1014h] [bp-18h]
  double v8; // [sp+1018h] [bp-14h]
  int current_voltage; // [sp+1020h] [bp-Ch]
  int v10; // [sp+1024h] [bp-8h]

  v8 = -1.0;
  current_voltage = 0;
  v6 = 0;
  v10 = 0;
  power_status = bitmain_set_watchdog(1);
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "enable power watchdog: 0x%04x", power_status);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/check_heartbeat.c",
    156,
    "psu_watchdog",
    12,
    77,
    60,
    v5);
  if ( power_status == 1 )
  {
    while ( 1 )
    {
      pthread_setcancelstate(1, 0);
      read_feedback_voltage(0);
      v8 = v0;
      current_voltage = get_current_voltage();
      if ( is_power_on() )
      {
        if ( v8 >= 0.0 )
        {
          if ( v8 * 100.0 <= (double)current_voltage * 1.1 && v8 * 100.0 >= (double)current_voltage * 0.9 )
          {
            v10 = 0;
          }
          else
          {
            V_LOCK();
            if ( v8 * 100.0 - (double)current_voltage <= 0.0 )
              v2 = "drop";
            else
              v2 = "rise";
            logfmt_raw(
              v5,
              0x1000u,
              0,
              ">> chain avg vol %s from %d to %.2f, pls check <<",
              v2,
              current_voltage,
              v8 * 100.0);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/miner_util/check_heartbeat.c",
              156,
              "psu_watchdog",
              12,
              93,
              80,
              v5);
            ++v10;
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v5, 0x1000u, 0, ">> read_feedback_voltage failed!, pls check <<");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/check_heartbeat.c",
            156,
            "psu_watchdog",
            12,
            89,
            100,
            v5);
          ++v10;
        }
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, "cur_voltage = %d, avg_voltage = %.2f", current_voltage, v4, v8 * 100.0);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/check_heartbeat.c",
          156,
          "psu_watchdog",
          12,
          99,
          20,
          v5);
      }
      power_status = bitmain_get_power_status();
      if ( power_status )
      {
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, ">> power status error, ret %d, err_times %d <<", power_status, ++v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/check_heartbeat.c",
          156,
          "psu_watchdog",
          12,
          106,
          80,
          v5);
        v1 = v10;
        if ( v10 )
          return v1;
        v1 = v6;
        if ( v6 > 3 )
          return v1;
      }
      else
      {
        v6 = 0;
      }
      if ( v10 > 3 )
        break;
      pthread_setcancelstate(0, 0);
      pthread_testcancel();
      sleep(0xAu);
    }
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, ">> feedback voltage: too many times error, pls check <<");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/check_heartbeat.c",
      156,
      "psu_watchdog",
      12,
      113,
      100,
      v5);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "%s enable power watchdog failed!", "psu_watchdog");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/check_heartbeat.c",
      156,
      "psu_watchdog",
      12,
      79,
      100,
      v5);
    return 0;
  }
  return v1;
}
