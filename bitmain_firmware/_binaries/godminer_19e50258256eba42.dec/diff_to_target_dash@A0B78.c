void *__fastcall diff_to_target_dash(void *a1)
{
  double v1; // d0
  __int64 v2; // r0
  double v3; // r0
  __int64 v4; // r0
  double v5; // r0
  __int64 v6; // r0
  double v7; // r0
  __int64 v8; // r0
  double v10; // [sp+10h] [bp-1054h]
  _BYTE v12[64]; // [sp+24h] [bp-1040h] BYREF
  _BYTE src[32]; // [sp+1024h] [bp-40h] BYREF
  _BYTE *v14; // [sp+1044h] [bp-20h]
  __int64 v15; // [sp+1048h] [bp-1Ch]
  double v16; // [sp+1050h] [bp-14h]
  double v17; // [sp+1058h] [bp-Ch]

  v10 = v1;
  if ( v1 <= 0.0 )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "Diff zero passed to set_target");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/dhash_content/dash/dash_dhash_common.c",
      166,
      "diff_to_target_dash",
      19,
      58,
      20,
      v12);
    v10 = 1.0;
  }
  v17 = 2.69595353e67 / v10;
  v16 = 2.69595353e67 / v10 / 6.27710174e57;
  v15 = (unsigned __int64)v16;
  v14 = &src[24];
  sub_A0990();
  *(_QWORD *)v14 = v2;
  LODWORD(v3) = sub_345474(v15);
  v17 = v17 - v3 * 6.27710174e57;
  v16 = v17 / 3.40282367e38;
  v15 = (unsigned __int64)(v17 / 3.40282367e38);
  v14 = &src[16];
  sub_A0990();
  *(_QWORD *)v14 = v4;
  LODWORD(v5) = sub_345474(v15);
  v17 = v17 - v5 * 3.40282367e38;
  v16 = v17 / 1.84467441e19;
  v15 = (unsigned __int64)(v17 / 1.84467441e19);
  v14 = &src[8];
  sub_A0990();
  *(_QWORD *)v14 = v6;
  LODWORD(v7) = sub_345474(v15);
  v16 = v7 * 1.84467441e19;
  v17 = v17 - v7 * 1.84467441e19;
  v15 = (unsigned __int64)v17;
  v14 = src;
  sub_A0990();
  *(_QWORD *)v14 = v8;
  return memcpy(a1, src, 0x20u);
}
