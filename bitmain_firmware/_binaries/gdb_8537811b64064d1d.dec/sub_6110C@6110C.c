int __fastcall sub_6110C(int result, int a2)
{
  _DWORD *v2; // r4
  int v3; // r3
  int i; // r0
  int v6; // r6
  int v7; // r0
  int v8; // r5
  int v9; // [sp+0h] [bp-38h]
  int v10; // [sp+4h] [bp-34h]
  int v11; // [sp+Ch] [bp-2Ch]

  if ( !dword_47484C )
  {
    v2 = (_DWORD *)dword_48769C;
    v3 = dword_487668;
    dword_487668 = dword_48769C;
    v10 = v3;
    if ( dword_48769C )
    {
      v9 = result;
      for ( i = sub_191AE8(result); ; i = sub_191AE8(result) )
      {
        result = sub_60614(i);
        v6 = result;
        if ( result )
        {
          v7 = sub_191AE8(result);
          v8 = sub_19168C(v7);
          v11 = dword_46DC04;
          sub_22F070(v8);
          sub_2594D8(*(_DWORD *)(v6 + 32), "cmd-param-changed");
          sub_257400(v8, *(_DWORD *)(v6 + 32));
          sub_257610(v8, "param", v9);
          sub_257610(v8, "value", a2);
          sub_257400(v8, 0);
          result = sub_256834(*(_DWORD *)(v6 + 32));
          if ( v11 == 1 )
          {
            result = sub_22F070(result);
          }
          else if ( v11 )
          {
            if ( v11 == 2 )
              result = sub_22F01C(result);
          }
          else
          {
            result = sub_22EFA4(result);
          }
        }
        v2 = (_DWORD *)*v2;
        if ( !v2 )
          break;
        dword_487668 = (int)v2;
      }
    }
    dword_487668 = v10;
  }
  return result;
}
