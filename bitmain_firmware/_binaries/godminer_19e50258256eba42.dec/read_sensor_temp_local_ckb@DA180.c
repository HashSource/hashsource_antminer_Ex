int __fastcall read_sensor_temp_local_ckb(int a1, int *a2, _DWORD *a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v11; // [sp+14h] [bp-8h]

  v11 = -1;
  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v11 = sub_D16D0(a1, a2, a3, *(unsigned __int8 *)(*(_DWORD *)(a1 + 528) + a9));
    }
    else if ( a6 == 2 )
    {
      v11 = sub_D25A0(a1, a2, a3, a9);
    }
  }
  else
  {
    v11 = sub_D20D0(a1, a2, a3, a9);
  }
  if ( v11 == -1 )
    return 4;
  else
    return 0;
}
