unsigned __int64 __fastcall sub_225E48(unsigned int a1, unsigned int a2)
{
  unsigned __int64 v3; // [sp+8h] [bp-34h]

  LODWORD(v3) = HIWORD(a2) | (a2 << 16);
  HIDWORD(v3) = HIWORD(a1) | (((__PAIR64__(a1, a2) << 16) & 0xFFFF0000FFFF0000LL) >> 32);
  return (v3 >> 8) & 0xFF00FF00FF00FFLL | (v3 << 8) & 0xFF00FF00FF00FF00LL;
}
