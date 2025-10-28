void *__fastcall diff_to_be256_target_base(void *a1)
{
  double v1; // d0
  double v2; // d1
  __int64 v3; // r0
  double v4; // r0
  __int64 v5; // r0
  double v6; // r0
  __int64 v7; // r0
  double v8; // r0
  __int64 v9; // r0
  double v11; // [sp+18h] [bp-1054h]
  _BYTE v13[64]; // [sp+2Ch] [bp-1040h] BYREF
  _BYTE src[32]; // [sp+102Ch] [bp-40h] BYREF
  _BYTE *v15; // [sp+104Ch] [bp-20h]
  unsigned __int64 v16; // [sp+1050h] [bp-1Ch]
  double v17; // [sp+1058h] [bp-14h]
  double v18; // [sp+1060h] [bp-Ch]

  v11 = v1;
  if ( v1 <= 0.0 )
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "Diff zero passed to set_target");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/dhash_content/base_common.c",
      155,
      "diff_to_be256_target_base",
      25,
      169,
      20,
      v13);
    v11 = 1.0;
  }
  v18 = v2 / v11;
  v17 = v2 / v11 / 6.27710174e57;
  v16 = (unsigned __int64)v17;
  v15 = src;
  LODWORD(v3) = sub_9FD90((unsigned __int64)v17, (unsigned __int64)v17 >> 32);
  *(_QWORD *)v15 = v3;
  LODWORD(v4) = sub_345474(v16);
  v18 = v18 - v4 * 6.27710174e57;
  v17 = v18 / 3.40282367e38;
  v16 = (unsigned __int64)(v18 / 3.40282367e38);
  v15 = &src[8];
  LODWORD(v5) = sub_9FD90(v16, HIDWORD(v16));
  *(_QWORD *)v15 = v5;
  LODWORD(v6) = sub_345474(v16);
  v18 = v18 - v6 * 3.40282367e38;
  v17 = v18 / 1.84467441e19;
  v16 = (unsigned __int64)(v18 / 1.84467441e19);
  v15 = &src[16];
  LODWORD(v7) = sub_9FD90(v16, HIDWORD(v16));
  *(_QWORD *)v15 = v7;
  LODWORD(v8) = sub_345474(v16);
  v17 = v8 * 1.84467441e19;
  v18 = v18 - v8 * 1.84467441e19;
  v16 = (unsigned __int64)v18;
  v15 = &src[24];
  LODWORD(v9) = sub_9FD90((unsigned __int64)v18, (unsigned __int64)v18 >> 32);
  *(_QWORD *)v15 = v9;
  return memcpy(a1, src, 0x20u);
}
