int __fastcall read_sensor_temp_remote_rvn(
        int a1,
        _DWORD *a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v11; // [sp+14h] [bp-8h] BYREF

  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v11 = 0;
      sub_1B18A4(a1, &v11, a3, *(unsigned __int8 *)(*(_DWORD *)(a1 + 528) + a9));
      *a2 = v11 - 6;
    }
  }
  else
  {
    sub_1B1CE0(a1, a2, a3, a9);
  }
  return 0;
}
