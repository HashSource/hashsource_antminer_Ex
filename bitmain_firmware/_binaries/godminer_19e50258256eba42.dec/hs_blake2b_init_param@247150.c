int __fastcall hs_blake2b_init_param(_DWORD *a1, unsigned __int8 *a2)
{
  unsigned int i; // [sp+Ch] [bp-10h]

  sub_2470D4(a1);
  for ( i = 0; i <= 7; ++i )
    *(_QWORD *)&a1[2 * i] ^= sub_246E48(&a2[8 * i]);
  a1[57] = *a2;
  return 0;
}
