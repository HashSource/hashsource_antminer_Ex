int __fastcall read_sensor_temp_local_eth_2282(
        int a1,
        int *a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  if ( a6 )
  {
    if ( a6 == 1 )
      sub_103468(a1, a2, a3, a9);
  }
  else
  {
    sub_103E68(a1, a2, a3, a9);
  }
  return 0;
}
