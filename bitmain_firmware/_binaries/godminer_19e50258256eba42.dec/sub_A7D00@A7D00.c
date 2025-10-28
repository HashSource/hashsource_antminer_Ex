int __fastcall sub_A7D00(_DWORD *a1)
{
  int v2; // [sp+Ch] [bp-8h]

  *a1 = 36969 * (unsigned __int16)*a1 + HIWORD(*a1);
  a1[1] = 18000 * (unsigned __int16)a1[1] + HIWORD(a1[1]);
  v2 = (*a1 << 16) + a1[1];
  a1[2] ^= a1[2] << 17;
  a1[2] ^= a1[2] >> 13;
  a1[2] ^= 32 * a1[2];
  a1[3] = 69069 * a1[3] + 1234567;
  return (a1[3] ^ v2) + a1[2];
}
