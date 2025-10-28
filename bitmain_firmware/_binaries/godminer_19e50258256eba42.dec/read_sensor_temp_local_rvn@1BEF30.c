int __fastcall read_sensor_temp_local_rvn(int a1, int *a2, _DWORD *a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  if ( a6 )
  {
    if ( a6 == 1 )
      sub_1B1078(a1, a2, a3, *(unsigned __int8 *)(*(_DWORD *)(a1 + 528) + a9));
  }
  else
  {
    sub_1B1A78(a1, a2, a3, a9);
  }
  return 0;
}
