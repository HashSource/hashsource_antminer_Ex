int __fastcall sub_617B4(int result)
{
  _DWORD *v1; // r5
  int v2; // r3
  int v3; // r9
  int i; // r0
  int v5; // r6
  int v6; // r0
  int v7; // r4
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // [sp+4h] [bp-10h]
  int v12; // [sp+Ch] [bp-8h]

  v1 = (_DWORD *)dword_48769C;
  v2 = dword_487668;
  dword_487668 = dword_48769C;
  v11 = v2;
  if ( dword_48769C )
  {
    v3 = result;
    for ( i = sub_191AE8(result); ; i = sub_191AE8(result) )
    {
      result = sub_60614(i);
      v5 = result;
      if ( result )
      {
        v6 = sub_191AE8(result);
        v7 = sub_19168C(v6);
        v12 = dword_46DC04;
        sub_22F070(v7);
        sub_2594D8(*(_DWORD *)(v5 + 32), "library-unloaded");
        sub_257400(v7, *(_DWORD *)(v5 + 32));
        sub_257610(v7, "id", v3 + 8);
        sub_257610(v7, "target-name", v3 + 8);
        v8 = sub_257610(v7, "host-name", v3 + 520);
        v9 = sub_16F67C(v8);
        if ( !((int (__fastcall *)(int))loc_16D8AC)(v9) )
        {
          v10 = sub_1836B0(0);
          sub_2576BC(v7, "thread-group", "i%d", *(_DWORD *)(v10 + 8));
        }
        sub_257400(v7, 0);
        result = sub_256834(*(_DWORD *)(v5 + 32));
        if ( v12 == 1 )
        {
          result = sub_22F070(result);
        }
        else if ( v12 )
        {
          if ( v12 == 2 )
            result = sub_22F01C(result);
        }
        else
        {
          result = sub_22EFA4(result);
        }
      }
      v1 = (_DWORD *)*v1;
      if ( !v1 )
        break;
      dword_487668 = (int)v1;
    }
  }
  dword_487668 = v11;
  return result;
}
