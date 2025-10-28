int __fastcall hs_header_verify_pow(_DWORD *a1, const void *a2)
{
  _BYTE s1[32]; // [sp+8h] [bp-24h] BYREF

  hs_header_pow(a1, s1);
  if ( memcmp(s1, a2, 0x20u) <= 0 )
    return 0;
  else
    return 20;
}
