signed int __fastcall get_temp(int a1)
{
  _BYTE v3[8]; // [sp+1Ch] [bp-1008h] BYREF
  signed int v4; // [sp+101Ch] [bp-8h]

  switch ( a1 )
  {
    case 0:
      v4 = sub_B15A4();
      break;
    case 1:
      v4 = sub_B1704();
      break;
    case 2:
      v4 = sub_B0FF4();
      break;
    case 3:
      v4 = sub_B12B0();
      break;
    case 4:
      v4 = sub_B1410();
      break;
    default:
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "%s unknow temp type %d", a1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/set_pwm_by_temp.c",
        156,
        "get_temp",
        8,
        240,
        100,
        v3);
      v4 = 0x7FFFFFFF;
      break;
  }
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "get temp %d", v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/set_pwm_by_temp.c",
    156,
    "get_temp",
    8,
    244,
    20,
    v3);
  return v4;
}
