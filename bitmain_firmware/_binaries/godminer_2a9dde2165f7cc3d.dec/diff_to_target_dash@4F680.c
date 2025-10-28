int __fastcall diff_to_target_dash(__int64 *a1)
{
  double v1; // d0
  __int64 v3; // r6
  double v4; // d8
  __int64 v5; // kr00_8
  double v6; // d8
  __int64 v7; // kr08_8
  double v8; // r0
  __int64 v9; // r0
  __int64 v10; // r0
  __int64 v11; // r2
  int v12; // r0
  _QWORD v14[2]; // [sp+10h] [bp-1004h] BYREF
  __int64 v15; // [sp+20h] [bp-FF4h]
  __int64 v16; // [sp+28h] [bp-FECh]

  if ( v1 <= 0.0 )
  {
    V_LOCK(a1);
    v12 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/dhash_content/dash/dash_dhash_common.c",
      169,
      "diff_to_target_dash",
      19,
      58,
      20,
      v14);
    v3 = 4294901760LL;
    v9 = 0;
    v5 = 0;
    v7 = 0;
  }
  else
  {
    v3 = sub_12E998(
           COERCE_UNSIGNED_INT64(2.69595353e67 / v1 * 1.59309191e-58),
           HIDWORD(COERCE_UNSIGNED_INT64(2.69595353e67 / v1 * 1.59309191e-58)));
    v4 = 2.69595353e67 / v1 - sub_12E60C(v3, HIDWORD(v3)) * 6.27710174e57;
    v5 = sub_12E998(COERCE_UNSIGNED_INT64(v4 * 2.93873588e-39), HIDWORD(COERCE_UNSIGNED_INT64(v4 * 2.93873588e-39)));
    v6 = v4 - sub_12E60C(v5, HIDWORD(v5)) * 3.40282367e38;
    v7 = sub_12E998(COERCE_UNSIGNED_INT64(v6 * 5.42101086e-20), HIDWORD(COERCE_UNSIGNED_INT64(v6 * 5.42101086e-20)));
    v8 = sub_12E60C(v7, HIDWORD(v7));
    v9 = sub_12E998(
           COERCE_UNSIGNED_INT64(v6 - v8 * 1.84467441e19),
           HIDWORD(COERCE_UNSIGNED_INT64(v6 - v8 * 1.84467441e19)));
  }
  v16 = v3;
  v15 = v5;
  v14[1] = v7;
  v14[0] = v9;
  *a1 = v9;
  a1[1] = v7;
  v10 = v15;
  v11 = v16;
  a1[2] = v15;
  a1[3] = v11;
  return v10;
}
