int __fastcall sub_243DB8(int a1)
{
  _DWORD v2[16]; // [sp+Ch] [bp-48h] BYREF
  unsigned int i; // [sp+4Ch] [bp-8h]

  for ( i = 0; i <= 0xF; ++i )
    v2[i] = (*(unsigned __int8 *)(a1 + 4 * i + 40) << 24)
          + (*(unsigned __int8 *)(a1 + 4 * i + 1 + 40) << 16)
          + (*(unsigned __int8 *)(a1 + 4 * i + 2 + 40) << 8)
          + *(unsigned __int8 *)(a1 + 4 * i + 3 + 40);
  return sub_24383C(a1, (int)v2);
}
