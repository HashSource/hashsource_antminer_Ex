int psu_watchdog()
{
  double v0; // d0
  int v1; // r5
  int v2; // r0
  int v3; // r0
  int v4; // r7
  int v5; // r5
  int feedback_voltage; // r0
  int current_voltage; // r6
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r12
  int v12; // r2
  int v13; // r0
  int power_status; // r0
  int v15; // r6
  int v16; // r5
  int v17; // r0
  int result; // r0
  bool v19; // zf
  int v20; // r0
  int v21; // r0
  int v22; // r0
  _BYTE v23[4100]; // [sp+10h] [bp-1004h] BYREF

  v1 = bitmain_set_watchdog(1);
  V_LOCK(v1);
  v2 = logfmt_raw((int)v23, 0x1000u);
  V_UNLOCK(v2);
  v3 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-"
         "origin_godminer-new/miner_util/check_heartbeat.c",
         159,
         "psu_watchdog",
         12,
         77,
         60,
         v23);
  if ( v1 == 1 )
  {
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      pthread_setcancelstate(1, 0);
      feedback_voltage = read_feedback_voltage(0);
      current_voltage = get_current_voltage(feedback_voltage);
      v8 = is_power_on();
      if ( !v8 )
        goto LABEL_13;
      if ( v0 < 0.0 )
        break;
      if ( v0 * 100.0 > (double)current_voltage * 1.1 || v0 * 100.0 < (double)current_voltage * 0.9 )
      {
        V_LOCK(v8);
        ++v4;
        v9 = logfmt_raw((int)v23, 0x1000u);
        V_UNLOCK(v9);
        v10 = g_zc;
        v11 = 80;
        v12 = 93;
LABEL_11:
        v8 = zlog(
               v10,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/god"
               "miner-origin_godminer-new/miner_util/check_heartbeat.c",
               159,
               "psu_watchdog",
               12,
               v12,
               v11,
               v23);
        goto LABEL_12;
      }
      v4 = 0;
LABEL_12:
      V_LOCK(v8);
      v13 = logfmt_raw((int)v23, 0x1000u);
      V_UNLOCK(v13);
      v8 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmi"
             "ner-origin_godminer-new/miner_util/check_heartbeat.c",
             159,
             "psu_watchdog",
             12,
             99,
             20,
             v23);
LABEL_13:
      power_status = bitmain_get_power_status(v8);
      v15 = power_status;
      if ( power_status )
      {
        V_LOCK(power_status);
        v16 = v5 + 1;
        v17 = logfmt_raw((int)v23, 0x1000u);
        V_UNLOCK(v17);
        result = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build"
                   "/godminer-origin_godminer-new/miner_util/check_heartbeat.c",
                   159,
                   "psu_watchdog",
                   12,
                   106,
                   80,
                   v23);
        v19 = v16 == 3;
        if ( v16 <= 3 )
          v19 = v4 == 0;
        if ( !v19 )
          return result;
        v15 = v16;
      }
      else if ( v4 > 3 )
      {
        V_LOCK(0);
        v20 = logfmt_raw((int)v23, 0x1000u);
        V_UNLOCK(v20);
        return zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/g"
                 "odminer-origin_godminer-new/miner_util/check_heartbeat.c",
                 159,
                 "psu_watchdog",
                 12,
                 113,
                 100,
                 v23);
      }
      v5 = v15;
      pthread_setcancelstate(0, 0);
      pthread_testcancel();
      sleep(0xAu);
    }
    V_LOCK(v8);
    ++v4;
    v21 = logfmt_raw((int)v23, 0x1000u);
    V_UNLOCK(v21);
    v10 = g_zc;
    v11 = 100;
    v12 = 89;
    goto LABEL_11;
  }
  V_LOCK(v3);
  v22 = logfmt_raw((int)v23, 0x1000u);
  V_UNLOCK(v22);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/miner_util/check_heartbeat.c",
    159,
    "psu_watchdog",
    12,
    79,
    100,
    v23);
  return 0;
}
