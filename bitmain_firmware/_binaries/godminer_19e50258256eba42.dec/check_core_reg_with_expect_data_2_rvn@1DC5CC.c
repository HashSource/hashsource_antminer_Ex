int __fastcall check_core_reg_with_expect_data_2_rvn(
        int a1,
        int a2,
        unsigned __int8 a3,
        __int16 a4,
        unsigned int a5,
        int a6)
{
  int v6; // r4
  unsigned int v7; // r4
  unsigned int v14; // [sp+Ch] [bp-20h]
  void *ptr; // [sp+10h] [bp-1Ch]
  unsigned int i; // [sp+14h] [bp-18h]
  int v17; // [sp+18h] [bp-14h]
  int v18; // [sp+1Ch] [bp-10h]

  v18 = 1000 * a6 / 500;
  ptr = malloc(0x1800u);
  while ( v18-- )
  {
    v17 = 0;
    v14 = sub_1D13F0(a1, a3, a4, ptr);
    if ( !v14 )
      break;
    for ( i = 0; v14 > i; ++i )
    {
      v6 = *((_DWORD *)ptr + 3 * i);
      v7 = v6 & sub_1C65C0(a5);
      if ( v7 == sub_1C65C0(a5) )
        ++v17;
    }
    if ( v17 == v14 )
    {
      free(ptr);
      return 0;
    }
    usleep(0x7A120u);
  }
  free(ptr);
  return 22;
}
