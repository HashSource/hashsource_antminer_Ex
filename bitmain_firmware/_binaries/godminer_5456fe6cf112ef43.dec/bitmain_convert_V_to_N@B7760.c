int bitmain_convert_V_to_N()
{
  double v0; // d0
  int v1; // r5
  int v2; // r0
  _BYTE v4[4096]; // [sp+10h] [bp-1000h] BYREF

  v1 = bitmain_convert_V_to_N_calibration();
  V_LOCK(v1);
  v2 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/power/bitmain_power_APW9.c",
    166,
    "bitmain_convert_V_to_N",
    22,
    549,
    60,
    v4);
  if ( v1 <= 0 )
  {
    switch ( dword_16C650 )
    {
      case 'A':
      case 'B':
        v1 = (int)(765.411764 - v0 * 35.833333);
        break;
      case 'C':
        v1 = (int)(933.240365 - v0 * 59.806034);
        break;
      case 'a':
        v1 = (int)(1144.50226 - v0 * 52.243589);
        break;
      case 'q':
      case 'r':
        v1 = (int)(1190.93534 - v0 * 78.742588);
        break;
      case 's':
        v1 = (int)(1280.57782 - v0 * 73.979365);
        break;
      case 't':
        v1 = (int)(1156.10754 - v0 * 76.0904922);
        break;
      default:
        v1 = -1;
        break;
    }
  }
  return v1;
}
