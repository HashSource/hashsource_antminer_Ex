int __fastcall blake2s_init_param(void *a1, int a2)
{
  unsigned int i; // [sp+Ch] [bp-8h]

  sub_22EA48(a1);
  for ( i = 0; i <= 7; ++i )
    *((_DWORD *)a1 + i) ^= sub_22E68C((unsigned __int8 *)(a2 + 4 * i));
  return 0;
}
