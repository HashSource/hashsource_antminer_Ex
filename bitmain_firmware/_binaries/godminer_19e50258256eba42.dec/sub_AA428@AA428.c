void __fastcall sub_AA428(const unsigned __int8 *a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int8 v4[32]; // [sp+10h] [bp-24h] BYREF

  sha256(a1, a3, v4);
  sha256(v4, 0x20u, a2);
}
