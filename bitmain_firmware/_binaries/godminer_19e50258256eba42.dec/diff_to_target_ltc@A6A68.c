void *__fastcall diff_to_target_ltc(void *a1)
{
  double v1; // d0
  __int64 v2; // r0
  double v3; // r0
  __int64 v4; // r0
  double v5; // r0
  __int64 v6; // r0
  double v7; // r0
  __int64 v8; // r0
  double v10; // [sp+0h] [bp-54h]
  _BYTE src[32]; // [sp+14h] [bp-40h] BYREF
  _BYTE *v13; // [sp+34h] [bp-20h]
  __int64 v14; // [sp+38h] [bp-1Ch]
  double v15; // [sp+40h] [bp-14h]
  double v16; // [sp+48h] [bp-Ch]

  v10 = v1;
  if ( v1 <= 0.0 )
    v10 = 1.0;
  v16 = 2.69595353e67 * 65536.0 / v10;
  v15 = v16 / 6.27710174e57;
  v14 = (unsigned __int64)(v16 / 6.27710174e57);
  v13 = &src[24];
  sub_A6A40();
  *(_QWORD *)v13 = v2;
  LODWORD(v3) = sub_345474(v14);
  v16 = v16 - v3 * 6.27710174e57;
  v15 = v16 / 3.40282367e38;
  v14 = (unsigned __int64)(v16 / 3.40282367e38);
  v13 = &src[16];
  sub_A6A40();
  *(_QWORD *)v13 = v4;
  LODWORD(v5) = sub_345474(v14);
  v16 = v16 - v5 * 3.40282367e38;
  v15 = v16 / 1.84467441e19;
  v14 = (unsigned __int64)(v16 / 1.84467441e19);
  v13 = &src[8];
  sub_A6A40();
  *(_QWORD *)v13 = v6;
  LODWORD(v7) = sub_345474(v14);
  v15 = v7 * 1.84467441e19;
  v16 = v16 - v7 * 1.84467441e19;
  v14 = (unsigned __int64)v16;
  v13 = src;
  sub_A6A40();
  *(_QWORD *)v13 = v8;
  return memcpy(a1, src, 0x20u);
}
