int __fastcall sub_61254(int result)
{
  _DWORD *v1; // r4
  int v2; // r10
  int v3; // r7
  int i; // r0
  int v5; // r5
  int v6; // [sp+4h] [bp-24h]

  if ( !dword_474848 && *(int *)(result + 24) > 0 )
  {
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
          v6 = dword_46DC04;
          sub_22F070(result);
          sub_2594D8(*(_DWORD *)(v5 + 32), "breakpoint-deleted,id=\"%d\"", *(_DWORD *)(v3 + 24));
          result = sub_256834(*(_DWORD *)(v5 + 32));
          if ( v6 == 1 )
          {
            result = sub_22F070(result);
          }
          else if ( v6 )
          {
            if ( v6 == 2 )
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
  }
  return result;
}
