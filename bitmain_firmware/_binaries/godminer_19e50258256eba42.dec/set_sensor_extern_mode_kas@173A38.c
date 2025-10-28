int __fastcall set_sensor_extern_mode_kas(int a1)
{
  if ( !sub_16A768(a1) )
    *(_DWORD *)(a1 + 552) = 1;
  return 0;
}
