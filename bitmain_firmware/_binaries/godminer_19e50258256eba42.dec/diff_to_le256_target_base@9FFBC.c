void *__fastcall diff_to_le256_target_base(void *a1)
{
  double v1; // d0
  double v2; // d1
  __uint64_t v3; // r0
  double v4; // r0
  double v5; // r0
  double v6; // r0
  __uint64_t v7; // r0
  double v9; // [sp+18h] [bp-1054h]
  _BYTE v11[64]; // [sp+2Ch] [bp-1040h] BYREF
  _QWORD src[4]; // [sp+102Ch] [bp-40h] BYREF
  __uint64_t *v13; // [sp+104Ch] [bp-20h]
  unsigned __int64 v14; // [sp+1050h] [bp-1Ch]
  double v15; // [sp+1058h] [bp-14h]
  double v16; // [sp+1060h] [bp-Ch]

  v9 = v1;
  if ( v1 <= 0.0 )
  {
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "Diff zero passed to set_target");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/dhash_content/base_common.c",
      155,
      "diff_to_le256_target_base",
      25,
      57,
      20,
      v11);
    v9 = 1.0;
  }
  v16 = v2 / v9;
  v15 = v2 / v9 / 6.27710174e57;
  v14 = (unsigned __int64)v15;
  v13 = &src[3];
  v3 = _uint64_identity((unsigned __int64)v15);
  *v13 = v3;
  LODWORD(v4) = sub_345474(v14);
  v16 = v16 - v4 * 6.27710174e57;
  v15 = v16 / 3.40282367e38;
  v14 = (unsigned __int64)(v16 / 3.40282367e38);
  v13 = &src[2];
  src[2] = _uint64_identity(v14);
  LODWORD(v5) = sub_345474(v14);
  v16 = v16 - v5 * 3.40282367e38;
  v15 = v16 / 1.84467441e19;
  v14 = (unsigned __int64)(v16 / 1.84467441e19);
  v13 = &src[1];
  src[1] = _uint64_identity(v14);
  LODWORD(v6) = sub_345474(v14);
  v15 = v6 * 1.84467441e19;
  v16 = v16 - v6 * 1.84467441e19;
  v14 = (unsigned __int64)v16;
  v13 = src;
  v7 = _uint64_identity((unsigned __int64)v16);
  *v13 = v7;
  return memcpy(a1, src, 0x20u);
}
