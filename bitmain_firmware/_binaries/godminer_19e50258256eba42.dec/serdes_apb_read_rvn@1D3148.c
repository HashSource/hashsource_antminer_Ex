unsigned int __fastcall serdes_apb_read_rvn(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int16 a4)
{
  int v4; // r3
  unsigned int v9; // [sp+8h] [bp-14h]
  int v10; // [sp+Ch] [bp-10h]
  unsigned __int8 *ptr; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  sub_1D0F04(a1, a3, 78, a4 | 0x310000);
  ptr = (unsigned __int8 *)malloc(0x1800u);
  v10 = sub_1D13F0(a1, a3, 79, ptr);
  if ( v10 )
  {
    for ( i = 0; ; ++i )
    {
      v4 = v10;
      if ( i >= v10 )
        break;
      if ( a2 == ptr[12 * i + 4] && a3 == ptr[12 * i + 8] )
      {
        v9 = sub_1C65C0(*(_DWORD *)&ptr[12 * i]);
        free(ptr);
        return v9;
      }
    }
  }
  else
  {
    free(ptr);
    return -1;
  }
  return v4;
}
