__int64 __fastcall diff_to_le256_target_base(unsigned __int64 *a1)
{
  double v1; // d0
  double v2; // d1
  double v4; // d8
  double v5; // r0
  double v6; // d8
  double v7; // r0
  double v8; // d8
  double v9; // r0
  unsigned __int64 v10; // r2
  __int64 result; // r0
  unsigned __int64 v12; // r2
  int v13; // r3
  int v14; // r3
  int v15; // r1
  unsigned __int64 v16; // [sp+10h] [bp-1004h] BYREF
  unsigned __int64 v17; // [sp+18h] [bp-FFCh]
  __int64 v18; // [sp+20h] [bp-FF4h]
  unsigned __int64 v19; // [sp+28h] [bp-FECh]

  v4 = v2;
  if ( v1 <= 0.0 )
  {
    V_LOCK();
    LOWORD(v13) = -12204;
    HIWORD(v13) = (unsigned int)"_to_be256_target_base" >> 16;
    logfmt_raw((char *)&v16, 0x1000u, 0, v13);
    V_UNLOCK();
    LOWORD(v14) = -12260;
    LOWORD(v15) = -12172;
    HIWORD(v14) = (unsigned int)"age to %d successfully" >> 16;
    HIWORD(v15) = (unsigned int)"o passed to set_target" >> 16;
    zlog(g_zc, v15, 158, v14, 25, 57, 20, &v16);
  }
  else
  {
    v4 = v2 / v1;
  }
  v19 = (unsigned __int64)(v4 * 1.59309191e-58);
  LODWORD(v5) = sub_144A2C(v19);
  v6 = v4 - v5 * 6.27710174e57;
  v18 = (unsigned __int64)(v6 * 2.93873588e-39);
  LODWORD(v7) = sub_144A2C(v18);
  v8 = v6 - v7 * 3.40282367e38;
  v17 = (unsigned __int64)(v8 * 5.42101086e-20);
  LODWORD(v9) = sub_144A2C(v17);
  v16 = (unsigned __int64)(v8 - v9 * 1.84467441e19);
  v10 = v17;
  *a1 = v16;
  a1[1] = v10;
  result = v18;
  v12 = v19;
  a1[2] = v18;
  a1[3] = v12;
  return result;
}
