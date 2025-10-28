int __fastcall set_sensor_extern_mode_dcr(int a1)
{
  if ( !sub_F446C(a1) )
    *(_DWORD *)(a1 + 552) = 1;
  return 0;
}
