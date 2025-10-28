int __fastcall hs_header_sub_hash(_DWORD *a1)
{
  unsigned __int64 *v2; // [sp+4h] [bp-174h] BYREF
  unsigned __int64 v3[16]; // [sp+8h] [bp-170h] BYREF
  _BYTE v4[240]; // [sp+88h] [bp-F0h] BYREF

  v2 = v3;
  hs_header_sub_write(a1, (int *)&v2);
  return hs_blake2b_update((int)v4, v3, 0x80u);
}
