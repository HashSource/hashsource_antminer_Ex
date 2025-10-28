int __fastcall blake2b_init_param(void *a1, int a2)
{
  unsigned int i; // [sp+Ch] [bp-10h]

  sub_233E6C(a1);
  for ( i = 0; i <= 7; ++i )
    *((_QWORD *)a1 + i) ^= sub_233820((unsigned __int8 *)(a2 + 8 * i));
  return 0;
}
