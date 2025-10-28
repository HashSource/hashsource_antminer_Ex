int __fastcall sub_628AC(int result)
{
  _DWORD *v1; // r4
  int v2; // r11
  int v3; // r8
  int i; // r0
  int v5; // r5
  int v6; // r0
  int v7; // r6
  int v8; // [sp+4h] [bp-8h]

  v1 = (_DWORD *)dword_48769C;
  v2 = dword_487668;
  dword_487668 = dword_48769C;
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
        v8 = dword_46DC04;
        sub_22F070(v7);
        sub_2594D8(*(_DWORD *)(v5 + 32), "library-loaded");
        sub_257400(v7, *(_DWORD *)(v5 + 32));
        sub_62774(v7, v3);
        sub_257400(v7, 0);
        result = sub_256834(*(_DWORD *)(v5 + 32));
        if ( v8 == 1 )
        {
          result = sub_22F070(result);
        }
        else if ( v8 )
        {
          if ( v8 == 2 )
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
  dword_487668 = v2;
  return result;
}
