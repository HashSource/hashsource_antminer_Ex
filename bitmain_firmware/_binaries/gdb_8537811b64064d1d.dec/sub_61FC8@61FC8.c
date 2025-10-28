int __fastcall sub_61FC8(int result)
{
  _DWORD *v1; // r4
  int v2; // r10
  int v3; // r7
  int v4; // r6
  int v5; // [sp+4h] [bp-4h]

  v1 = (_DWORD *)dword_48769C;
  v2 = dword_487668;
  dword_487668 = dword_48769C;
  if ( dword_48769C )
  {
    v3 = result;
    for ( result = sub_191AE8(result); ; result = sub_191AE8(result) )
    {
      if ( result )
      {
        result = sub_60614(result);
        v4 = result;
        if ( result )
        {
          v5 = dword_46DC04;
          sub_22F070(result);
          sub_2594D8(*(_DWORD *)(v4 + 32), "thread-group-added,id=\"i%d\"", *(_DWORD *)(v3 + 8));
          result = sub_256834(*(_DWORD *)(v4 + 32));
          if ( v5 == 1 )
          {
            result = sub_22F070(result);
          }
          else if ( v5 )
          {
            if ( v5 == 2 )
              result = sub_22F01C(result);
          }
          else
          {
            result = sub_22EFA4(result);
          }
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
