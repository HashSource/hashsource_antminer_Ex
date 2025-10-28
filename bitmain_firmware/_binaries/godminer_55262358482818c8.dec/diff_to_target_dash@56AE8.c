int __fastcall diff_to_target_dash(unsigned __int64 *a1)
{
  double v1; // d0
  __int64 v3; // r6
  double v4; // r0
  double v5; // d8
  __int64 v6; // kr00_8
  double v7; // r0
  double v8; // d8
  __int64 v9; // kr08_8
  double v10; // r0
  unsigned __int64 v11; // r0
  unsigned __int64 v12; // r0
  unsigned __int64 v13; // r2
  int v14; // r3
  int v15; // r3
  _QWORD v17[2]; // [sp+10h] [bp-1004h] BYREF
  unsigned __int64 v18; // [sp+20h] [bp-FF4h]
  unsigned __int64 v19; // [sp+28h] [bp-FECh]

  if ( v1 <= 0.0 )
  {
    V_LOCK();
    LOWORD(v14) = -12204;
    HIWORD(v14) = (unsigned int)"_to_be256_target_base" >> 16;
    logfmt_raw((char *)v17, 0x1000u, 0, v14);
    V_UNLOCK();
    LOWORD(v15) = -12012;
    HIWORD(v15) = (unsigned int)"_content/base_common.c" >> 16;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/dhash_content/dash/dash_dhash_common.c",
      169,
      v15,
      19,
      58,
      20,
      v17);
    v3 = 4294901760LL;
    v11 = 0;
    v6 = 0;
    v9 = 0;
  }
  else
  {
    v3 = (unsigned __int64)(2.69595353e67 / v1 * 1.59309191e-58);
    LODWORD(v4) = sub_144A2C(v3);
    v5 = 2.69595353e67 / v1 - v4 * 6.27710174e57;
    v6 = (unsigned __int64)(v5 * 2.93873588e-39);
    LODWORD(v7) = sub_144A2C(v6);
    v8 = v5 - v7 * 3.40282367e38;
    v9 = (unsigned __int64)(v8 * 5.42101086e-20);
    LODWORD(v10) = sub_144A2C(v9);
    v11 = (unsigned __int64)(v8 - v10 * 1.84467441e19);
  }
  v19 = v3;
  v18 = v6;
  v17[1] = v9;
  v17[0] = v11;
  *a1 = v11;
  a1[1] = v9;
  v12 = v18;
  v13 = v19;
  a1[2] = v18;
  a1[3] = v13;
  return v12;
}
