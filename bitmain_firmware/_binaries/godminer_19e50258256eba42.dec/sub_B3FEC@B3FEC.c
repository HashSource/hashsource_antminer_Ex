int __fastcall sub_B3FEC(char a1)
{
  _DWORD v3[5]; // [sp+1Ch] [bp-40h] BYREF
  char *flag_from_monitor; // [sp+30h] [bp-2Ch]
  _DWORD *all_created_runtime; // [sp+34h] [bp-28h]
  int i; // [sp+38h] [bp-24h]
  unsigned __int8 v7; // [sp+3Fh] [bp-1Dh]

  v7 = 0;
  v3[0] = 0;
  all_created_runtime = get_all_created_runtime(v3);
  for ( i = 0; i < v3[0]; ++i )
  {
    flag_from_monitor = get_flag_from_monitor(all_created_runtime[i]);
    v3[4] = flag_from_monitor;
    v3[3] = 0;
    if ( (*(_QWORD *)flag_from_monitor & 1LL) != 0 )
    {
      v3[2] = flag_from_monitor;
      v3[1] = 0;
      *((_QWORD *)flag_from_monitor + 1) |= 1uLL;
      if ( a1 )
        v7 = 1;
    }
  }
  return v7;
}
