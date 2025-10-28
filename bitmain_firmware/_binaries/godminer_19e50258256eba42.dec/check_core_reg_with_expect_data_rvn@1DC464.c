int __fastcall check_core_reg_with_expect_data_rvn(int a1, int a2, unsigned __int8 a3, __int16 a4, unsigned int a5)
{
  int v5; // r4
  unsigned int v6; // r4
  unsigned int v13; // [sp+Ch] [bp-20h]
  void *ptr; // [sp+10h] [bp-1Ch]
  unsigned int i; // [sp+14h] [bp-18h]
  int v16; // [sp+18h] [bp-14h]
  int v17; // [sp+1Ch] [bp-10h]

  v17 = 5;
  ptr = malloc(0x1800u);
  while ( v17-- )
  {
    v16 = 0;
    v13 = sub_1D13F0(a1, a3, a4, ptr);
    if ( !v13 )
      break;
    for ( i = 0; v13 > i; ++i )
    {
      v5 = *((_DWORD *)ptr + 3 * i);
      v6 = v5 & sub_1C65C0(a5);
      if ( v6 == sub_1C65C0(a5) )
        ++v16;
    }
    if ( v16 == v13 )
    {
      free(ptr);
      return 0;
    }
    usleep(0x7A120u);
  }
  free(ptr);
  return 22;
}
