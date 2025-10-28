int __fastcall read_sensor_temp_remote_dash(
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
  int v13; // [sp+14h] [bp-8h]

  v13 = -1;
  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v13 = sub_E2284(a1, a2, a3, *(unsigned __int8 *)(*(_DWORD *)(a1 + 528) + a9));
      if ( *a3 )
        *a2 -= 15;
    }
    else if ( a6 == 2 )
    {
      v13 = sub_E2C2C(a1, a2, a3, a9);
    }
  }
  else
  {
    v13 = sub_E26C0(a1, a2, a3, a9);
  }
  if ( v13 == -1 )
    return 4;
  else
    return 0;
}
