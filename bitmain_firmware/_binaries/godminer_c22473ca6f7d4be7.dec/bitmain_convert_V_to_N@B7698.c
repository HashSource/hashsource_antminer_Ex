int bitmain_convert_V_to_N()
{
  double v0; // d0
  int v1; // r5
  int v2; // r3
  _DWORD *v3; // r3
  int v4; // r1
  char v6[4096]; // [sp+10h] [bp-1000h] BYREF

  v1 = bitmain_convert_V_to_N_calibration();
  V_LOCK();
  LOWORD(v2) = -1912;
  HIWORD(v2) = (unsigned int)"in_freq" >> 16;
  logfmt_raw(v6, 0x1000u, 0, v2, (int)(1280.57782 - v0 * 73.979365), v1);
  V_UNLOCK();
  LOWORD(v3) = -14512;
  HIWORD(v3) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v4) = -2412;
  HIWORD(v4) = (unsigned int)"_standard_code" >> 16;
  zlog(*v3, v4, 166, "bitmain_convert_V_to_N", 22, 547, 60, v6);
  if ( v1 <= 0 )
  {
    switch ( dword_16C648 )
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
      default:
        v1 = -1;
        break;
    }
  }
  return v1;
}
