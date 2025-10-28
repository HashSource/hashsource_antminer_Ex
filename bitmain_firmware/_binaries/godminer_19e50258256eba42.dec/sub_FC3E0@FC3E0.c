__int64 __fastcall sub_FC3E0(unsigned __int8 *a1)
{
  __int64 v1; // r2
  __int64 v2; // r8
  __int64 v3; // r6
  __int64 v5; // [sp+8h] [bp-54h]

  HIDWORD(v1) = a1[3];
  LODWORD(v1) = 0;
  v5 = a1[7] + (unsigned __int64)(a1[6] << 8) + (a1[5] << 16) + (a1[4] << 24) + v1;
  HIDWORD(v1) = a1[2] << 8;
  LODWORD(v1) = 0;
  v2 = v5 + v1;
  HIDWORD(v1) = a1[1] << 16;
  LODWORD(v1) = 0;
  v3 = v2 + v1;
  HIDWORD(v1) = *a1 << 24;
  LODWORD(v1) = 0;
  return v3 + v1;
}
