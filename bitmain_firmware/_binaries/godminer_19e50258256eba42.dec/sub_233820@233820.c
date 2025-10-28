__int64 __fastcall sub_233820(unsigned __int8 *a1)
{
  __int64 v2; // [sp+0h] [bp-5Ch]

  LODWORD(v2) = *a1 | (a1[1] << 8) | (a1[2] << 16) | (a1[3] << 24);
  HIDWORD(v2) = ((*a1 | (unsigned __int64)(a1[1] << 8)) >> 32) | a1[4] | (a1[5] << 8) | (a1[6] << 16) | (a1[7] << 24);
  return v2;
}
