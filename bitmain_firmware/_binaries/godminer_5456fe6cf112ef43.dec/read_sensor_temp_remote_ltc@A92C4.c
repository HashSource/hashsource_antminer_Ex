int __fastcall read_sensor_temp_remote_ltc(int a1, int *a2, _DWORD *a3, int a4, int a5, int a6, int a7, int a8)
{
  if ( a5 )
  {
    if ( a5 == 1 )
    {
      sub_A9128(a1, a2, a3, *(unsigned __int8 *)(*(_DWORD *)(a1 + 296) + a8));
      if ( *a3 )
      {
        if ( *a2 != -64 )
          *a2 += 15;
      }
    }
    return 0;
  }
  else
  {
    sub_A8FE4((unsigned __int8 *)(a1 + 140), a2, a3, a8);
    return 0;
  }
}
