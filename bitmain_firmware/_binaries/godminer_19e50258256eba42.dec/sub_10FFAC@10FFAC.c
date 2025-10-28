int __fastcall sub_10FFAC(unsigned int a1)
{
  return ((unsigned __int64)a1 >> 24) | (a1 << 8) & 0xFF0000 | (a1 >> 8) & 0xFF00 | (a1 << 24);
}
