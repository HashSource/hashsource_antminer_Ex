bool __fastcall ethash_quick_check_difficulty(const void *a1, __int64 a2, void *a3, int a4)
{
  int v5; // r4
  unsigned int v6; // r4
  _BYTE v9[32]; // [sp+1Ch] [bp-30h] BYREF
  int i; // [sp+3Ch] [bp-10h]

  ethash_quick_hash(v9, a1, a2, a3);
  for ( i = 0; i <= 31; ++i )
  {
    v5 = sub_1BD19C((int)v9, i);
    if ( v5 != sub_1BD19C(a4, i) )
    {
      v6 = sub_1BD19C((int)v9, i);
      return v6 < sub_1BD19C(a4, i);
    }
  }
  return 1;
}
